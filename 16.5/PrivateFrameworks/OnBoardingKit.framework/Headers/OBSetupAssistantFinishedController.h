// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBSETUPASSISTANTFINISHEDCONTROLLER_H
#define OBSETUPASSISTANTFINISHEDCONTROLLER_H

@class UILabel;


#import "OBBaseWelcomeController.h"
#import "OBBoldTrayButton.h"
#import "OBButtonTray.h"

@interface OBSetupAssistantFinishedController : OBBaseWelcomeController

@property (retain, nonatomic) OBBoldTrayButton *boldButton; // ivar: _boldButton
@property (copy, nonatomic) id *boldButtonBlock; // ivar: _boldButtonBlock
@property (retain, nonatomic) OBButtonTray *buttonTray; // ivar: _buttonTray
@property (retain, nonatomic) UILabel *instructionalLabel; // ivar: _instructionalLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_headerFont;
-(id)_instructionFont;
-(id)initWithTitle:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )directionalLayoutMargins;
-(void)buttonTapped:(id)arg0 ;
-(void)setButtonTitle:(id)arg0 action:(id)arg1 ;
-(void)setInstructionalText:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif