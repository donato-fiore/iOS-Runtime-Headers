// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PROCESSMEMORYUSAGE_H
#define PROCESSMEMORYUSAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ProcessMemoryUsage : NSObject

@property (retain) NSString *bundleId; // ivar: _bundleId
@property (retain) NSString *bundleVersion; // ivar: _bundleVersion
@property BOOL isDaemonXPCService; // ivar: _isDaemonXPCService
@property int jetsam_priority; // ivar: _jetsam_priority
@property NSUInteger peak_phys_footprint; // ivar: _peak_phys_footprint
@property NSUInteger phys_footprint_size; // ivar: _phys_footprint_size
@property (retain) NSString *processName; // ivar: _processName
@property BOOL process_active; // ivar: _process_active




@end


#endif