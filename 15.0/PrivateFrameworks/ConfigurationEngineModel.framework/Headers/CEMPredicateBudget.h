// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMPREDICATEBUDGET_H
#define CEMPREDICATEBUDGET_H

@class NSString, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMPredicateBase.h"

@interface CEMPredicateBudget : CEMPredicateBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadCalendarIdentifier; // ivar: _payloadCalendarIdentifier
@property (copy, nonatomic) NSArray *payloadIdentifiers; // ivar: _payloadIdentifiers
@property (copy, nonatomic) NSArray *payloadIdentifiersVersion2; // ivar: _payloadIdentifiersVersion2
@property (copy, nonatomic) NSString *payloadMonitor; // ivar: _payloadMonitor
@property (copy, nonatomic) NSArray *payloadNotificationTimes; // ivar: _payloadNotificationTimes
@property (copy, nonatomic) NSArray *payloadTimeBudget; // ivar: _payloadTimeBudget
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithMonitor:(id)arg0 withTimeBudget:(id)arg1 ;
+(id)buildWithCalendarIdentifier:(id)arg0 withMonitor:(id)arg1 withIdentifiers:(id)arg2 withIdentifiersVersion2:(id)arg3 withNotificationTimes:(id)arg4 withTimeBudget:(id)arg5 ;
+(id)buildWithCalendarIdentifier:(id)arg0 withMonitor:(id)arg1 withIdentifiers:(id)arg2 withNotificationTimes:(id)arg3 withTimeBudget:(id)arg4 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif