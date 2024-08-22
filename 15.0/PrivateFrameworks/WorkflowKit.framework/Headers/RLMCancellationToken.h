// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMCANCELLATIONTOKEN_H
#define RLMCANCELLATIONTOKEN_H



#import "RLMNotificationToken.h"
#import "RLMRealm.h"

@interface RLMCancellationToken : RLMNotificationToken {
    NotificationToken _token;
    RLMRealm *_realm;
}




-(id)initWithToken:(struct NotificationToken )arg0 realm:(id)arg1 ;
-(id)realm;
-(void)invalidate;
-(void)suppressNextNotification;


@end


#endif