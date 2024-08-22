// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COALITIONMEMORYUSAGE_H
#define COALITIONMEMORYUSAGE_H


#import <Foundation/Foundation.h>


@interface CoalitionMemoryUsage : NSObject

@property NSUInteger compressed_size; // ivar: _compressed_size
@property NSUInteger phys_footprint_size; // ivar: _phys_footprint_size
@property NSUInteger process_count; // ivar: _process_count
@property int process_jetsam_priority; // ivar: _process_jetsam_priority
@property NSUInteger process_peak_phys_footprint; // ivar: _process_peak_phys_footprint
@property NSUInteger process_phys_footprint_size; // ivar: _process_phys_footprint_size
@property NSUInteger purgeable_size; // ivar: _purgeable_size
@property NSUInteger wired_size; // ivar: _wired_size




@end


#endif