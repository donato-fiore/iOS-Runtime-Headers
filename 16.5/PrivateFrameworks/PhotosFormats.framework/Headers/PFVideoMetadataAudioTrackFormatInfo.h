// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFVIDEOMETADATAAUDIOTRACKFORMATINFO_H
#define PFVIDEOMETADATAAUDIOTRACKFORMATINFO_H

@class AVAssetTrack;

#import <Foundation/Foundation.h>


@interface PFVideoMetadataAudioTrackFormatInfo : NSObject {
    AVAssetTrack *_audioTrack;
    *opaqueCMFormatDescription _firstFormatDescription;
    *AudioFormatListItem _formatListItem;
    *AudioChannelLayout _channelLayout;
}


@property (readonly) NSInteger channelCount;
@property (readonly) BOOL channelLayoutUsesChannelDescriptions;
@property (readonly) BOOL channelLayoutUsesHigherOrderAmbisonics; // ivar: _channelLayoutUsesHigherOrderAmbisonics


+(id)infoForFirstAudioTrackOfAsset:(id)arg0 matchingCodecPredicate:(id)arg1 ;
-(BOOL)channelLayoutUsesHOA;
-(BOOL)getHOAChannelCount:(*NSInteger)arg0 BEDChannelCount:(*NSInteger)arg1 ;


@end


#endif