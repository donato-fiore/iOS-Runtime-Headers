// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNATURALLIGHTINGENABLEDRETRYCONTEXT_H
#define HMDNATURALLIGHTINGENABLEDRETRYCONTEXT_H

@class HMFObject;
@protocol NSCopying;



@interface HMDNaturalLightingEnabledRetryContext : HMFObject <NSCopying>



@property (readonly) id *completion; // ivar: _completion
@property (readonly) BOOL naturalLightingEnabled; // ivar: _naturalLightingEnabled
@property NSUInteger retryCount; // ivar: _retryCount


-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initWithNaturalLightingEnabled:(BOOL)arg0 completion:(id)arg1 retryCount:(unk)arg2  ;


@end


#endif