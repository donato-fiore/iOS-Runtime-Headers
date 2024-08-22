// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPLETIMERANGELIST_H
#define SAMPLETIMERANGELIST_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SampleTimeRangeList : NSObject <NSCopying>

 {
    vector<CMTimeRange, std::allocator<CMTimeRange>> _ranges;
}


@property (readonly, copy, nonatomic) NSArray *cached_ranges; // ivar: _cached_ranges
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)containsTimeRange:(struct ? )arg0 ;
-(NSInteger)indexOfTimeRangeAtTime:(struct ? )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTimeRange:(struct ? )arg0 ;
-(id)initWithTimeRanges:(*void)arg0 ;
-(struct ? )timeRange;
-(struct ? )timeRangeAtIndex:(NSUInteger)arg0 ;


@end


#endif