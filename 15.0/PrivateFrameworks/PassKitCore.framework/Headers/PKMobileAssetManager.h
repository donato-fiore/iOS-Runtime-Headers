// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMOBILEASSETMANAGER_H
#define PKMOBILEASSETMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(id)_compatibleVersionsWithMinimumVersion:(NSUInteger)arg0 maximumVersion:(NSUInteger)arg1 ;
-(id)_downloadOptionsWithUserInitiation:(BOOL)arg0 timeout:(NSInteger)arg1 ;
-(id)_queriesForCityCodeStationProvider:(id)arg0 ;
-(id)_queriesForMarketNotificationIdentifier:(id)arg0 ;
-(id)init;
-(id)sortDescriptorsForLatestContentVersion;
-(id)sortDescriptorsForMarkets;
-(void)_downloadAsset:(id)arg0 userInitiated:(BOOL)arg1 timeout:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_executeQueries:(id)arg0 currentIndex:(NSUInteger)arg1 userInitiated:(BOOL)arg2 sortDescriptors:(id)arg3 timeout:(NSInteger)arg4 localOnly:(BOOL)arg5 completion:(id)arg6 ;
-(void)_retrieveAssetWithQueries:(id)arg0 latestCompatibilityVersion:(NSUInteger)arg1 userInitiated:(BOOL)arg2 sortDescriptors:(id)arg3 timeout:(NSUInteger)arg4 catalogExpirationDays:(NSInteger)arg5 completionHandler:(id)arg6 ;
-(void)fetchCityStationProviderAssetForBaseProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchMarketNotificationAssetsForIdentifier:(id)arg0 userInitiated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)fetchRPIdentifierMappingUserInitiated:(BOOL)arg0 localOnly:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif