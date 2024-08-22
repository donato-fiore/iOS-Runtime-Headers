// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOVSTREAMTIMESTAMPS_H
#define MOVSTREAMTIMESTAMPS_H

@class AVAssetTrack, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "SampleTimeList.h"

@interface MOVStreamTimestamps : NSObject

@property (retain, nonatomic) AVAssetTrack *assetTrack; // ivar: _assetTrack
@property (readonly, nonatomic) NSArray *cmtimes;
@property (readonly, nonatomic) NSUInteger count;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL shouldAppendEndOfStreamTimestamp; // ivar: _shouldAppendEndOfStreamTimestamp
@property (nonatomic) BOOL shouldStartTimestampsAtZero; // ivar: _shouldStartTimestampsAtZero
@property (retain, nonatomic) SampleTimeList *timeList; // ivar: _timeList
@property (readonly, nonatomic) NSArray *times;


-(id)description;
-(id)init;
-(id)initWithAssetTrack:(id)arg0 ;
-(id)sampleTimelineForAssetTrack:(id)arg0 ;
-(id)sampleTimelineForAssetTrack:(id)arg0 shouldStartTimestampsAtZero:(BOOL)arg1 ;
-(struct ? )endTimeForAssetTrack:(id)arg0 ;
-(struct ? )timeAtIndex:(NSUInteger)arg0 ;
-(struct ? )timeRangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(struct _NSRange )frameRangeFrom:(struct ? )arg0 to:(struct ? )arg1 ;
-(void)clearCachedProperties;


@end


#endif