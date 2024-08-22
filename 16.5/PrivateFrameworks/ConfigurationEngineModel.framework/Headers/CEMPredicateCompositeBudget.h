// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMPREDICATECOMPOSITEBUDGET_H
#define CEMPREDICATECOMPOSITEBUDGET_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMPredicateBase.h"
#import "CEMPredicateCompositeBudget_Monitors.h"

@interface CEMPredicateCompositeBudget : CEMPredicateBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadCalendarIdentifier; // ivar: _payloadCalendarIdentifier
@property (copy, nonatomic) CEMPredicateCompositeBudget_Monitors *payloadMonitors; // ivar: _payloadMonitors
@property (copy, nonatomic) NSArray *payloadNotificationTimes; // ivar: _payloadNotificationTimes
@property (copy, nonatomic) NSArray *payloadTimeBudget; // ivar: _payloadTimeBudget
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithMonitors:(id)arg0 withTimeBudget:(id)arg1 ;
+(id)buildWithCalendarIdentifier:(id)arg0 withMonitors:(id)arg1 withNotificationTimes:(id)arg2 withTimeBudget:(id)arg3 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif