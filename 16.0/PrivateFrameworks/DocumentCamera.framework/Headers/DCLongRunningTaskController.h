// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCLONGRUNNINGTASKCONTROLLER_H
#define DCLONGRUNNINGTASKCONTROLLER_H

@class NSDate, NSProgress, UIViewController, UIWindow;
@protocol DCProgressViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "DCProgressViewController.h"

@interface DCLongRunningTaskController : NSObject <DCProgressViewControllerDelegate>



@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) CGFloat intervalBeforeOpeningProgressDialog; // ivar: _intervalBeforeOpeningProgressDialog
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (retain, nonatomic) id *keepAlive; // ivar: _keepAlive
@property (retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate; // ivar: _lastAccessibilityAnnouncementDate
@property (retain, nonatomic) NSDate *openProgressDate; // ivar: _openProgressDate
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) id *progressToStringTransformer; // ivar: _progressToStringTransformer
@property (retain, nonatomic) DCProgressViewController *progressViewController; // ivar: _progressViewController
@property (nonatomic) BOOL progressViewControllerDidFinishPresenting; // ivar: _progressViewControllerDidFinishPresenting
@property (nonatomic) BOOL shouldDismissProgressViewController; // ivar: _shouldDismissProgressViewController
@property (nonatomic) BOOL shouldShowCancelButton; // ivar: _shouldShowCancelButton
@property (nonatomic) BOOL shouldShowCircularProgress; // ivar: _shouldShowCircularProgress
@property (copy, nonatomic) id *updateProgressUIBlock; // ivar: _updateProgressUIBlock
@property (retain, nonatomic) UIViewController *viewControllerToPresentFrom; // ivar: _viewControllerToPresentFrom
@property (retain, nonatomic) UIWindow *window; // ivar: _window


+(void)setMainWindow:(id)arg0 ;
-(id)init;
-(id)initWithWindow:(id)arg0 intervalBeforeOpeningProgressDialog:(CGFloat)arg1 ;
-(void)closeProgressDialog;
-(void)completeTaskIfNecessary;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openProgressDialog;
// -(void)startTask:(id)arg0 completionBlock:(unk)arg1  ;
-(void)updateProgress;
-(void)willDismissProgressViewController:(id)arg0 ;


@end


#endif