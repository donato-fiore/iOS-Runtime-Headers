// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHARACTERISTICTHRESHOLDRANGEEVENT_H
#define HMDCHARACTERISTICTHRESHOLDRANGEEVENT_H

@class NSString, NSNumber, NSSet, NSUUID;
@protocol NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver, OS_dispatch_queue;


#import "HMDCharacteristicEventBase.h"

@interface HMDCharacteristicThresholdRangeEvent : HMDCharacteristicEventBase <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *max; // ivar: _max
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) NSNumber *min; // ivar: _min
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_evaluateNewValue:(id)arg0 ;
-(BOOL)_isValueInRange:(id)arg0 ;
-(BOOL)isCompatibleWithEvent:(id)arg0 ;
-(id)analyticsTriggerEventData;
-(id)createPayload;
-(id)emptyModelObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(void)_handleUpdateRequest:(id)arg0 ;
-(void)_transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif