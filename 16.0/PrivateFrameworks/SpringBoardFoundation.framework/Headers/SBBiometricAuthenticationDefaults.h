// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBIOMETRICAUTHENTICATIONDEFAULTS_H
#define SBBIOMETRICAUTHENTICATIONDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBBiometricAuthenticationDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic, getter=isLogTimestampsEnabled) BOOL logTimestampsEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif