// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCONFIRMATIONBUTTON_H
#define MFCONFIRMATIONBUTTON_H

@class UIImage, NSString;


#import "MFDimmableButton.h"

@interface MFConfirmationButton : MFDimmableButton

@property (retain, nonatomic) UIImage *confirmationIcon; // ivar: _confirmationIcon
@property (copy, nonatomic) NSString *confirmationLabel; // ivar: _confirmationLabel
@property (copy, nonatomic) NSString *confirmationMessage; // ivar: _confirmationMessage
@property (nonatomic) NSUInteger confirmationSelectionMode; // ivar: _confirmationSelectionMode
@property (nonatomic) NSUInteger confirmationType; // ivar: _confirmationType
@property (copy, nonatomic) id *handlerBlock; // ivar: _handlerBlock
@property (nonatomic) BOOL hasPresentedConfirmation; // ivar: _hasPresentedConfirmation


+(id)confirmationButtonWithMessage:(id)arg0 confirmationLabel:(id)arg1 handler:(id)arg2 ;
-(BOOL)_isInConfirmableState;
-(id)_confirmationMenu;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(void)_didConfirm;
-(void)_updateButtonAction;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)reset;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif