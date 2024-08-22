// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ANEDEVICEINFO_H
#define _ANEDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface _ANEDeviceInfo : NSObject



+(BOOL)hasANE;
+(BOOL)isExcessivePowerDrainWhenIdle;
+(BOOL)isInternalBuild;
+(BOOL)precompiledModelChecksDisabled;
+(NSInteger)aneBoardType;
+(id)aneSubType;
+(id)aneSubTypeVariant;
+(id)bootArgs;
+(id)buildVersion;


@end


#endif