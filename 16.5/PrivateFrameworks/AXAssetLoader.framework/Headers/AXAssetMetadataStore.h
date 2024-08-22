// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXASSETMETADATASTORE_H
#define AXASSETMETADATASTORE_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface AXAssetMetadataStore : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults


+(id)store;
-(id)_init;
-(id)heldAssertionsForAssetType:(id)arg0 ;
-(id)overrideMaximumCompatibilityVersionForAssetType:(id)arg0 ;
-(id)overrideMinimumCompatibilityVersionForAssetType:(id)arg0 ;
-(id)valueForKey:(id)arg0 forAssetType:(id)arg1 ;
-(void)_mutateAssertionsForAssetType:(id)arg0 assertions:(id)arg1 mutationBlock:(id)arg2 ;
-(void)_mutateAssetAssertions:(id)arg0 ;
-(void)_mutateAssetEvents:(id)arg0 block:(id)arg1 ;
-(void)_mutateAssetEventsForAssetType:(id)arg0 events:(id)arg1 mutationBlock:(id)arg2 ;
-(void)_mutateInstalledAssets:(id)arg0 ;
-(void)_mutateInstalledAssetsForAssetType:(id)arg0 installedAssets:(id)arg1 mutationBlock:(id)arg2 ;
-(void)_mutateOverrides:(id)arg0 ;
-(void)_mutateOverridesForAssetType:(id)arg0 overrides:(id)arg1 mutationBlock:(id)arg2 ;
-(void)_mutateUserInfo:(id)arg0 ;
-(void)_mutateUserInfoForAssetType:(id)arg0 userInfo:(id)arg1 mutationBlock:(id)arg2 ;
-(void)_performWithLock:(id)arg0 ;
-(void)discardAllAssertionsOfType:(id)arg0 ;
-(void)discardAllAssertionsOfType:(id)arg0 heldByClient:(id)arg1 ;
-(void)discardAssertion:(id)arg0 ;
-(void)recordAssetRefreshEventForAssetType:(id)arg0 ;
-(void)recordAssetsToBeDownloaded:(id)arg0 forAssetType:(id)arg1 ;
-(void)recordAssetsToBePurged:(id)arg0 forAssetType:(id)arg1 ;
-(void)recordInstalledAssets:(id)arg0 forAssetType:(id)arg1 ;
-(void)recordLastAssetAccess:(id)arg0 ;
-(void)requestAssertion:(id)arg0 ;
-(void)setOverrideMaximumCompatibilityVersion:(id)arg0 forAssetType:(id)arg1 ;
-(void)setOverrideMinimumCompatibilityVersion:(id)arg0 forAssetType:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 forAssetType:(id)arg2 ;


@end


#endif