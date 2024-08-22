// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPREALTIMEMESSAGEASSOCIATEDMERGEABLEDELTAS_H
#define CKDPREALTIMEMESSAGEASSOCIATEDMERGEABLEDELTAS_H

@class PBCodable, NSMutableArray, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPRecordFieldIdentifier.h"
#import "CKDPMergeableValueIdentifier.h"

@interface CKDPRealTimeMessageAssociatedMergeableDeltas : PBCodable <NSCopying>



@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier; // ivar: _fieldIdentifier
@property (readonly, nonatomic) BOOL hasFieldIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *mergeableDeltas; // ivar: _mergeableDeltas
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mergeableDeltasAtIndex:(NSUInteger)arg0 ;
-(void)addMergeableDeltas:(id)arg0 ;
-(void)clearMergeableDeltas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif