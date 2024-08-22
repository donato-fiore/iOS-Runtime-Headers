// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEFERREDCAPTURECONTROLLER_H
#define BWDEFERREDCAPTURECONTROLLER_H

@class NSString;
@protocol BWDeferredCaptureControllerInputUpdatesDelegate;


#import "BWStillImageProcessorController.h"
#import "BWDeferredCaptureContainer.h"

@interface BWDeferredCaptureController : BWStillImageProcessorController <BWDeferredCaptureControllerInputUpdatesDelegate>

 {
    BWDeferredCaptureContainer *_captureContainer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)usesCustomProcessingFlow;
-(id)initWithConfiguration:(id)arg0 ;
-(id)requestForInput:(id)arg0 delegate:(id)arg1 errOut:(*int)arg2 ;
-(int)prepare;
-(int)process;
-(void)_addInferencesToInput:(id)arg0 request:(id)arg1 ;
-(void)cancelProcessing;
-(void)input:(id)arg0 encounteredProcessingError:(int)arg1 ;
-(void)inputReceivedIntermediate:(id)arg0 ;
-(void)reset;


@end


#endif