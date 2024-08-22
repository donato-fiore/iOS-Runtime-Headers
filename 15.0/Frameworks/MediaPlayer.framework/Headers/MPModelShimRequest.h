// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSHIMREQUEST_H
#define MPMODELSHIMREQUEST_H



#import "MPRequest.h"
#import "MPModelRequest.h"

@interface MPModelShimRequest : MPRequest

@property (retain, nonatomic) MPModelRequest *modelRequest; // ivar: _modelRequest


+(Class)responseClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)middlewareClasses;


@end


#endif