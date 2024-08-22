// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYBACKITEMINSPECTORLOADER_H
#define AVPLAYBACKITEMINSPECTORLOADER_H

@class NSArray;


#import "AVAssetMakeReadyForInspectionLoader.h"

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader {
    *OpaqueFigPlaybackItem _playbackItem;
    NSArray *_trackIDs;
    BOOL _shouldCacheDuration;
    ? _cachedDuration;
}


@property (readonly, nonatomic, getter=_playbackItem) *OpaqueFigPlaybackItem playbackItem;


-(BOOL)_inspectionRequiresAFormatReader;
-(BOOL)isEqual:(id)arg0 ;
-(Class)_classForTrackInspectors;
-(NSUInteger)hash;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg0 ;
-(id)_playbackItemPropertiesForKeys:(id)arg0 ;
-(id)assetInspector;
-(id)initWithURL:(id)arg0 playbackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(id)arg2 dynamicBehavior:(BOOL)arg3 ;
-(struct ? )duration;
-(struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(*int)arg0 ;
-(void)_addFigObjectNotifications;
-(void)_removeFigObjectNotifications;
-(void)cancelLoading;
-(void)dealloc;


@end


#endif