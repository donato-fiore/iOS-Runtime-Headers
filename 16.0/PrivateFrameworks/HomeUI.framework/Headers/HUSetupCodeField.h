// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSETUPCODEFIELD_H
#define HUSETUPCODEFIELD_H

@class UIView, UIStackView, NSString, UITextField, NSArray;
@protocol UITextFieldDelegate, HUSetupCodeFieldDelegate;


#import "HUSetupCodeFieldItem.h"

@interface HUSetupCodeField : UIView <UITextFieldDelegate>



@property (weak, nonatomic) HUSetupCodeFieldItem *activeItem; // ivar: _activeItem
@property (retain, nonatomic) UIStackView *codeFieldItemsView; // ivar: _codeFieldItemsView
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUSetupCodeFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextField *hiddenInputField; // ivar: _hiddenInputField
@property (nonatomic) CGFloat itemSpacing; // ivar: _itemSpacing
@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSString *setupCode;
@property (readonly) Class superclass;


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)init;
-(id)initWithCodeDigits:(NSUInteger)arg0 ;
-(void)_activateLast;
-(void)_activateNext;
-(void)_updateInterfaceForCurrentTraitCollection;
-(void)clear;
-(void)fieldTapped:(id)arg0 ;
-(void)hideKeypad;
-(void)showKeypad;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif