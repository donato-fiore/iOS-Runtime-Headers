// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASKMOBILEGESTALT_H
#define ASKMOBILEGESTALT_H


#import <Foundation/Foundation.h>


@interface ASKMobileGestalt : NSObject



+(BOOL)hasCapabilities:(id)arg0 ;
+(BOOL)hasHEVCDecoding;
+(BOOL)hasSystemTelephonyOfAnyKind;
+(BOOL)hasVenice;
+(BOOL)isAppleSiliconMac;
+(BOOL)isCharonSupported;
+(BOOL)isStandaloneWatch;
+(BOOL)wapiCapability;
+(CGFloat)mainScreenScale;
+(id)activePairedSystemVersion;
+(id)deviceClass;
+(id)productType;
+(struct CGSize )mainScreenSize;


@end


#endif