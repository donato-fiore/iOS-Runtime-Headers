// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPSUBSCRIPTION_H
#define CKDPSUBSCRIPTION_H

@class PBCodable, NSMutableArray, CKDPIdentifier, CKDPRecordZoneIdentifier;
@protocol NSCopying;


#import "CKDPSubscriptionNotification.h"

@interface CKDPSubscription : PBCodable <NSCopying>

 {
    ? _mutationTriggers;
    ? _has;
}


@property (nonatomic) int evaluationType; // ivar: _evaluationType
@property (retain, nonatomic) NSMutableArray *filters; // ivar: _filters
@property (nonatomic) BOOL fireOnce; // ivar: _fireOnce
@property (nonatomic) BOOL hasEvaluationType;
@property (nonatomic) BOOL hasFireOnce;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasNotification;
@property (nonatomic) BOOL hasOwner;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) *int mutationTriggers;
@property (readonly, nonatomic) NSUInteger mutationTriggersCount;
@property (retain, nonatomic) CKDPSubscriptionNotification *notification; // ivar: _notification
@property (nonatomic) int owner; // ivar: _owner
@property (retain, nonatomic) NSMutableArray *recordTypes; // ivar: _recordTypes
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)evaluationTypeAsString:(int)arg0 ;
-(id)filtersAtIndex:(NSUInteger)arg0 ;
-(id)mutationTriggersAsString:(int)arg0 ;
-(id)ownerAsString:(int)arg0 ;
-(id)recordTypesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEvaluationType:(id)arg0 ;
-(int)StringAsMutationTriggers:(id)arg0 ;
-(int)StringAsOwner:(id)arg0 ;
-(int)mutationTriggersAtIndex:(NSUInteger)arg0 ;
-(void)addFilters:(id)arg0 ;
-(void)addMutationTriggers:(int)arg0 ;
-(void)addRecordTypes:(id)arg0 ;
-(void)clearFilters;
-(void)clearMutationTriggers;
-(void)clearRecordTypes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif