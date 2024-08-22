// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMATTRIBUTEREADREQUEST_H
#define HMATTRIBUTEREADREQUEST_H

@class NSString;
@protocol HMReadOperation;


#import "HMAttributeRequest.h"

@interface HMAttributeReadRequest : HMAttributeRequest <HMReadOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)readRequestWithAccessoryProfile:(id)arg0 attribute:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif