// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTCONFIRMATIONVIEW_H
#define DMCENROLLMENTCONFIRMATIONVIEW_H

@class UIView, UIButton, OBBoldTrayButton, NSString;



@interface DMCEnrollmentConfirmationView : UIView

@property (copy, nonatomic) id *cancelAction; // ivar: _cancelAction
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) id *confirmationAction; // ivar: _confirmationAction
@property (retain, nonatomic) OBBoldTrayButton *confirmationButton; // ivar: _confirmationButton
@property (nonatomic, getter=isConfirmationButtonEnabled) BOOL confirmationButtonEnabled; // ivar: _confirmationButtonEnabled
@property (retain, nonatomic) NSString *confirmationText; // ivar: _confirmationText
@property (nonatomic) BOOL inProgress; // ivar: _inProgress


// -(id)initWithConfirmationText:(id)arg0 cancelText:(id)arg1 confirmationAction:(id)arg2 cancelAction:(unk)arg3  ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)confirmationButtonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif