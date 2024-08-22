// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLOCATIONEVENT_H
#define HMDLOCATIONEVENT_H

@class NSString, CLRegion, NSUUID;
@protocol HMDLocationDelegate, NSSecureCoding;


#import "HMDEvent.h"

@interface HMDLocationEvent : HMDEvent <HMDLocationDelegate, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLRegion *region; // ivar: _region
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CLRegion *uniqueRegion;
@property (retain, nonatomic) NSUUID *userUUID; // ivar: _userUUID


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_activate:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)doesThisTargetCurrentUser;
-(BOOL)isActive;
-(BOOL)isCompatibleWithEvent:(id)arg0 ;
-(id)analyticsTriggerEventData;
-(id)createPayload;
-(id)dumpState;
-(id)emptyModelObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 home:(id)arg1 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(void)_handleLocationEventOccured:(id)arg0 ;
-(void)_handleRetrieveLocationEventForEventTrigger:(id)arg0 ;
-(void)_handleUpdateRequest:(id)arg0 ;
-(void)_registerForMessages;
-(void)_transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)_transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)checkFMFStatus:(id)arg0 ;
-(void)didEnterRegion:(id)arg0 ;
-(void)didExitRegion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fmfStatusUpdateNotification:(id)arg0 ;
-(void)informLocationEventOccuranceToResident;
-(void)locationEventOccured;


@end


#endif