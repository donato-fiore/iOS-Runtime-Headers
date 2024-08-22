// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSCONFIRMATIONSPECIFIER_H
#define PSCONFIRMATIONSPECIFIER_H

@class NSString;


#import "PSSpecifier.h"

@interface PSConfirmationSpecifier : PSSpecifier

@property (retain, nonatomic) NSString *alternateButton; // ivar: _alternateButton
@property (retain, nonatomic) NSString *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) NSString *okButton; // ivar: _okButton
@property (retain, nonatomic) NSString *prompt; // ivar: _prompt
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)preferenceSpecifierNamed:(id)arg0 target:(id)arg1 set:(SEL)arg2 get:(SEL)arg3 detail:(Class)arg4 cell:(NSInteger)arg5 edit:(Class)arg6 ;
+(id)specifierWithSpecifier:(id)arg0 ;
-(BOOL)isAlternateDestructive;
-(BOOL)isDestructive;
-(BOOL)isEqualToSpecifier:(id)arg0 ;
-(void)setupWithDictionary:(id)arg0 ;


@end


#endif