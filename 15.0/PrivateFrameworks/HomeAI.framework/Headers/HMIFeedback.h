// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIFEEDBACK_H
#define HMIFEEDBACK_H

@class HMFObject;



@interface HMIFeedback : HMFObject



+(void)submitFeedbackWithCameraProfileUUID:(id)arg0 clipUUID:(id)arg1 completionHandler:(id)arg2 ;
+(void)submitFeedbackWithCameraProfileUUID:(id)arg0 clipUUID:(id)arg1 runRemotely:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif