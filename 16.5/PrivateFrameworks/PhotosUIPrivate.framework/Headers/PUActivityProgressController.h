// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUACTIVITYPROGRESSCONTROLLER_H
#define PUACTIVITYPROGRESSCONTROLLER_H

@class UIAlertController, UIView, NSString, NSProgress, UIWindow;

#import <Foundation/Foundation.h>

#import "PUActivityProgressViewController.h"

@interface PUActivityProgressController : NSObject {
    PUActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
    UIView *_containerView;
    UIView *_dimmingView;
    UIView *_progressContainerView;
    CGFloat _whenDidShow;
    BOOL _didShow;
    BOOL _didHide;
}


@property (copy, nonatomic) id *cancellationHandler; // ivar: _cancellationHandler
@property (readonly, nonatomic) BOOL isCancelled;
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (nonatomic) BOOL shouldAutoDisplay; // ivar: _shouldAutoDisplay
@property (nonatomic) BOOL shouldUseProgressText; // ivar: _shouldUseProgressText
@property (nonatomic) BOOL showCheckmarkOnCompletion;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (weak, nonatomic) UIWindow *window; // ivar: _window


-(id)_newProgressContainerView;
-(id)init;
-(void)_cancel;
-(void)_didFinishHiding;
-(void)_updateFractionCompletedFromProgress;
-(void)_updatePrimaryText;
-(void)_updateSecondaryText;
-(void)dealloc;
-(void)hideAnimated:(BOOL)arg0 allowDelay:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setFractionCompleted:(CGFloat)arg0 ;
-(void)showAnimated:(BOOL)arg0 allowDelay:(BOOL)arg1 ;


@end


#endif