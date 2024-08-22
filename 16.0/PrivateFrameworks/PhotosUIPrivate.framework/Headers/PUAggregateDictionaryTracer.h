// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUAGGREGATEDICTIONARYTRACER_H
#define PUAGGREGATEDICTIONARYTRACER_H

@class NSMapTable, NSDate;
@protocol PUDisplayAsset;

#import <Foundation/Foundation.h>


@interface PUAggregateDictionaryTracer : NSObject

@property (nonatomic, setter=_setAssetPlayCount:) NSInteger _assetPlayCount; // ivar: __assetPlayCount
@property (readonly, nonatomic) NSMapTable *_browsingViewModelTracers; // ivar: __browsingViewModelTracers
@property (retain, nonatomic, setter=_setLastPlayStartDate:) NSDate *_lastPlayStartDate; // ivar: __lastPlayStartDate
@property (weak, nonatomic, setter=_setLastPlayedAsset:) NSObject<PUDisplayAsset> *_lastPlayedAsset; // ivar: __lastPlayedAsset
@property (weak, nonatomic, setter=_setLastViewedAsset:) NSObject<PUDisplayAsset> *_lastViewedAsset; // ivar: __lastViewedAsset
@property (retain, nonatomic) NSObject<PUDisplayAsset> *_lastViewedAssetPerOrigin; // ivar: __lastViewedAssetPerOrigin
@property (nonatomic) NSInteger _oneUpPresentationOrigin; // ivar: __oneUpPresentationOrigin
@property (weak, nonatomic, setter=_setStreamedVideo:) NSObject<PUDisplayAsset> *_streamedVideo; // ivar: __streamedVideo
@property (nonatomic, setter=_setStreamedVideoBeginTime:) CGFloat _streamedVideoBeginTime; // ivar: __streamedVideoBeginTime
@property (nonatomic, setter=_setStreamedVideoDidStartPlaying:) BOOL _streamedVideoDidStartPlaying; // ivar: __streamedVideoDidStartPlaying
@property (nonatomic, setter=_setStreamedVideoStallCount:) NSInteger _streamedVideoStallCount; // ivar: __streamedVideoStallCount


+(id)sharedTracer;
-(NSInteger)_assetTypeForAsset:(id)arg0 ;
-(id)_browsingViewModelTracerForBrowsingViewModel:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)init;
-(void)invalidateContext:(id)arg0 ;
-(void)streamedVideoPlaybackBegan:(id)arg0 ;
-(void)streamedVideoPlaybackEnded;
-(void)streamedVideoPlaybackStalled:(id)arg0 ;
-(void)streamedVideoPlaybackStartedActuallyPlaying:(id)arg0 ;
-(void)userBrowsedOneUpFor:(CGFloat)arg0 ;
-(void)userDidEnterOneUpFromOrigin:(NSInteger)arg0 ;
-(void)userDidPlayAssetInOneUp:(id)arg0 ;
-(void)userStartedViewingCollection:(id)arg0 withListViewItemSelectionTrackerKey:(struct __CFString *)arg1 ;
-(void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)arg0 inContext:(id)arg1 ;
-(void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)arg0 inContext:(id)arg1 ;
-(void)userViewedAssetInOneUp:(id)arg0 ;
-(void)userViewedHDRPhotoInOneUpFor:(CGFloat)arg0 ;
-(void)userViewedPhotoInOneUpFor:(CGFloat)arg0 ;
-(void)userWillPlayAssetInOneUp:(id)arg0 ;
-(void)vitalityPlayedForAssetInOneUp:(id)arg0 ;


@end


#endif