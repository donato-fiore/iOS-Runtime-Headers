// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSASSETCENTER_H
#define DDSASSETCENTER_H

@class NSMutableSet, NSString, NSSet;
@protocol DDSManagingDelegate, DDSTrialManagerDelegate, DDSAssetObservingDelegate, DDSAssetObserving, DDSManaging, DDSAssetProviding, OS_dispatch_queue, DDSTrialManager;

#import <Foundation/Foundation.h>


@interface DDSAssetCenter : NSObject <DDSManagingDelegate, DDSTrialManagerDelegate, DDSAssetObservingDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_delegates;
}


@property (readonly, nonatomic) NSObject<DDSAssetObserving> *assetObserver; // ivar: _assetObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSSet *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<DDSManaging> *managerInterface; // ivar: _managerInterface
@property (readonly, nonatomic) NSObject<DDSAssetProviding> *provider; // ivar: _provider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<DDSTrialManager> *trialManager; // ivar: _trialManager


+(id)sharedInstance;
-(id)allContentItemsMatchingQuery:(id)arg0 error:(*id)arg1 ;
-(id)assertionIDsForClientID:(id)arg0 ;
-(id)assetsForQuery:(id)arg0 error:(*id)arg1 ;
-(id)contentItemsFromAssets:(id)arg0 matchingFilter:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 provider:(id)arg1 managerInterface:(id)arg2 trialManager:(id)arg3 ;
-(void)addAssertionForAssetsWithQuery:(id)arg0 policy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(void)fetchTrialAssetForQuery:(id)arg0 callback:(id)arg1 ;
-(void)registerDelegate:(id)arg0 ;
-(void)removeAssertionWithIdentifier:(id)arg0 ;
-(void)serverDidUpdateAssetsWithType:(id)arg0 ;
-(void)setUpTrialForQuery:(id)arg0 ;
-(void)start;
-(void)trialDidReceiveAsset:(id)arg0 forQuery:(id)arg1 ;
-(void)trialDidStopForQuery:(id)arg0 ;
-(void)triggerDump;
-(void)triggerUpdate;
-(void)unregisterDelegate:(id)arg0 ;


@end


#endif