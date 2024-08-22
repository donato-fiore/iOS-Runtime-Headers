// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAHANDLEFAMILYEVENTPUSHNOTIFICATIONREQUEST_H
#define FAHANDLEFAMILYEVENTPUSHNOTIFICATIONREQUEST_H

@class NSDictionary;


#import "FAFamilyCircleRequest.h"

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest

@property (readonly) NSDictionary *payload; // ivar: _payload


-(id)initWithPayload:(id)arg0 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif