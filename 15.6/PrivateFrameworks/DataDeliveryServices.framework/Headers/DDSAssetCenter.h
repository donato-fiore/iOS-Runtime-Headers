// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDSASSETCENTER_H
#define DDSASSETCENTER_H

@class NSString, NSMutableSet;
@protocol DDSManagingDelegate, DDSAssetObservingDelegate, DDSAssetObserving, DDSManaging, DDSAssetProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDSAssetCenter : NSObject <DDSManagingDelegate, DDSAssetObservingDelegate>



@property (readonly, nonatomic) NSObject<DDSAssetObserving> *assetObserver; // ivar: _assetObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableSet *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<DDSManaging> *managerInterface; // ivar: _managerInterface
@property (readonly, nonatomic) NSObject<DDSAssetProviding> *provider; // ivar: _provider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)allContentItemsMatchingQuery:(id)arg0 error:(*id)arg1 ;
-(id)assertionIDsForClientID:(id)arg0 ;
-(id)assetsForQuery:(id)arg0 error:(*id)arg1 ;
-(id)contentItemsFromAssets:(id)arg0 matchingFilter:(id)arg1 ;
-(id)init;
-(id)initWithProvider:(id)arg0 managerInterface:(id)arg1 ;
-(void)addAssertionForAssetsWithQuery:(id)arg0 policy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(void)registerDelegate:(id)arg0 ;
-(void)removeAssertionWithIdentifier:(id)arg0 ;
-(void)serverDidUpdateAssetsWithType:(id)arg0 ;
-(void)triggerDump;
-(void)triggerUpdate;
-(void)unregisterDelegate:(id)arg0 ;


@end


#endif