// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPBUNDLEIDALLOWANCEPOLICY_H
#define PPBUNDLEIDALLOWANCEPOLICY_H

@class _PASLock;
@protocol TRINotificationToken;

#import <Foundation/Foundation.h>


@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
    id<TRINotificationToken> *_trialToken;
}




+(id)defaultPolicy;
-(BOOL)bundleIdentifierIsAllowed:(id)arg0 blocklist:(id)arg1 allowlist:(id)arg2 ;
-(BOOL)bundleIdentifierIsAllowedForNotifications:(id)arg0 ;
-(BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)arg0 ;
-(id)_readAssetData:(id)arg0 ;
-(id)initWithNotificationBlocklist:(id)arg0 notificationAllowlist:(id)arg1 searchableItemBlocklist:(id)arg2 searchableItemAllowlist:(id)arg3 ;
-(id)init_;
-(void)_loadAssetData;
-(void)_resetGuardedData;
-(void)_setGuardedDataWithNotificationBlocklist:(id)arg0 notificationAllowlist:(id)arg1 searchableItemBlocklist:(id)arg2 searchableItemAllowlist:(id)arg3 ;
-(void)dealloc;


@end


#endif