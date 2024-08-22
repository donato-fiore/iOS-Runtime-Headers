// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHARACTERISTICRESPONSENOTIFICATIONCONTEXT_H
#define HMDCHARACTERISTICRESPONSENOTIFICATIONCONTEXT_H

@class HMFObject, NSSet, NSDictionary, NSUUID;



@interface HMDCharacteristicResponseNotificationContext : HMFObject

@property (readonly, copy) NSSet *changedCharacteristics; // ivar: _changedCharacteristics
@property (readonly, copy) NSDictionary *notificationPayloadByAccessoryUUID; // ivar: _notificationPayloadByAccessoryUUID
@property (readonly, getter=hasPendingMultiPartResponses) BOOL pendingMultiPartResponses; // ivar: _pendingMultiPartResponses
@property (readonly, copy) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy) NSSet *responseCharacteristics; // ivar: _responseCharacteristics


+(id)notificationUpdateMessagePayloadForHome:(id)arg0 notificationEnabled:(BOOL)arg1 characteristics:(id)arg2 characteristicsErrorsMap:(id)arg3 ;
+(id)responsePayloadForHome:(id)arg0 changedAccessories:(id)arg1 moreMessagesInMultipart:(id)arg2 ;
+(id)updateMultipleCharacteristicReadWriteResponsePayload:(id)arg0 withUnhandledRequests:(id)arg1 ;
-(id)attributeDescriptions;
-(id)initWithRequestIdentifier:(id)arg0 responses:(id)arg1 pendingMultiPartResponses:(BOOL)arg2 ;
-(id)notificationWithHome:(id)arg0 ;


@end


#endif