// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPDEVICEINFO_H
#define _DPDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface _DPDeviceInfo : NSObject



+(BOOL)isDataCollectionEnabled;
+(BOOL)isDisabledByTaskingForCrashCopier;
+(BOOL)isDisabledByTaskingForDedisco;
+(BOOL)isDisabledByTaskingForPrio;
+(BOOL)isDisabledByTaskingForTransport:(NSUInteger)arg0 ;
+(BOOL)isInternalBuild;
+(BOOL)isRunningUnitTests;
+(id)osVersion;


@end


#endif