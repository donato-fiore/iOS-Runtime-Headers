// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTIMERANGECOLLECTION_H
#define AVTIMERANGECOLLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVTimeRangeCollection : NSObject

@property (readonly) CGFloat combinedDuration; // ivar: _combinedDuration
@property (readonly) NSArray *timeRanges; // ivar: _timeRanges


-(CGFloat)displayTimeFromTime:(CGFloat)arg0 ;
-(CGFloat)timeFromDisplayTime:(CGFloat)arg0 ;
-(NSUInteger)count;
-(id)arrayOfBoundaryTimes;
-(id)arrayOfDisplayTimes;
-(id)arrayOfDisplayTimesMatching:(id)arg0 ;
-(id)displayTimeRangeTrimmedToTimeRange:(id)arg0 ;
-(id)init;
-(id)initWithInterstitialTimeRanges:(id)arg0 ;
-(id)initWithTimeRanges:(id)arg0 ;
-(id)initWithTimedMetadataGroups:(id)arg0 ;
-(id)timeRangeAfterTime:(CGFloat)arg0 ;
-(id)timeRangeBeforeTime:(CGFloat)arg0 ;
-(id)timeRangeClosestToTime:(CGFloat)arg0 ;
-(id)timeRangeContainingTime:(CGFloat)arg0 ;
-(id)timeRangesBetweenDisplayTime:(CGFloat)arg0 and:(CGFloat)arg1 ;
-(void)setMapDate:(id)arg0 toTime:(CGFloat)arg1 ;


@end


#endif