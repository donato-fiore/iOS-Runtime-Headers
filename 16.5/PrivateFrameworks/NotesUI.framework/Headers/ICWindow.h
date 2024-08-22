// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICWINDOW_H
#define ICWINDOW_H

@class UIWindow, UIViewController, ICViewControllerManager, NSString;



@interface ICWindow : UIWindow

@property (readonly, nonatomic) UIViewController *ic_topmostPresentedViewController;
@property (readonly, nonatomic) ICViewControllerManager *ic_viewControllerManager;
@property (retain, nonatomic) NSString *toolPickerIdentifier; // ivar: _toolPickerIdentifier
@property (retain, nonatomic) ICViewControllerManager *viewControllerManager; // ivar: _viewControllerManager
@property (retain, nonatomic) NSString *windowIdentifier; // ivar: _windowIdentifier


-(BOOL)accessibilityElementsHidden;
-(id)initWithWindowScene:(id)arg0 ;
-(void)setRootViewController:(id)arg0 ;


@end


#endif