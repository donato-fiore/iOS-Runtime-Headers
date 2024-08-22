// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBINCALLWIDGETMULTIWAYTITLEBUTTON_H
#define DBINCALLWIDGETMULTIWAYTITLEBUTTON_H

@class UIButton, UIView, CPSMultilineLabel;



@interface DBInCallWidgetMultiwayTitleButton : UIButton

@property (retain, nonatomic) UIView *focusView; // ivar: _focusView
@property (retain, nonatomic) CPSMultilineLabel *multilineTitleLabel; // ivar: _multilineTitleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif