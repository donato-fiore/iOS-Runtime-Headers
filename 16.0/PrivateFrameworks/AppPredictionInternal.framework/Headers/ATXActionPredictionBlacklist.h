// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXACTIONPREDICTIONBLACKLIST_H
#define ATXACTIONPREDICTIONBLACKLIST_H

@class _PASLock;

#import <Foundation/Foundation.h>

#import "ATXAppPredictionBlacklist.h"

@interface ATXActionPredictionBlacklist : NSObject {
    _PASLock *_lock;
    id *_blacklistNotificationToken;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    int _prefsChangeNotificationToken;
}




+(id)sharedInstanceWithAppPredictionBlacklist;
+(id)sharedInstanceWithoutAppPredictionBlacklist;
-(BOOL)isBundleIdBlacklisted:(id)arg0 ;
-(BOOL)shouldPredictBundleId:(id)arg0 action:(id)arg1 ;
-(BOOL)shouldPredictBundleIdForShortcuts:(id)arg0 action:(id)arg1 ;
-(BOOL)shouldPredictBundleIdForShortcuts:(id)arg0 action:(id)arg1 forPrimaryShortcuts:(BOOL)arg2 ;
-(id)_prefsDisabledApps;
-(id)disabledBundlesInSettings;
-(id)homeScreenDisabledShortcutsInSettings;
-(id)init;
-(id)initWithAppPredictionBlacklist:(id)arg0 ;
-(id)shouldPredictBundleIdHelper:(id)arg0 action:(id)arg1 ;
-(void)_handlePrefsChange;
-(void)addToBlacklists:(id)arg0 blacklistAppList:(id)arg1 blacklistActionList:(id)arg2 blacklistAppAndActionList:(id)arg3 ;
-(void)dealloc;
-(void)setBlacklistFromAssetData:(id)arg0 predictionBlacklist:(id)arg1 shortcutBlacklist:(id)arg2 primaryShortcutBlacklist:(id)arg3 ;


@end


#endif