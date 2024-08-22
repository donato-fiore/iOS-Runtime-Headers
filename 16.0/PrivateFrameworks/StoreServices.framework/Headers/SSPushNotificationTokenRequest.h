// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPUSHNOTIFICATIONTOKENREQUEST_H
#define SSPUSHNOTIFICATIONTOKENREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSPushNotificationTokenRequest : SSRequest <SSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletion:(id)arg0 ;


@end


#endif