// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUICOMMONVIEWCONTROLLER_H
#define AMSUICOMMONVIEWCONTROLLER_H

@class UIViewController;


#import "AMSUICommonView.h"

@interface AMSUICommonViewController : UIViewController

@property (nonatomic, getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) BOOL movingFromParentViewController;
@property (nonatomic, getter=isMovingToParentViewController, setter=setIsMovingToParentViewController:) BOOL movingToParentViewController;
@property (retain, nonatomic) AMSUICommonView *view;


-(id)init;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)dealloc;
-(void)loadView;
-(void)setChildViewController:(id)arg0 ;
-(void)unsetChildViewController:(id)arg0 ;


@end


#endif