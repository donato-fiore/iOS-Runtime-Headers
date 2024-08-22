// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPWINDOW_H
#define CPWINDOW_H

@class UIWindow, NSLayoutConstraint, UILayoutGuide, UIWindowScene;


#import "CPTemplateApplicationScene.h"

@interface CPWindow : UIWindow

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint; // ivar: _leftConstraint
@property (readonly, nonatomic) UILayoutGuide *mapButtonSafeAreaLayoutGuide; // ivar: _mapButtonSafeAreaLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *rightConstraint; // ivar: _rightConstraint
@property (weak, nonatomic) CPTemplateApplicationScene *templateApplicationScene; // ivar: _templateApplicationScene
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (weak, nonatomic) UIWindowScene *windowScene;


-(id)initWithFrame:(struct CGRect )arg0 templateScene:(id)arg1 ;
-(void)updateLayoutGuideWithInsets:(struct UIEdgeInsets )arg0 ;


@end


#endif