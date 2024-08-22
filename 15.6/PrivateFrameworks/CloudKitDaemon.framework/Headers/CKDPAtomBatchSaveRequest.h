// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPATOMBATCHSAVEREQUEST_H
#define CKDPATOMBATCHSAVEREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "CKDPAtomBatch.h"
#import "CKDPDistributedValueIdentifier.h"

@interface CKDPAtomBatchSaveRequest : PBRequest <NSCopying>



@property (retain, nonatomic) CKDPAtomBatch *atomBatch; // ivar: _atomBatch
@property (readonly, nonatomic) BOOL hasAtomBatch;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPDistributedValueIdentifier *identifier; // ivar: _identifier


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif