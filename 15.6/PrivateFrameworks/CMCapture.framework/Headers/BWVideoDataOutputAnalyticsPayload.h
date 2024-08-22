// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWVIDEODATAOUTPUTANALYTICSPAYLOAD_H
#define BWVIDEODATAOUTPUTANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWVideoDataOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceMask; // ivar: _deviceMask
@property (nonatomic) int devicePosition; // ivar: _devicePosition
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hdrVideo; // ivar: _hdrVideo
@property (nonatomic) int height; // ivar: _height
@property (nonatomic) float nominalFramerate; // ivar: _nominalFramerate
@property (nonatomic) NSUInteger numberOfFrames; // ivar: _numberOfFrames
@property (nonatomic) NSUInteger numberOfFramesDropped; // ivar: _numberOfFramesDropped
@property (nonatomic) NSUInteger numberOfISPFramesDropped; // ivar: _numberOfISPFramesDropped
@property (readonly) Class superclass;
@property (nonatomic) BOOL videoMirrored; // ivar: _videoMirrored
@property (nonatomic) int width; // ivar: _width


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif