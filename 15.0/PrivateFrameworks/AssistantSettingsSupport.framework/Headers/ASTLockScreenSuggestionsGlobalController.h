// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTLOCKSCREENSUGGESTIONSGLOBALCONTROLLER_H
#define ASTLOCKSCREENSUGGESTIONSGLOBALCONTROLLER_H

@class PSSpecifier;

#import <Foundation/Foundation.h>


@interface ASTLockScreenSuggestionsGlobalController : NSObject {
    PSSpecifier *_specifier;
    id *_onChangeCallback;
}




-(id)initWithOnChangeCallback:(id)arg0 ;
-(id)isLockScreenSuggestionEnabled:(id)arg0 ;
-(id)specifier;
-(void)setLockScreenSuggestionsEnabled:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif