// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELSTATICREQUEST_H
#define MPMODELSTATICREQUEST_H



#import "MPModelRequest.h"
#import "MPModelStaticResponse.h"

@interface MPModelStaticRequest : MPModelRequest

@property (retain, nonatomic) MPModelStaticResponse *staticResponse; // ivar: _staticResponse


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif