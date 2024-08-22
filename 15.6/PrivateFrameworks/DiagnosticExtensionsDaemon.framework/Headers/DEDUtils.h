// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDUTILS_H
#define DEDUTILS_H


#import <Foundation/Foundation.h>


@interface DEDUtils : NSObject



+(BOOL)isDebugRequestsEnabled;
+(BOOL)isInternalInstall;
+(id)deviceClass;
+(id)deviceClassForProductType:(id)arg0 ;
+(id)deviceColor;
+(id)deviceEnclosureColor;
+(id)deviceHardwareCodename;
+(id)deviceModel;
+(id)deviceName;
+(id)deviceProductType;
+(id)deviceSerialNumber;
+(id)deviceUniformTypeIdentifier;
+(id)modelForProductType:(id)arg0 ;
+(id)osBuild;
+(id)platform;
+(id)sharedLog;
+(id)uniqueDeviceSpecifier;
+(int)deviceHomeButtonType;


@end


#endif