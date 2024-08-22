// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYSYMPTOMHANDLER_H
#define HMDACCESSORYSYMPTOMHANDLER_H

@class HMFObject, NSUUID, NSString, HMFMessageDispatcher, NSSet;
@protocol HMFLogging, HMFMessageReceiver, HMDAccessorySymptomsDelegate, NSSecureCoding, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDSymptomManager.h"

@interface HMDAccessorySymptomHandler : HMFObject <HMFLogging, HMFMessageReceiver, HMDAccessorySymptomsDelegate, NSSecureCoding>



@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (retain, nonatomic) NSUUID *sfDeviceIdentifier; // ivar: _sfDeviceIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDSymptomManager *symptomManager; // ivar: _symptomManager
@property (copy, nonatomic) NSSet *symptoms; // ivar: _symptoms
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)_filteredSymptomsForSymptoms:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 symptoms:(id)arg1 ;
-(id)initWithAccessory:(id)arg0 symptoms:(id)arg1 symptomManager:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(void)_handleFixErrorMessage:(id)arg0 ;
-(void)_registerMessages;
-(void)_sendStatusUpdate;
-(void)_updateStateWithNewSFDeviceIdentifier:(id)arg0 ;
-(void)_updateStateWithNewSymptoms:(id)arg0 ;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessoryDeviceUpdated;
-(void)symptomManager:(id)arg0 didChangeSFDeviceIdentifier:(id)arg1 ;
-(void)symptomManager:(id)arg0 didChangeSymptoms:(id)arg1 ;
-(void)updateSymptoms:(id)arg0 ;


@end


#endif