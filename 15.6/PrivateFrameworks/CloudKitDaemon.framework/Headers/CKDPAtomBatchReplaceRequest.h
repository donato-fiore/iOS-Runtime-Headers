// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPATOMBATCHREPLACEREQUEST_H
#define CKDPATOMBATCHREPLACEREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "CKDPDistributedValueIdentifier.h"

@interface CKDPAtomBatchReplaceRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *atomBatches; // ivar: _atomBatches
@property (retain, nonatomic) NSMutableArray *batchIdentifiers; // ivar: _batchIdentifiers
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPDistributedValueIdentifier *identifier; // ivar: _identifier


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)atomBatchesAtIndex:(NSUInteger)arg0 ;
-(id)batchIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAtomBatches:(id)arg0 ;
-(void)addBatchIdentifiers:(id)arg0 ;
-(void)clearAtomBatches;
-(void)clearBatchIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif