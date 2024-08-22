// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVPUSHNOTIFICATIONREQUEST_H
#define SSVPUSHNOTIFICATIONREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"
#import "SSVPushNotificationParameters.h"

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SSVPushNotificationParameters *pushNotificationParameters; // ivar: _parameters
@property (readonly) Class superclass;


-(BOOL)start;
-(id)copyXPCEncoding;
-(id)initWithPushNotificationParameters:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif