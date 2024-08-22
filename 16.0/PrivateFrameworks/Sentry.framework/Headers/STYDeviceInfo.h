// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STYDEVICEINFO_H
#define STYDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface STYDeviceInfo : NSObject



+(BOOL)isAppleInternal;
+(BOOL)isMemoryConstrained;
+(NSUInteger)_determineBootVolumeType;
+(NSUInteger)bootVolumeType;
+(id)_determineHardwareModel;
+(id)hardwareModel;
+(id)osBuild;


@end


#endif