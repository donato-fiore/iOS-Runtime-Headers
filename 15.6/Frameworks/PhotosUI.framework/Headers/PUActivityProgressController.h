// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUACTIVITYPROGRESSCONTROLLER_H
#define PUACTIVITYPROGRESSCONTROLLER_H

@class UIAlertController, UIView, NSProgress, NSString, UIWindow;

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
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (weak, nonatomic) UIWindow *window; // ivar: _window


-(id)_newProgressContainerView;
-(id)init;
-(void)_updateFractionCompletedFromProgress;
-(void)dealloc;
-(void)hideAnimated:(BOOL)arg0 allowDelay:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setFractionCompleted:(CGFloat)arg0 ;
-(void)showAnimated:(BOOL)arg0 allowDelay:(BOOL)arg1 ;


@end


#endif