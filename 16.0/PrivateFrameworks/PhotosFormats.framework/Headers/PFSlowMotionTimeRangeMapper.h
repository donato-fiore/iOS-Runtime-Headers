// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSLOWMOTIONTIMERANGEMAPPER_H
#define PFSLOWMOTIONTIMERANGEMAPPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PFSlowMotionTimeRangeMapper : NSObject {
    NSMutableArray *_originalLengths;
    NSMutableArray *_scaledLengths;
    NSMutableArray *_scaledRegions;
}




-(float)_mapTime:(float)arg0 fromLengths:(id)arg1 toLengths:(id)arg2 ;
-(float)originalTimeForScaledTime:(float)arg0 ;
-(float)scaledTimeForOriginalTime:(float)arg0 ;
-(id)init;
-(void)addNextRange:(float)arg0 scaledLength:(float)arg1 ;
-(void)enumerateScaledRegionsUsingBlock:(id)arg0 ;
-(void)markScaledRegionWithRate:(float)arg0 rampInStartTime:(float)arg1 rampInEndTime:(float)arg2 rampOutStartTime:(float)arg3 rampOutEndTime:(float)arg4 ;


@end


#endif