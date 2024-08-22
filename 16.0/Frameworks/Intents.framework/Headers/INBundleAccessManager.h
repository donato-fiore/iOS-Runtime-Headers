// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INBUNDLEACCESSMANAGER_H
#define INBUNDLEACCESSMANAGER_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface INBundleAccessManager : NSObject {
    ? _stats;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMutableSet *accessibleBundleIDs; // ivar: _accessibleBundleIDs
@property (readonly, nonatomic) NSMutableDictionary *securityScopedURLs; // ivar: _securityScopedURLs


+(id)sharedManager;
-(id)_grantForBundleIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)_stats;
-(id)grantForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)grantForBundleIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif