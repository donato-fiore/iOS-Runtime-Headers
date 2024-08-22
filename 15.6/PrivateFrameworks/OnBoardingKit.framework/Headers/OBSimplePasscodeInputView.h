// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBSIMPLEPASSCODEINPUTVIEW_H
#define OBSIMPLEPASSCODEINPUTVIEW_H

@class NSString;
@protocol OBPasscodeFieldDelegate;


#import "OBPasscodeInputView.h"
#import "OBPasscodeField.h"

@interface OBSimplePasscodeInputView : OBPasscodeInputView <OBPasscodeFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL limitCharactersToNumbers; // ivar: _limitCharactersToNumbers
@property (retain, nonatomic) OBPasscodeField *passcodeField; // ivar: _passcodeField
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 numberOfEntryFields:(NSUInteger)arg1 ;
-(id)passcode;
-(id)passcodeDisplayView;
-(void)passcodeField:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)setPasscode:(id)arg0 ;


@end


#endif