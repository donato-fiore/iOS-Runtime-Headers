// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUFIXEDHEIGHTAWAREVIEWCONTROLLER_H
#define MUFIXEDHEIGHTAWAREVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint;



@interface MUFixedHeightAwareViewController : UIViewController {
    NSLayoutConstraint *_heightConstraint;
    UIViewController *_childVC;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithViewController:(id)arg0 ;
-(void)_setupChildVC;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;


@end


#endif