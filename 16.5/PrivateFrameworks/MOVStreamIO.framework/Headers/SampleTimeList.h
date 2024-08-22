// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMPLETIMELIST_H
#define SAMPLETIMELIST_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MOVStreamTimestamps.h"

@interface SampleTimeList : NSObject {
    vector<CMTime, std::allocator<CMTime>> _times;
}


@property (readonly, copy, nonatomic) NSArray *cached_cmtimes; // ivar: _cached_cmtimes
@property (readonly, copy, nonatomic) NSArray *cached_times; // ivar: _cached_times
@property (readonly, nonatomic) NSArray *cmtimes;
@property (readonly, nonatomic) NSUInteger count;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *times;
@property (retain, nonatomic) MOVStreamTimestamps *timestamps; // ivar: _timestamps


-(id)description;
-(id)init;
-(id)initWithTimes:(*void)arg0 ;
-(id)initWithTimestamps:(id)arg0 ;
-(struct ? )timeAtIndex:(NSUInteger)arg0 ;
-(struct ? )timeRangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(struct _NSRange )frameRangeFrom:(struct ? )arg0 to:(struct ? )arg1 ;


@end


#endif