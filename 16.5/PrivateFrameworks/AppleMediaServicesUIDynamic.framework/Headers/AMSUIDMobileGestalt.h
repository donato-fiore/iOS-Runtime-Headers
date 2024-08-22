// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIDMOBILEGESTALT_H
#define AMSUIDMOBILEGESTALT_H


#import <Foundation/Foundation.h>


@interface AMSUIDMobileGestalt : NSObject



+(BOOL)hasCapabilities:(id)arg0 ;
+(BOOL)hasHEVCDecoding;
+(BOOL)hasSystemTelephonyOfAnyKind;
+(BOOL)hasVenice;
+(BOOL)isTouchIDSupported;
+(BOOL)wapiCapability;
+(id)activePairedSystemVersion;
+(id)deviceClass;
+(id)productType;


@end


#endif