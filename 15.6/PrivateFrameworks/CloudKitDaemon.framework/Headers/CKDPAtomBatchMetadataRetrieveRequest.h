// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPATOMBATCHMETADATARETRIEVEREQUEST_H
#define CKDPATOMBATCHMETADATARETRIEVEREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;


#import "CKDPDistributedValueIdentifier.h"

@interface CKDPAtomBatchMetadataRetrieveRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *continuation; // ivar: _continuation
@property (readonly, nonatomic) BOOL hasContinuation;
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