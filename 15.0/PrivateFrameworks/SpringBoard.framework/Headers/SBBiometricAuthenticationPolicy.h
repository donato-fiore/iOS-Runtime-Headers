// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBIOMETRICAUTHENTICATIONPOLICY_H
#define SBBIOMETRICAUTHENTICATIONPOLICY_H

@class NSString;
@protocol SBUIBiometricAuthenticationPolicy, SBFLockOutStatusProvider;

#import <Foundation/Foundation.h>


@interface SBBiometricAuthenticationPolicy : NSObject <SBUIBiometricAuthenticationPolicy>

 {
    id<SBFLockOutStatusProvider> *_lockOutStatusProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRelockAfterBioUnlock;
-(id)initWithLockOutProvider:(id)arg0 ;


@end


#endif