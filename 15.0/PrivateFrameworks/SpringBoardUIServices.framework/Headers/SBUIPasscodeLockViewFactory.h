// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIPASSCODELOCKVIEWFACTORY_H
#define SBUIPASSCODELOCKVIEWFACTORY_H


#import <Foundation/Foundation.h>


@interface SBUIPasscodeLockViewFactory : NSObject



+(id)_defaultPasscodeBiometricResource;
+(id)_passcodeLockViewForStyle:(int)arg0 withLightStyle:(BOOL)arg1 ;
+(id)installTonightPasscodeLockViewForUsersCurrentStyle;
+(id)lightPasscodeLockViewForStyle:(int)arg0 ;
+(id)lightPasscodeLockViewForUsersCurrentStyle;
+(id)passcodeLockViewForStyle:(int)arg0 ;
+(id)passcodeLockViewForUsersCurrentStyle;
+(void)_commonInitPasscodeView:(id)arg0 forStyle:(int)arg1 ;
+(void)setPasscodeBiometricResource:(id)arg0 ;


@end


#endif