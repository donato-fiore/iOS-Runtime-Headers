// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDRETRIEVECHANGESRESPONSEATOMBATCHCHANGE_H
#define CKDPRECORDRETRIEVECHANGESRESPONSEATOMBATCHCHANGE_H

@class PBCodable, NSMutableArray, CKDPRecordIdentifier;
@protocol NSCopying;


#import "CKDPRecordFieldIdentifier.h"
#import "CKDPDistributedValueIdentifier.h"
#import "CKDPRecordType.h"

@interface CKDPRecordRetrieveChangesResponseAtomBatchChange : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *atomBatchs; // ivar: _atomBatchs
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier; // ivar: _fieldIdentifier
@property (readonly, nonatomic) BOOL hasFieldIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (readonly, nonatomic) BOOL hasRecordType;
@property (retain, nonatomic) CKDPDistributedValueIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) CKDPRecordType *recordType; // ivar: _recordType


+(Class)atomBatchType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)atomBatchAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAtomBatch:(id)arg0 ;
-(void)clearAtomBatchs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif