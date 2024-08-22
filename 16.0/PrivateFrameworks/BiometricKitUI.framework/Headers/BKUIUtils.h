// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIUTILS_H
#define BKUIUTILS_H


#import <Foundation/Foundation.h>


@interface BKUIUtils : NSObject



+(BOOL)containerEnrollmentStyleEnabled;
+(BOOL)glassesFlowEnabled;
+(NSInteger)activeInterfaceOrientationForView:(id)arg0 ;
+(id)nameForMessage:(unsigned int)arg0 ;
+(void)resetScreenDimming;
+(void)vibrateForBiometricEvent:(BOOL)arg0 ;
+(void)vibrateWithIntensity:(float)arg0 withPattern:(id)arg1 ;


@end


#endif