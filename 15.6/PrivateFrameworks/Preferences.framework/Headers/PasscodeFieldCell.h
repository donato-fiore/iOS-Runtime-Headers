// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PASSCODEFIELDCELL_H
#define PASSCODEFIELDCELL_H

@class NSString;
@protocol PSPasscodeFieldDelegate, KeychainSyncPasscodeFieldDelegate;


#import "PSTableCell.h"
#import "PSPasscodeField.h"

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate>



@property (nonatomic) BOOL convertsNumeralsToASCII; // ivar: _convertsNumeralsToASCII
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<KeychainSyncPasscodeFieldDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL denyFirstResponder; // ivar: _denyFirstResponder
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PSPasscodeField *passcodeField; // ivar: _passcodeField
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)hasText;
-(NSInteger)keyboardType;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)passcodeField:(id)arg0 shouldInsertText:(id)arg1 ;
-(id)passcodeText;
-(void)_setSecureTextEntry:(BOOL)arg0 ;
-(void)cellTapped:(id)arg0 ;
-(void)deleteBackward;
-(void)layoutSubviews;
-(void)passcodeField:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)setPasscodeText:(id)arg0 ;


@end


#endif