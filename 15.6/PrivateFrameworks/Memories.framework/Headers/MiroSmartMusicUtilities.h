// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROSMARTMUSICUTILITIES_H
#define MIROSMARTMUSICUTILITIES_H


#import <Foundation/Foundation.h>


@interface MiroSmartMusicUtilities : NSObject



+(CGFloat)averageBarDurationForFlexAudioClipInSeconds:(id)arg0 ;
+(CGFloat)normalizeGainForRendition:(id)arg0 ;
+(id)_peakAndLoudnessForRendition:(id)arg0 ;
+(id)beatMetadataItemForBeatIndex:(NSInteger)arg0 andBarIndex:(NSInteger)arg1 nearBeatMetadataItem:(id)arg2 fromBeatMetadataItems:(id)arg3 ;
+(id)metadataItemAtTime:(struct ? )arg0 fromMetadataItems:(id)arg1 ;
+(id)metadataItemAtTime:(struct ? )arg0 fromMetadataItems:(id)arg1 findNearest:(BOOL)arg2 ;
+(struct ? )averageBarDurationForFlexAudioClip:(id)arg0 ;
+(struct ? )durationOfIntroForFlexAudioClip:(id)arg0 ;
+(struct ? )durationOfOutroForFlexAudioClip:(id)arg0 ;


@end


#endif