// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYBACKITEMINSPECTOR_H
#define AVPLAYBACKITEMINSPECTOR_H

@class NSArray;


#import "AVAssetInspector.h"

@interface AVPlaybackItemInspector : AVAssetInspector {
    *OpaqueFigPlaybackItem _playbackItem;
    NSArray *_trackIDs;
}


@property (retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) *OpaqueFigPlaybackItem playbackItem;


-(*void)_valueAsCFTypeForProperty:(struct __CFString *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)providesPreciseDurationAndTiming;
-(NSInteger)trackCount;
-(NSUInteger)hash;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)compatibleTrackForCompositionTrack:(id)arg0 ;
-(id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0 trackIDs:(id)arg1 ;
-(id)lyrics;
-(id)metadataForFormat:(id)arg0 ;
-(id)trackIDs;
-(struct ? )duration;
-(struct CGSize )naturalSize;
-(void)dealloc;


@end


#endif