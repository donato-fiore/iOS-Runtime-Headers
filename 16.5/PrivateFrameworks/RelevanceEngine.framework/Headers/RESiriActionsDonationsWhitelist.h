// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESIRIACTIONSDONATIONSWHITELIST_H
#define RESIRIACTIONSDONATIONSWHITELIST_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface RESiriActionsDonationsWhitelist : NSObject {
    NSDictionary *_whitelist;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSSet *intentWhitelistBundleIDs; // ivar: _intentWhitelistBundleIDs
@property (readonly, nonatomic) NSSet *userActivityWhitelistBundleIDs; // ivar: _userActivityWhitelistBundleIDs


+(id)sharedInstance;
-(BOOL)intentIsWhitelistedForBundleID:(id)arg0 andTypeName:(id)arg1 ;
-(BOOL)userActivityIsWhitelistedForBundleID:(id)arg0 andActivityType:(id)arg1 ;
-(id)init;
-(id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg0 andTypeName:(id)arg1 ;
-(id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg0 andActivityType:(id)arg1 ;


@end


#endif