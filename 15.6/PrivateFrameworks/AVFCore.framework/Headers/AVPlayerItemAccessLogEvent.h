// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERITEMACCESSLOGEVENT_H
#define AVPLAYERITEMACCESSLOGEVENT_H

@class NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVPlayerItemAccessLogEventInternal.h"

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying>

 {
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;
}


@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) CGFloat averageAudioBitrate;
@property (readonly, nonatomic) CGFloat averageVideoBitrate;
@property (readonly, nonatomic) NSInteger downloadOverdue;
@property (readonly, nonatomic) CGFloat durationWatched;
@property (readonly, nonatomic) CGFloat indicatedAverageBitrate;
@property (readonly, nonatomic) CGFloat indicatedBitrate;
@property (readonly, nonatomic) NSInteger mediaRequestsWWAN;
@property (readonly, nonatomic) NSInteger numberOfBytesTransferred;
@property (readonly, nonatomic) NSInteger numberOfDroppedVideoFrames;
@property (readonly, nonatomic) NSInteger numberOfMediaRequests;
@property (readonly, nonatomic) NSInteger numberOfSegmentsDownloaded;
@property (readonly, nonatomic) NSInteger numberOfServerAddressChanges;
@property (readonly, nonatomic) NSInteger numberOfStalls;
@property (readonly, nonatomic) CGFloat observedBitrate;
@property (readonly, nonatomic) CGFloat observedBitrateStandardDeviation;
@property (readonly, nonatomic) CGFloat observedMaxBitrate;
@property (readonly, nonatomic) CGFloat observedMinBitrate;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) NSDate *playbackStartDate;
@property (readonly, nonatomic) CGFloat playbackStartOffset;
@property (readonly, nonatomic) NSString *playbackType;
@property (readonly, nonatomic) CGFloat segmentsDownloadedDuration;
@property (readonly, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) CGFloat startupTime;
@property (readonly, nonatomic) CGFloat switchBitrate;
@property (readonly, nonatomic) CGFloat transferDuration;


-(CGFloat)currentObservedBitrate;
-(NSInteger)entryReasonCode;
-(id)_common_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)serviceIdentifier;
-(void)dealloc;


@end


#endif