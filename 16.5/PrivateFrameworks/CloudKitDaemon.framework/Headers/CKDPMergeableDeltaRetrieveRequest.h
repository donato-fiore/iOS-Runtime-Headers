// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPMERGEABLEDELTARETRIEVEREQUEST_H
#define CKDPMERGEABLEDELTARETRIEVEREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;


#import "CKDPMergeableValueIdentifier.h"

@interface CKDPMergeableDeltaRetrieveRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *continuation; // ivar: _continuation
@property (readonly, nonatomic) BOOL hasContinuation;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // ivar: _identifier


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif