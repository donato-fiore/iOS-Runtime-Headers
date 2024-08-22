// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPMERGEABLEDELTASAVEREQUEST_H
#define CKDPMERGEABLEDELTASAVEREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "CKDPMergeableDelta.h"
#import "CKDPMergeableValueIdentifier.h"

@interface CKDPMergeableDeltaSaveRequest : PBRequest <NSCopying>



@property (retain, nonatomic) CKDPMergeableDelta *delta; // ivar: _delta
@property (readonly, nonatomic) BOOL hasDelta;
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