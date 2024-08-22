// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDVRGBCAPTUREDEFAULTUICOORDINATOR_H
#define CIDVRGBCAPTUREDEFAULTUICOORDINATOR_H

@class UINavigationController, UIViewController, NSString;
@protocol CIDVRGBCaptureUICoordinator, CIDVRGBCaptureSelfieController;

#import <Foundation/Foundation.h>

#import "CIDVRGBCaptureUIConfig.h"

@interface CIDVRGBCaptureDefaultUICoordinator : NSObject <CIDVRGBCaptureUICoordinator>

 {
    id *_completionHandler;
    UINavigationController *_navigationVC;
    UIViewController *_originalTopVC;
    id<CIDVRGBCaptureSelfieController> *_controller;
    CIDVRGBCaptureUIConfig *_config;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_addNotificationObservers;
-(void)_cancelAfterAppMovedToBackground:(id)arg0 ;
-(void)_cleanAfterError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleTimeout;
-(void)_presentSelfieVC;
-(void)_presentVC:(id)arg0 animated:(BOOL)arg1 ;
-(void)_removeNotificationObservers;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)startWithConfig:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif