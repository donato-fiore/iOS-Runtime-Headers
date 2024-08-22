// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSUSERPRESENCEMONITOR_H
#define CSUSERPRESENCEMONITOR_H

@class NSMutableSet, NSHashTable, NSString;
@protocol CSEventHandling, SBUIBiometricResource, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface CSUserPresenceMonitor : NSObject <CSEventHandling>

 {
    id<SBUIBiometricResource> *_biometricResource;
    NSMutableSet *_activationReasons;
    id<BSInvalidatable> *_faceDetectAssertion;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL userPresenceDetectedSinceWake; // ivar: _userPresenceDetectedSinceWake


-(BOOL)_handleBiometricEvent:(NSUInteger)arg0 ;
-(BOOL)_isFaceDetectPermitted;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)isUserPresenceDetectionSupported;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)initWithBiometricResource:(id)arg0 ;
-(void)_updateFaceDetectionState;
-(void)addObserver:(id)arg0 ;
-(void)conformsToCSEventHandling;
-(void)dealloc;
-(void)disableDetectionForReason:(id)arg0 ;
-(void)enableDetectionForReason:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif