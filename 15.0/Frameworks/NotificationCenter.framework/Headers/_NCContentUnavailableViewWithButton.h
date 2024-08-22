// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NCCONTENTUNAVAILABLEVIEWWITHBUTTON_H
#define _NCCONTENTUNAVAILABLEVIEWWITHBUTTON_H

@class UIView, UILabel;



@interface _NCContentUnavailableViewWithButton : UIView

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) id *buttonHandler; // ivar: _buttonHandler
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_visualStylingProviderForCategory:(NSInteger)arg0 ;
-(id)initWithTitle:(id)arg0 buttonAction:(id)arg1 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_configureBackgroundView;
-(void)_configureTitleLabelWithTitle:(id)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateVisualStyling;
-(void)didMoveToWindow;


@end


#endif