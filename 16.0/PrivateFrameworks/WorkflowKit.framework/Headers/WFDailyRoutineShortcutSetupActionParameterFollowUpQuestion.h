// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDAILYROUTINESHORTCUTSETUPACTIONPARAMETERFOLLOWUPQUESTION_H
#define WFDAILYROUTINESHORTCUTSETUPACTIONPARAMETERFOLLOWUPQUESTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion : NSObject

@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, copy, nonatomic) NSString *parameterKey; // ivar: _parameterKey
@property (readonly, copy, nonatomic) NSString *prompt; // ivar: _prompt


-(id)initWithPrompt:(id)arg0 actionIdentifier:(id)arg1 parameterKey:(id)arg2 ;


@end


#endif