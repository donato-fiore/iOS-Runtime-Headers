// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCOREP33_0305B71F931612257040B50ABDE1CB866CLIENT_H
#define _TTC11SESSIONCOREP33_0305B71F931612257040B50ABDE1CB866CLIENT_H

@protocol ACActivityOutputXPCServer;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCoreP33_0305B71F931612257040B50ABDE1CB866Client : NSObject <ACActivityOutputXPCServer>

 {
    ? _target;
    ? processIdentifier;
    ? hasActivityListenerEntitlement;
    ? processManager;
    ? lock;
    ? delegate;
    ? _lock_subscriptionOptions;
    ? _lock_pendingChangeAck;
    ? _lock_bufferedChanges;
}




-(id)activityDescriptorContentStatesWithError:(*id)arg0 ;
-(id)activityDescriptorForIdentifier:(id)arg0 ;
-(id)activityDescriptorsWithError:(*id)arg0 ;
-(id)init;
-(id)subscribeWithOptions:(id)arg0 error:(*id)arg1 ;
-(void)unsubscribe;


@end


#endif