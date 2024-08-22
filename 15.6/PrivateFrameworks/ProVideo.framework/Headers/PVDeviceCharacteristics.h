// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVDEVICECHARACTERISTICS_H
#define PVDEVICECHARACTERISTICS_H


#import <Foundation/Foundation.h>


@interface PVDeviceCharacteristics : NSObject



+(BOOL)colorSyncCapable;
+(BOOL)hasExtendedColorDisplay;
+(BOOL)isLowMemDevice;
+(NSInteger)actualMemory;
+(int)architectureType;
+(void)Initialize;


@end


#endif