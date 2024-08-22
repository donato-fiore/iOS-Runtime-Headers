// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCAVASSETPREWARMER_H
#define FCAVASSETPREWARMER_H

@class NSCountedSet, NSMutableDictionary, NSTimer, NSString;
@protocol FCKeyedOperationQueueDelegate, FCAVAssetPrewarming, FCAVAssetResourceLoaderType;

#import <Foundation/Foundation.h>

#import "FCKeyedOperationQueue.h"

@interface FCAVAssetPrewarmer : NSObject <FCKeyedOperationQueueDelegate, FCAVAssetPrewarming>

 {
    id<FCAVAssetResourceLoaderType> *_assetResourceLoader;
    FCKeyedOperationQueue *_prefetchQueue;
    NSCountedSet *_interestedAssets;
    NSMutableDictionary *_interestModificationDates;
    NSMutableDictionary *_interestTokensByAsset;
    NSUInteger _highWaterMark;
    NSTimer *_reprocessTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)keyedOperationQueue:(id)arg0 performAsyncOperationForKey:(id)arg1 completion:(id)arg2 ;
-(void)_reprocessInterestedAssets;
-(void)_revisitSuspendedState;
-(void)addInterestInAsset:(id)arg0 ;
-(void)removeInterestInAsset:(id)arg0 ;


@end


#endif