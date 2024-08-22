// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSRESTRICTIONSPINCONTROLLER_H
#define PSRESTRICTIONSPINCONTROLLER_H



#import "DevicePINController.h"

@interface PSRestrictionsPINController : DevicePINController



+(BOOL)settingEnabled;
-(BOOL)isNumericPIN;
-(BOOL)pinIsAcceptable:(id)arg0 outError:(*id)arg1 ;
-(BOOL)simplePIN;
-(BOOL)validatePIN:(id)arg0 ;
-(id)init;
-(id)pinInstructionsPrompt;
-(id)pinInstructionsPromptFont;
-(id)stringsBundle;
-(id)title;
-(int)pinLength;
-(struct __CFString *)blockTimeIntervalKey;
-(struct __CFString *)blockedStateKey;
-(struct __CFString *)defaultsID;
-(struct __CFString *)failedAttemptsKey;
-(void)setPIN:(id)arg0 ;


@end


#endif