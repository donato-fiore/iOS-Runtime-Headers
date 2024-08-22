// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBIOMETRICSSERVICE_H
#define SBBIOMETRICSSERVICE_H

@class SBUIBiometricResource, FBServiceClientAuthenticator, NSString;
@protocol SBSystemServiceServerBiometricsDelegate;

#import <Foundation/Foundation.h>


@interface SBBiometricsService : NSObject <SBSystemServiceServerBiometricsDelegate>

 {
    SBUIBiometricResource *_biometricResource;
    FBServiceClientAuthenticator *_unlockCredentialAuthenticator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 fetchUnlockCredentialSet:(id)arg2 ;


@end


#endif