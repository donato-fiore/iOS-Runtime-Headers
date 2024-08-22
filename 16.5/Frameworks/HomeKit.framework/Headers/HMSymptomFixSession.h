// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSYMPTOMFIXSESSION_H
#define HMSYMPTOMFIXSESSION_H

@class NSString, NSUUID, SFDeviceRepairSession, NSError, UIViewController, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate, HMSymptomFixSessionDelegate;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMSymptom.h"

@interface HMSymptomFixSession : NSObject <HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMSymptomFixSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier
@property (nonatomic) unsigned int deviceRepairFlags; // ivar: _deviceRepairFlags
@property (retain, nonatomic) SFDeviceRepairSession *deviceRepairSession; // ivar: _deviceRepairSession
@property (nonatomic, getter=isDeviceRepairSessionFinished) BOOL deviceRepairSessionFinished; // ivar: _deviceRepairSessionFinished
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL hasSymptomDisappeared; // ivar: _hasSymptomDisappeared
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMSymptom *symptom; // ivar: _symptom
@property (retain, nonatomic) HMFTimer *symptomDisappearanceTimer; // ivar: _symptomDisappearanceTimer


+(id)_createDeviceRepairSession;
+(id)_createSymptomDisappearanceTimer;
+(id)logCategory;
-(id)init;
-(id)initWithSymptom:(id)arg0 deviceIdentifier:(id)arg1 context:(id)arg2 ;
-(void)_startSymptomDisappearanceTimer;
-(void)_updateForDeviceSetupProgressEvent:(unsigned int)arg0 error:(id)arg1 ;
-(void)_updateState;
-(void)dealloc;
-(void)noteSymptomDisappeared;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif