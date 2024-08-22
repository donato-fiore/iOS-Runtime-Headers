// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTLOCKSCREENSUGGESTIONSDETAILLISTCONTROLLER_H
#define ASTLOCKSCREENSUGGESTIONSDETAILLISTCONTROLLER_H

@class PSListController, PSSpecifier, NSArray;


#import "ASTLockScreenSuggestionSpecifier.h"
#import "ASTLockScreenSuggestionsGlobalController.h"

@interface ASTLockScreenSuggestionsDetailListController : PSListController {
    ASTLockScreenSuggestionSpecifier *_lockScreenSpecifier;
    PSSpecifier *_perAppGroup;
    NSArray *_perAppSpecifiers;
    ASTLockScreenSuggestionsGlobalController *_globalController;
    PSSpecifier *_globalSpecifier;
}




-(id)init;
-(id)specifiers;
-(void)_handleGlobalToggleChangeWithEnabled:(BOOL)arg0 ;


@end


#endif