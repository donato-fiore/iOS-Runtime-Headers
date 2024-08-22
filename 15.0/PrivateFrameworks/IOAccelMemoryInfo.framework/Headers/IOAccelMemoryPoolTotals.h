// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOACCELMEMORYPOOLTOTALS_H
#define IOACCELMEMORYPOOLTOTALS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IOAccelMemoryPoolTotals : NSObject

@property NSUInteger allocatedSize; // ivar: allocatedSize
@property (retain) NSString *device_name; // ivar: device_name
@property NSUInteger dirtySize; // ivar: dirtySize
@property NSUInteger nonpurgeableSize; // ivar: nonpurgeableSize
@property NSUInteger orphanedSize; // ivar: orphanedSize
@property (retain) NSString *pool; // ivar: pool
@property NSUInteger purgeableSize; // ivar: purgeableSize
@property NSUInteger residentSize; // ivar: residentSize
@property NSUInteger wiredSize; // ivar: wiredSize


-(void)dealloc;


@end


#endif