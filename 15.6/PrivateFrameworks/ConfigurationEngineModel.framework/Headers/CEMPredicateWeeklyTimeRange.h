// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMPREDICATEWEEKLYTIMERANGE_H
#define CEMPREDICATEWEEKLYTIMERANGE_H

@class NSString, NSNumber, NSArray;
@protocol CEMRegisteredTypeProtocol;


#import "CEMPredicateBase.h"

@interface CEMPredicateWeeklyTimeRange : CEMPredicateBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *payloadCalendarIdentifier; // ivar: _payloadCalendarIdentifier
@property (copy, nonatomic) NSNumber *payloadEndDay; // ivar: _payloadEndDay
@property (copy, nonatomic) NSString *payloadEndTime; // ivar: _payloadEndTime
@property (copy, nonatomic) NSArray *payloadNotificationTimes; // ivar: _payloadNotificationTimes
@property (copy, nonatomic) NSNumber *payloadStartDay; // ivar: _payloadStartDay
@property (copy, nonatomic) NSString *payloadStartTime; // ivar: _payloadStartTime
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithStartDay:(id)arg0 withStartTime:(id)arg1 withEndDay:(id)arg2 withEndTime:(id)arg3 ;
+(id)buildWithCalendarIdentifier:(id)arg0 withStartDay:(id)arg1 withStartTime:(id)arg2 withEndDay:(id)arg3 withEndTime:(id)arg4 withNotificationTimes:(id)arg5 ;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif