// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMSERVICECLIENT_H
#define VMSERVICECLIENT_H


#import <Foundation/Foundation.h>

#import "VMVoicemailManager.h"

@interface VMServiceClient : NSObject

@property (retain, nonatomic) VMVoicemailManager *voicemailManager; // ivar: _voicemailManager


+(id)sharedClient;
-(BOOL)sharedServiceIsSubscribed;
-(id)init;
-(id)sharedAccount;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)dealloc;
-(void)handleOnlineStatusChangedNotification:(id)arg0 ;
-(void)handleSubscriptionStatusChangedNotification:(id)arg0 ;
-(void)handleVoicemailsChangedNotification:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 object:(id)arg2 ;


@end


#endif