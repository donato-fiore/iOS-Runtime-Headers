// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDASSISTANTACCESSCONTROLMODIFIEDEVENT_H
#define HMDASSISTANTACCESSCONTROLMODIFIEDEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;



@interface HMDAssistantAccessControlModifiedEvent : HMMLogEvent <HMDAWDLogEvent>



@property (nonatomic) BOOL areActivityNotificationsEnabledForPersonalRequests; // ivar: _areActivityNotificationsEnabledForPersonalRequests
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) NSUInteger numCapableAccessories; // ivar: _numCapableAccessories
@property (nonatomic) NSUInteger numEnabledAccessories; // ivar: _numEnabledAccessories
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


+(id)eventWithIsEnabled:(BOOL)arg0 options:(NSUInteger)arg1 areActivityNotificationsEnabledForPersonalRequests:(BOOL)arg2 numEnabledAccessories:(NSUInteger)arg3 numCapableAccessories:(NSUInteger)arg4 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif