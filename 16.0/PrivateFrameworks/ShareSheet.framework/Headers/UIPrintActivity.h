// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTACTIVITY_H
#define UIPRINTACTIVITY_H

@class NSString, UIPrintInteractionController, UIWindow, UIViewController;
@protocol UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate;


#import "UIActivity.h"

@interface UIPrintActivity : UIActivity <UIManagedConfigurationRestrictableActivity, UIPrintInteractionControllerActivityDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (retain, nonatomic) UIPrintInteractionController *printInteractionController; // ivar: _printInteractionController
@property (copy, nonatomic) NSString *sourceApplicationBundleID; // ivar: _sourceApplicationBundleID
@property (readonly) Class superclass;
@property (retain) UIWindow *windowHoldingActivityViewController; // ivar: _windowHoldingActivityViewController
@property (retain) UIViewController *wrapperViewController; // ivar: _wrapperViewController


+(NSUInteger)_xpcAttributes;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_embeddedActivityViewController;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)printInteractionControllerParentViewController:(id)arg0 ;
-(id)printInteractionControllerWindowForPresentation:(id)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)cancelPrintOptions;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif