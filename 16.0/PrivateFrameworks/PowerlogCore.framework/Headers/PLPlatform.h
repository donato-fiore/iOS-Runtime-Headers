// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPLATFORM_H
#define PLPLATFORM_H


#import <Foundation/Foundation.h>


@interface PLPlatform : NSObject



+(BOOL)carrierBuild;
+(BOOL)hasAOD;
+(BOOL)hasAOT;
+(BOOL)hasBaseband;
+(BOOL)hasCapability:(int)arg0 ;
+(BOOL)hasDCP;
+(BOOL)hasLPEM;
+(BOOL)hasNFC;
+(BOOL)hasOLED;
+(BOOL)hasOrb;
+(BOOL)hasSleepMedia;
+(BOOL)internalBuild;
+(BOOL)is64Bit;
+(BOOL)isARMMac;
+(BOOL)isAppleTV;
+(BOOL)isArchARM;
+(BOOL)isAudioClass:(int)arg0 ;
+(BOOL)isBasebandClass:(int)arg0 ;
+(BOOL)isBasebandDSDS;
+(BOOL)isBasebandIce;
+(BOOL)isBasebandMavLeg;
+(BOOL)isBasebandProto;
+(BOOL)isCameraClass:(int)arg0 ;
+(BOOL)isDeviceClass:(int)arg0 ;
+(BOOL)isDeviceClassName:(id)arg0 ;
+(BOOL)isDisplayClass:(int)arg0 ;
+(BOOL)isGPSClass:(int)arg0 ;
+(BOOL)isHomePod;
+(BOOL)isMac;
+(BOOL)isSoCClass:(int)arg0 ;
+(BOOL)isTVOS;
+(BOOL)isTorchClass:(int)arg0 ;
+(BOOL)isWatch;
+(BOOL)isWiFiClass:(int)arg0 ;
+(BOOL)isiOS;
+(BOOL)isiPad;
+(BOOL)isiPhone;
+(BOOL)isiPod;
+(BOOL)kPLAudioClassIsOneOf:(int)arg0 ;
+(BOOL)kPLBasebandClassIsOneOf:(int)arg0 ;
+(BOOL)kPLCameraClassIsOneOf:(int)arg0 ;
+(BOOL)kPLDeviceClassIsOneOf:(int)arg0 ;
+(BOOL)kPLDisplayClassIsOneOf:(int)arg0 ;
+(BOOL)kPLGPSClassIsOneOf:(int)arg0 ;
+(BOOL)kPLSoCClassIsOneOf:(int)arg0 ;
+(BOOL)kPLTorchClassIsOneOf:(int)arg0 ;
+(BOOL)kPLWiFiClassIsOneOf:(int)arg0 ;
+(BOOL)kPLXIsOneOf:(int)arg0 firstArg:(int)arg1 restOfArgs:(char *)arg2 ;
+(BOOL)nonUIBuild;
+(BOOL)seedBuild;
+(id)kPLDeviceClassName;
+(id)kPLDeviceMap;
+(id)kPLPlatformAttributes;
+(id)wrapDeviceArgumentsInArray:(int)arg0 ;
+(int)kPLAudioClassOfDevice;
+(int)kPLBasebandClassOfDevice;
+(int)kPLCameraClassOfDevice;
+(int)kPLDeviceClass;
+(int)kPLDisplayClassOfDevice;
+(int)kPLGPSClassOfDevice;
+(int)kPLSoCClassOfDevice;
+(int)kPLTorchClassOfDevice;
+(int)kPLWiFiClassOfDevice;


@end


#endif