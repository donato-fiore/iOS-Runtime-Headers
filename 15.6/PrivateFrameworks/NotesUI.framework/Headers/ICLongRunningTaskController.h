// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLONGRUNNINGTASKCONTROLLER_H
#define ICLONGRUNNINGTASKCONTROLLER_H

@class NSString, NSDate, NSProgress, UIViewController, UIWindow;
@protocol ICProgressViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "ICProgressViewController.h"

@interface ICLongRunningTaskController : NSObject <ICProgressViewControllerDelegate>



@property (nonatomic) BOOL allowSingleUnitProgress; // ivar: _allowSingleUnitProgress
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) NSString *customCancelButtonTitle; // ivar: _customCancelButtonTitle
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate; // ivar: _indeterminate
@property (nonatomic) CGFloat intervalBeforeOpeningProgressDialog; // ivar: _intervalBeforeOpeningProgressDialog
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (retain, nonatomic) id *keepAlive; // ivar: _keepAlive
@property (retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate; // ivar: _lastAccessibilityAnnouncementDate
@property (retain, nonatomic) NSDate *openProgressDate; // ivar: _openProgressDate
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) NSString *progressFormatString; // ivar: _progressFormatString
@property (retain, nonatomic) ICProgressViewController *progressViewController; // ivar: _progressViewController
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