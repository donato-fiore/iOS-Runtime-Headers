// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIALERTCONTROLLERSHIMPRESENTERWINDOW_H
#define _UIALERTCONTROLLERSHIMPRESENTERWINDOW_H



#import "UIApplicationRotationFollowingWindow.h"
#import "UIAlertController.h"

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {
    UIAlertController *_alertController;
}


@property (readonly, retain, nonatomic) UIAlertController *alertController;


-(id)_presentationViewController;
-(id)init;
-(id)initWithWindowScene:(id)arg0 ;
-(void)presentAlertController:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;


@end


#endif