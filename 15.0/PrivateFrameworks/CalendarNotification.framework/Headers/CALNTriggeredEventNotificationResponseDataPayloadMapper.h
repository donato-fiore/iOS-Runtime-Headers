// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONRESPONSEDATAPAYLOADMAPPER_H
#define CALNTRIGGEREDEVENTNOTIFICATIONRESPONSEDATAPAYLOADMAPPER_H


#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationResponseDataPayloadMapper : NSObject



+(id)_hypothesisDataForNotificationData:(id)arg0 ;
+(id)_hypothesisFromPayload:(id)arg0 ;
+(id)_lastFireTimeOfAlertOffsetFromTravelTimeFromPayload:(id)arg0 ;
+(id)notificationResponseDataForPayload:(id)arg0 ;
+(id)payloadForNotificationResponseData:(id)arg0 ;
+(void)_setHypothesisDataFromNotificationData:(id)arg0 inPayload:(id)arg1 ;
+(void)_setLastFireTimeOfAlertOffsetFromTravelTimeFromNotificationData:(id)arg0 inPayload:(id)arg1 ;


@end


#endif