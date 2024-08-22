// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(id)aneSubTypeProductVariant;
+(id)aneSubTypeVariant;
+(id)bootArgs;
+(id)buildVersion;
+(id)productName;


@end


#endif