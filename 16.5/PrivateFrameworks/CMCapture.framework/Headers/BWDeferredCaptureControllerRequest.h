// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEFERREDCAPTURECONTROLLERREQUEST_H
#define BWDEFERREDCAPTURECONTROLLERREQUEST_H



#import "BWStillImageProcessorControllerRequest.h"

@interface BWDeferredCaptureControllerRequest : BWStillImageProcessorControllerRequest

@property (nonatomic) int err; // ivar: _err


-(BOOL)readyForProcessing;


@end


#endif