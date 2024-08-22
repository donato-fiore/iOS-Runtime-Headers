// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDVRGBCAPTURECONTROLLER_H
#define CIDVRGBCAPTURECONTROLLER_H

@protocol OS_dispatch_queue, PADAuditDataRepository, CIDVRGBCaptureUICoordinator, CIDVRGBCaptureDelegate, CIDVRGBCaptureImageQualityDelegate;

#import <Foundation/Foundation.h>

#import "CIDVRGBCaptureConfig.h"

@interface CIDVRGBCaptureController : NSObject {
    CIDVRGBCaptureConfig *_config;
    NSObject<OS_dispatch_queue> *_queue;
    id<PADAuditDataRepository> *_audit;
    id<CIDVRGBCaptureUICoordinator> *_ui;
    id<CIDVRGBCaptureDelegate> *_captureDelegate;
    id<CIDVRGBCaptureImageQualityDelegate> *_imageQualityDelegate;
}




-(id)_captureResultFromUIResult:(id)arg0 ;
-(id)init;
-(void)_finishUIWithError:(id)arg0 ;
-(void)_handleResult:(id)arg0 error:(id)arg1 ;
// -(void)_startCaptureUIWithErrorHandler:(id)arg0 successHandler:(unk)arg1  ;
-(void)cancel;
-(void)dealloc;
-(void)setUi:(id)arg0 ;
-(void)startLivenessDetectionWithConfig:(id)arg0 captureDelegate:(id)arg1 imageQualityDelegate:(id)arg2 ;


@end


#endif