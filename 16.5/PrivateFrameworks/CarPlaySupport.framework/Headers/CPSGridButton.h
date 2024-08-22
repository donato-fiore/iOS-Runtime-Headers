// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSGRIDBUTTON_H
#define CPSGRIDBUTTON_H

@class UIView, CPGridButton;
@protocol CPTemplateDelegate;


#import "CPSButton.h"
#import "CPSAbridgableLabel.h"

@interface CPSGridButton : CPSButton

@property (retain, nonatomic) CPSAbridgableLabel *customTitleLabel; // ivar: _customTitleLabel
@property (retain, nonatomic) UIView *focusView; // ivar: _focusView
@property (retain, nonatomic) CPGridButton *gridButton; // ivar: _gridButton
@property (weak, nonatomic) NSObject<CPTemplateDelegate> *templateDelegate; // ivar: _templateDelegate


+(id)buttonWithGridButton:(id)arg0 templateDelegate:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGridButton:(id)arg0 ;
-(CGFloat)preferredLabelWidth;
-(NSUInteger)hash;
-(void)_updateLabelColor;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif