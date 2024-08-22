// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSBULLETEDPINVIEW_H
#define PSBULLETEDPINVIEW_H

@class NSString;
@protocol PSPasscodeFieldDelegate;


#import "PINView.h"
#import "PSPasscodeField.h"

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate>

 {
    PSPasscodeField *_passcodeField;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 numberOfFields:(int)arg1 ;
-(id)stringValue;
-(void)appendString:(id)arg0 ;
-(void)dealloc;
-(void)deleteLastCharacter;
-(void)hidePasscodeField:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)passcodeField:(id)arg0 enteredPasscode:(id)arg1 ;
-(void)setBlocked:(BOOL)arg0 ;
-(void)setStringValue:(id)arg0 ;


@end


#endif