// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXGUARDEDACTIONBLACKLIST_H
#define ATXGUARDEDACTIONBLACKLIST_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface ATXGuardedActionBlacklist : NSObject {
    NSSet *_blacklistedApp;
    NSSet *_blacklistedAction;
    NSSet *_blacklistedAppAction;
    NSSet *_blacklistedAppForShortcuts;
    NSSet *_blacklistedActionForShortcuts;
    NSSet *_blacklistedAppActionForShortcuts;
    NSSet *_blacklistedAppForPrimaryShortcuts;
    NSSet *_blacklistedActionForPrimaryShortcuts;
    NSSet *_blacklistedAppActionForPrimaryShortcuts;
    NSSet *_prefsBlacklistedApp;
}






@end


#endif