// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLSCREENTIMEITEMVIEWCONTROLLER_H
#define QLSCREENTIMEITEMVIEWCONTROLLER_H

@class STBlockingViewController, NSString;


#import "QLItemViewController.h"

@interface QLScreenTimeItemViewController : QLItemViewController

@property (retain, nonatomic) STBlockingViewController *blockingViewController; // ivar: _blockingViewController
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *categoryIdentifier; // ivar: _categoryIdentifier
@property (nonatomic) NSInteger policy; // ivar: _policy


-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCategoryIdentifier:(id)arg0 ;
-(void)_updateBlockingViewControllerWithCurrentPolicy;
-(void)hideBlockingViewControllerWithCompletionHandler:(id)arg0 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)showBlockingViewControllerWithPolicy:(NSInteger)arg0 ;


@end


#endif