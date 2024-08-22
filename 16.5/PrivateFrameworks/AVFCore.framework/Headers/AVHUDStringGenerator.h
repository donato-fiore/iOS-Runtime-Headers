// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVHUDSTRINGGENERATOR_H
#define AVHUDSTRINGGENERATOR_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "AVPlayer.h"

@interface AVHUDStringGenerator : NSObject {
    NSString *_playerItemURL;
    NSString *_assetType;
    NSString *_sessionID;
    NSString *_configurationGroup;
    NSString *_trackFormatDescriptions;
    NSNumber *_refreshRate;
    NSString *_videoRange;
    NSNumber *_videoApproximateDisplaySizeHeight;
    NSNumber *_videoApproximateDisplaySizeWidth;
    NSNumber *_presentationSizeHeight;
    NSNumber *_presentationSizeWidth;
    NSNumber *_currentFrameRate;
    NSNumber *_nominalFrameRate;
    NSNumber *_networkBandiwdth;
    NSNumber *_averageVideoBitrate;
    NSNumber *_averageAudioBitrate;
    NSString *_assetTrackInfo;
    NSNumber *_peakIndicatedBitrate;
    NSNumber *_averageIndicatedBitrate;
    NSNumber *_variantIndex;
    NSNumber *_totalFrameDrops;
    NSNumber *_decoderFrameDrops;
    NSNumber *_imageQueueFrameDrops;
    NSNumber *_bufferedVideoPlayed;
    NSNumber *_bufferedVideoRemaining;
    NSString *_customPerfInfo;
    NSNumber *_totalStalls;
}


@property (readonly, nonatomic) NSNumber *audioSpatializationMode; // ivar: _audioSpatializationMode
@property (nonatomic) BOOL captureCompleteURI; // ivar: _captureCompleteURI
@property (readonly, nonatomic) NSNumber *displayResolutionHeight; // ivar: _displayResolutionHeight
@property (readonly, nonatomic) NSNumber *displayResolutionWidth; // ivar: _displayResolutionWidth
@property (readonly, nonatomic) NSString *formattedDisplayString; // ivar: _formattedDisplayString
@property (weak) AVPlayer *player; // ivar: _player
@property (nonatomic) NSInteger prevStallCount; // ivar: _prevStallCount
@property (nonatomic) NSInteger prevVariantIdx; // ivar: _prevVariantIdx
@property (nonatomic) BOOL spatialDiagnostics; // ivar: _spatialDiagnostics
@property (nonatomic) NSInteger totalStallCount; // ivar: _totalStallCount


+(id)descriptionStringForBitRate:(CGFloat)arg0 ;
+(id)descriptionStringForFormatOfTrack:(id)arg0 ;
+(id)descriptionStringForTracksOfPlayerItem:(id)arg0 ;
+(id)descriptionStringForVideoRangeOfFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
-(void)dealloc;
-(void)update;
-(void)updateFromPlayer;
-(void)updateFromPlayerItem;


@end


#endif