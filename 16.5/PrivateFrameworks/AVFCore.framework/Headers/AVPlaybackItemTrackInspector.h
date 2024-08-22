// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYBACKITEMTRACKINSPECTOR_H
#define AVPLAYBACKITEMTRACKINSPECTOR_H



#import "AVAssetTrackInspector.h"
#import "AVWeakReference.h"

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    *OpaqueFigPlaybackItem _playbackItem;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}




-(*void)_valueAsCFTypeForProperty:(struct __CFString *)arg0 ;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(id)asset;
-(id)formatDescriptions;
-(id)mediaType;
-(int)trackID;
-(struct ? )samplePresentationTimeForTrackTime:(struct ? )arg0 ;
-(struct ? )timeRange;
-(struct CGAffineTransform )preferredTransform;
-(struct CGSize )dimensions;
-(struct CGSize )naturalSize;
-(struct OpaqueFigPlaybackItem *)_playbackItem;
-(unsigned int)_figMediaType;
-(void)dealloc;


@end


#endif