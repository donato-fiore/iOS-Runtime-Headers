// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSINFORMATIONTEMPLATEBUTTONSVIEWCONTROLLER_H
#define CPSINFORMATIONTEMPLATEBUTTONSVIEWCONTROLLER_H

@class UIViewController, UIStackView, NSArray, NSLayoutConstraint;
@protocol CPSButtonDelegate;



@interface CPSInformationTemplateButtonsViewController : UIViewController

@property (weak, nonatomic) NSObject<CPSButtonDelegate> *buttonDelegate; // ivar: _buttonDelegate
@property (retain, nonatomic) UIStackView *buttonStackView; // ivar: _buttonStackView
@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (nonatomic) NSUInteger preferredButtonIndex; // ivar: _preferredButtonIndex


-(id)initWithButtons:(id)arg0 buttonDelegate:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)_updateButtons;
-(void)_updateHeight;
-(void)setButtonIdentifier:(id)arg0 enabled:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif