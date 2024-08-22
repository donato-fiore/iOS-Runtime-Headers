// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIASSETPURGER_H
#define TRIASSETPURGER_H

@class TRIClient, NSString;
@protocol TRIAssetPurging, TRIPaths, TRIPurgeableNamespacesProviding, TRIPurgeableFactorPacksEnumerating;

#import <Foundation/Foundation.h>

#import "TRIAssetStore.h"

@interface TRIAssetPurger : NSObject <TRIAssetPurging>

 {
    id<TRIPaths> *_paths;
    id<TRIPurgeableNamespacesProviding> *_purgeableNamespacesProvider;
    id<TRIPurgeableFactorPacksEnumerating> *_purgeableFactorPacksEnumerator;
    TRIAssetStore *_assetStore;
    TRIClient *_loggingClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)purgeAssetsForPurgeabilityLevel:(int)arg0 requestedPurgeAmount:(NSInteger)arg1 ;
-(NSUInteger)purgeableAssetSizeForPurgeabilityLevel:(int)arg0 ;
-(id)initWithPaths:(id)arg0 assetStore:(id)arg1 purgeableNamespacesProvider:(id)arg2 purgeableFactorPacksEnumerator:(id)arg3 loggingClient:(id)arg4 ;
-(void)_enumerateRolloutFactorPackPurgeCandidatesForPurgeabilityLevel:(int)arg0 block:(id)arg1 ;
-(void)_logPurgedAssetsFromFactorPackWithId:(id)arg0 namespaceName:(id)arg1 purgeabilityLevel:(int)arg2 ;


@end


#endif