// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTLOCKSCREENSUGGESTIONSPECIFIER_H
#define ASTLOCKSCREENSUGGESTIONSPECIFIER_H

@class NSSet, NSString;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface ASTLockScreenSuggestionSpecifier : NSObject <PSSpecifierGroup>

 {
    NSSet *_disabledLockScreenBundles;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)isLockScreenSwitchEnabled:(id)arg0 ;
-(id)specifierForBundleID:(id)arg0 ;
-(id)specifiers;
-(void)setLockScreenSwitchEnabled:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif