// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIPASSCODEBIOMETRICRESOURCE_H
#define SBUIPASSCODEBIOMETRICRESOURCE_H

@class NSString;
@protocol SBUIBiometricResource, SBUIPasscodeBiometricMatchingAssertionFactory;

#import <Foundation/Foundation.h>

#import "SBUIBiometricResource.h"

@interface SBUIPasscodeBiometricResource : NSObject <SBUIBiometricResource>

 {
    SBUIBiometricResource *_biometricResource;
    id<SBUIPasscodeBiometricMatchingAssertionFactory> *_overrideMatchingAssertionFactory;
}


@property (readonly, nonatomic) NSUInteger biometricLockoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFingerDetectEnabled) BOOL fingerDetectEnabled;
@property (readonly, nonatomic, getter=isFingerOn) BOOL fingerOn;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly, nonatomic) BOOL hasEnrolledIdentities;
@property (readonly, nonatomic) BOOL hasMesaSupport;
@property (readonly, nonatomic) BOOL hasPearlSupport;
@property (readonly, nonatomic) BOOL hasPoseidonSupport;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isMatchingAllowed) BOOL matchingAllowed;
@property (readonly, nonatomic, getter=isMatchingEnabled) BOOL matchingEnabled;
@property (readonly, nonatomic, getter=isPearlDetectEnabled) BOOL pearlDetectEnabled;
@property (readonly, nonatomic, getter=isPeriocularMatchingEnabled) BOOL periocularMatchingEnabled;
@property (readonly) Class superclass;


-(id)acquireFaceDetectionWantedAssertionForReason:(id)arg0 ;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg0 ;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg0 HIDEventsOnly:(BOOL)arg1 ;
-(id)acquireMatchingAssertionWithMode:(NSUInteger)arg0 reason:(id)arg1 ;
-(id)acquireSimulatedLockoutAssertionWithLockoutState:(NSUInteger)arg0 forReason:(id)arg1 ;
-(id)initWithBiometricResource:(id)arg0 overrideMatchingAssertionFactory:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)refreshMatchMode;
-(void)removeObserver:(id)arg0 ;
-(void)resumeMatchingAdvisory:(BOOL)arg0 ;
-(void)resumeMatchingForAssertion:(id)arg0 advisory:(BOOL)arg1 ;


@end


#endif