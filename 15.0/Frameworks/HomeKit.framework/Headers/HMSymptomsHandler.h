// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSYMPTOMSHANDLER_H
#define HMSYMPTOMSHANDLER_H

@class HMFUnfairLock, NSString, NSHashTable, NSUUID, NSSet;
@protocol NSSecureCoding, HMFMessageReceiver, HMFLogging, HMObjectMerge, HMSymptomsHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMMutableArray.h"

@interface HMSymptomsHandler : NSObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMObjectMerge>

 {
    HMFUnfairLock *_lock;
}


@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, nonatomic) HMMutableArray *currentSymptoms; // ivar: _currentSymptoms
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMSymptomsHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSHashTable *fixSessions; // ivar: _fixSessions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, setter=setSFDeviceIdentifier:) NSUUID *sfDeviceIdentifier; // ivar: _sfDeviceIdentifier
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *symptoms;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)_findAndRemoveFixSessionsForSymptom:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)logIdentifier;
-(id)newFixSessionForSymptom:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 ;
-(void)_addFixSession:(id)arg0 ;
-(void)_callFixSessionAvailabilityUpdatedDelegate;
-(void)_callSymptomsUpdatedDelegate:(id)arg0 ;
-(void)_handleSFDeviceIdentifierUpdated:(id)arg0 ;
-(void)_handleSymptomsUpdated:(id)arg0 ;
-(void)_registerForMessages;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initiateFixWithCompletionHandler:(id)arg0 ;


@end


#endif