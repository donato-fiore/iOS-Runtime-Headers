// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICWINDOW_H
#define ICWINDOW_H

@class UIWindow, NSString, ICViewControllerManager;



@interface ICWindow : UIWindow

@property (retain, nonatomic) NSString *toolPickerIdentifier; // ivar: _toolPickerIdentifier
@property (retain, nonatomic) ICViewControllerManager *viewControllerManager; // ivar: _viewControllerManager
@property (retain, nonatomic) NSString *windowIdentifier; // ivar: _windowIdentifier


-(BOOL)accessibilityElementsHidden;
-(id)initWithWindowScene:(id)arg0 ;


@end


#endif