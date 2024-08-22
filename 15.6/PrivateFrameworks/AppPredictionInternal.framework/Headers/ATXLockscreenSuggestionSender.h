// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXLOCKSCREENSUGGESTIONSENDER_H
#define ATXLOCKSCREENSUGGESTIONSENDER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>

#import "ATXLockscreenBlacklist.h"
#import "ATXActionNotificationServer.h"

@interface ATXLockscreenSuggestionSender : NSObject {
    ATXLockscreenBlacklist *_lockscreenBlacklist;
    ATXActionNotificationServer *_actionNotificationServer;
    NSUserDefaults *_userDefaults;
}




-(id)_cachedExecutableIdentifier;
-(id)init;
-(id)initWithLockscreenBlacklist:(id)arg0 actionNotificationServer:(id)arg1 userDefaults:(id)arg2 ;
-(void)_updateCachedExecutableIdentifierWithSuggestion:(id)arg0 ;
-(void)blendingLayerDidUpdateLockscreenUICache:(id)arg0 ;


@end


#endif