// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSADDGROUPNAMEVIEW_H
#define CKDETAILSADDGROUPNAMEVIEW_H

@class UIView, NSString, UILabel;
@protocol UITextFieldDelegate, CKDetailsAddGroupNameViewDelegate;


#import "CKDetailsViewAddGroupNameViewUITextField.h"

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKDetailsAddGroupNameViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKDetailsViewAddGroupNameViewUITextField *inputField; // ivar: _inputField
@property (retain, nonatomic) UILabel *placeholderLabel; // ivar: _placeholderLabel
@property (readonly) Class superclass;


+(CGFloat)preferredHeight;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)commitGroupName;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif