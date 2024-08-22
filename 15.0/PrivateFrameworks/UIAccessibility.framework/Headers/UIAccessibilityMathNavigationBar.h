// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYMATHNAVIGATIONBAR_H
#define UIACCESSIBILITYMATHNAVIGATIONBAR_H

@class UINavigationBar, UIView;



@interface UIAccessibilityMathNavigationBar : UINavigationBar {
    UIView *_titleView;
}




-(BOOL)accessibilityPerformEscape;
-(id)_popNavigationItemWithTransition:(int)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_pushNavigationItem:(id)arg0 transition:(int)arg1 ;


@end


#endif