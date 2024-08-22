// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPACTIVITYSESSION_H
#define CPACTIVITYSESSION_H

@class TUConversationActivity, NSXPCListenerEndpoint, NSUUID, TUConversationActivitySession;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface CPActivitySession : NSObject <NSXPCListenerDelegate>

 {
    ? id;
    ? activityInterval;
    ? terminatingHandle;
    ? isFirstJoin;
    ? domainAssertion;
    ? state;
    ? queue;
    ? isLocallyInitiated;
    ? timestamp;
    ? activeParticipants;
    ? sessionManager;
    ? listener;
    ? notificationCenter;
    ? connection;
}


@property (nonatomic, retain) TUConversationActivity *activity; // ivar: activity
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint; // ivar: endpoint
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) TUConversationActivitySession *tuConversationActivitySession;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)permitJoin;


@end


#endif