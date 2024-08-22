// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASDEVICEINFO_H
#define _PASDEVICEINFO_H


#import <Foundation/Foundation.h>


@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}




+(BOOL)isAudioAccessory;
+(BOOL)isBetaBuild;
+(BOOL)isDNUEnabled;
+(BOOL)isDemoModeEnabled;
+(BOOL)isFaceTimeSupported;
+(BOOL)isInternalBuild;
+(BOOL)isLowEndHardware;
+(BOOL)isLowPowerModeEnabled;
+(BOOL)isiPad;
+(BOOL)shouldIncludePredictionLogs;
+(id)deviceUUID;
+(id)internalDeviceCode;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;


@end


#endif