// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSEDITINGPANE_H
#define PSEDITINGPANE_H

@class UIView, UIViewController;


#import "PSSpecifier.h"

@interface PSEditingPane : UIView {
    PSSpecifier *_specifier;
    id *_delegate;
    BOOL _requiresKeyboard;
}


@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


+(float)preferredHeight;
+(id)defaultBackgroundColor;
-(BOOL)changed;
-(BOOL)handlesDoneButton;
-(BOOL)requiresKeyboard;
-(BOOL)shouldInsetContent;
-(BOOL)wantsNewButton;
-(id)childViewControllerForHostingViewController;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferenceSpecifier;
-(id)preferenceValue;
-(id)scrollViewToBeInsetted;
-(id)specifierLabel;
-(struct CGRect )contentRect;
-(void)addNewValue;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)doneEditing;
-(void)editMode;
-(void)insetContent;
-(void)layoutInsetContent:(struct CGRect )arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPreferenceSpecifier:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 ;
-(void)viewDidBecomeVisible;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif