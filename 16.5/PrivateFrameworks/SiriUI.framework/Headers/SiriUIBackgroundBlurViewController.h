// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIBACKGROUNDBLURVIEWCONTROLLER_H
#define SIRIUIBACKGROUNDBLURVIEWCONTROLLER_H

@class UIViewController;
@protocol SiriUIBackgroundBlurViewControllerDelegate;


#import "SiriUIBackgroundBlurView.h"

@interface SiriUIBackgroundBlurViewController : UIViewController

@property (nonatomic) BOOL backgroundBlurIsVisible; // ivar: _backgroundBlurIsVisible
@property (retain, nonatomic) SiriUIBackgroundBlurView *backgroundBlurView; // ivar: _backgroundBlurView
@property (weak, nonatomic) NSObject<SiriUIBackgroundBlurViewControllerDelegate> *backgroundBlurViewControllerDelegate; // ivar: _backgroundBlurViewControllerDelegate
@property (nonatomic) NSInteger backgroundBlurVisibleReason; // ivar: _backgroundBlurVisibleReason


-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)requestBackgroundBlurVisible:(BOOL)arg0 forReason:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif