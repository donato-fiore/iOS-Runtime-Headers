// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYPHOTOKITMUSICCURATIONPROVIDER_H
#define PXSTORYPHOTOKITMUSICCURATIONPROVIDER_H

@class NSArray, NSMutableDictionary;
@protocol PXStoryMusicCurationProvider, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXStoryPhotoKitMusicCurationProvider : NSObject <PXStoryMusicCurationProvider>



@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSArray *recentlyUsedAppleMusicSongIDs;
@property (retain, nonatomic) NSArray *recentlyUsedFlexSongIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (readonly, nonatomic) NSMutableDictionary *stateQueue_cache; // ivar: _stateQueue_cache
@property (retain, nonatomic) NSArray *stateQueue_recentlyUsedAppleMusicSongIDs; // ivar: _stateQueue_recentlyUsedAppleMusicSongIDs
@property (retain, nonatomic) NSArray *stateQueue_recentlyUsedFlexSongIDs; // ivar: _stateQueue_recentlyUsedFlexSongIDs
@property (readonly, nonatomic) NSMutableDictionary *stateQueue_requests; // ivar: _stateQueue_requests
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(id)_cachedResultForAssetCollection:(id)arg0 options:(id)arg1 ;
-(id)_performRequestForAssetCollection:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)init;
-(id)requestMusicCurationForAssetCollection:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(void)_handleMusicCurationResult:(id)arg0 forAssetCollection:(id)arg1 options:(id)arg2 ;
-(void)_removeRejectedSong:(id)arg0 fromCachedResultForAssetCollection:(id)arg1 ;
-(void)_replaceSongWithSong:(id)arg0 inCachedResultForAssetCollection:(id)arg1 ;
-(void)_saveNegativeFeedbackForSongIdentifier:(id)arg0 memory:(id)arg1 ;
-(void)applyNegativeFeedbackToSong:(id)arg0 forMemory:(id)arg1 ;
-(void)updateAudioAsset:(id)arg0 forAssetCollection:(id)arg1 ;


@end


#endif