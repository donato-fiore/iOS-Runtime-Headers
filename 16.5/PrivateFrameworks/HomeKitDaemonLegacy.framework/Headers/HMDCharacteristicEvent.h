// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHARACTERISTICEVENT_H
#define HMDCHARACTERISTICEVENT_H

@protocol NSSecureCoding;


#import "HMDCharacteristicEventBase.h"

@interface HMDCharacteristicEvent : HMDCharacteristicEventBase <NSSecureCoding>



@property (retain, nonatomic) id *eventValue; // ivar: _eventValue


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_compareEventValue:(id)arg0 ;
-(BOOL)_evaluateNewValue:(id)arg0 ;
-(BOOL)isCompatibleWithEvent:(id)arg0 ;
-(id)analyticsTriggerEventData;
-(id)createPayload;
-(id)description;
-(id)dumpState;
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