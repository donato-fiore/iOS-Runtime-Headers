// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMPBAPPCLIPSESSIONENGAGEMENTTRACKER_H
#define ATXMPBAPPCLIPSESSIONENGAGEMENTTRACKER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXMPBAppClipSessionEngagementTracker : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasInteractionType;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (nonatomic) int interactionType; // ivar: _interactionType
@property (retain, nonatomic) NSString *urlHash; // ivar: _urlHash


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)interactionTypeAsString:(int)arg0 ;
-(int)StringAsInteractionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif