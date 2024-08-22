// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMOVIEACCESSLOGEVENT_H
#define MPMOVIEACCESSLOGEVENT_H

@class AVPlayerItemAccessLogEvent, NSString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPMovieAccessLogEvent : NSObject <NSCopying>

 {
    AVPlayerItemAccessLogEvent *_event;
}


@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) CGFloat durationWatched;
@property (readonly, nonatomic) CGFloat indicatedBitrate;
@property (readonly, nonatomic) NSInteger numberOfBytesTransferred;
@property (readonly, nonatomic) NSInteger numberOfDroppedVideoFrames;
@property (readonly, nonatomic) NSUInteger numberOfSegmentsDownloaded;
@property (readonly, nonatomic) NSUInteger numberOfServerAddressChanges;
@property (readonly, nonatomic) NSInteger numberOfStalls;
@property (readonly, nonatomic) CGFloat observedBitrate;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) NSDate *playbackStartDate;
@property (readonly, nonatomic) CGFloat playbackStartOffset;
@property (readonly, nonatomic) CGFloat segmentsDownloadedDuration;
@property (readonly, nonatomic) NSString *serverAddress;


-(id)_initWithAVItemAccessLogEvent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif