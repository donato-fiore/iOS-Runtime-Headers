// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPRECORDRETRIEVECHANGESRESPONSEMERGEABLEDELTACHANGE_H
#define CKDPRECORDRETRIEVECHANGESRESPONSEMERGEABLEDELTACHANGE_H

@class PBCodable, NSMutableArray, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPRecordFieldIdentifier.h"
#import "CKDPMergeableValueIdentifier.h"
#import "CKDPRecordType.h"

@interface CKDPRecordRetrieveChangesResponseMergeableDeltaChange : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *deltas; // ivar: _deltas
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier; // ivar: _fieldIdentifier
@property (readonly, nonatomic) BOOL hasFieldIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (readonly, nonatomic) BOOL hasRecordType;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) CKDPRecordType *recordType; // ivar: _recordType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltasAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addDeltas:(id)arg0 ;
-(void)clearDeltas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif