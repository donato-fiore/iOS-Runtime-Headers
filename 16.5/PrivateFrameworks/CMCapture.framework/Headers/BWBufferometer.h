// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWBUFFEROMETER_H
#define BWBUFFEROMETER_H


#import <Foundation/Foundation.h>


@interface BWBufferometer : NSObject



+(NSInteger)totalTrackedBuffersInFlight;
+(NSInteger)totalTrackedSizeInFlight;
+(void)initialize;
+(void)trackBuffer:(*void)arg0 trackedSize:(NSInteger)arg1 ;
+(void)trackBuffer:(*void)arg0 trackedSize:(NSInteger)arg1 tag:(id)arg2 bufferType:(id)arg3 ;


@end


#endif