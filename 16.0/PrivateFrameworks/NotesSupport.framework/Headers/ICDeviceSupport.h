// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDEVICESUPPORT_H
#define ICDEVICESUPPORT_H


#import <Foundation/Foundation.h>


@interface ICDeviceSupport : NSObject



+(BOOL)deviceIsIPad;
+(BOOL)deviceIsMac;
+(BOOL)deviceIsSimulator;
+(BOOL)deviceSupportsFirstGenPencil;
+(BOOL)deviceSupportsPencil;
+(BOOL)deviceSupportsSystemPaper;
+(BOOL)hasPasscode;
+(BOOL)isBiometricsAvailable;
+(BOOL)isBiometricsEnrolled;
+(BOOL)isFaceIDAvailable;
+(BOOL)isFaceIDEnrolled;
+(BOOL)isRunningDuoTests;
+(BOOL)isRunningInApp;
+(BOOL)isRunningUnitTests;
+(BOOL)isTouchIDAvailable;
+(BOOL)isTouchIDEnrolled;
+(BOOL)isTouchIDLockedOut;
+(NSInteger)evaluateBiometricsCachedPolicyState:(id)arg0 outCurrentPolicyState:(*id)arg1 ;
+(id)deviceName;
+(id)evaluatedBiometricsContextWithError:(*id)arg0 ;
+(id)notesProductType;
+(id)productBuildVersion;
+(id)productName;
+(id)productVersion;
+(struct CGSize )notesDeviceDrawingSize;


@end


#endif