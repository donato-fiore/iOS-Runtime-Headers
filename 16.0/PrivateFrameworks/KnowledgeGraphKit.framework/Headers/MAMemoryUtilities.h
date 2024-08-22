// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAMEMORYUTILITIES_H
#define MAMEMORYUTILITIES_H


#import <Foundation/Foundation.h>


@interface MAMemoryUtilities : NSObject



+(NSUInteger)footprintBytes;
+(NSUInteger)peakFootprintBytes;
+(NSUInteger)residentBytes;
+(id)humanReadableMemoryFootprint;
+(id)humanReadableMemorySizeWithSize:(NSUInteger)arg0 ;
+(id)humanReadablePeakMemoryFootprint;
+(id)humanReadableResidentMemory;


@end


#endif