// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPACTIVITYSESSION_H
#define CPACTIVITYSESSION_H

@class NSUUID, TUConversationActivity, NSString, NSXPCListenerEndpoint, TUConversationActivitySession;
@protocol CPLaunchableActivitySession, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface CPActivitySession : NSObject <CPLaunchableActivitySession, NSXPCListenerDelegate>

 {
    ? id;
    ? activityInterval;
    ? terminatingHandle;
    ? isFirstJoin;
    ? persistentSceneIdentifier;
    ? audioSessionID;
    ? domainAssertion;
    ? distributionCount;
    ? applicationState;
    ? _state;
    ? queue;
    ? isLocallyInitiated;
    ? isLightweightPrimaryInitiated;
    ? isUsingAirplay;
    ? timestamp;
    ? activeParticipantsUpdateItem;
    ? activeParticipants;
    ? sessionManager;
    ? listener;
    ? notificationCenter;
    ? connection;
}


@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) TUConversationActivity *activity;
@property (nonatomic, retain) TUConversationActivity *activity; // ivar: activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint; // ivar: endpoint
@property (readonly) NSUInteger hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TUConversationActivitySession *tuConversationActivitySession;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)associateSceneWithPersistentIdentifier:(id)arg0 ;
-(void)associateSceneWithSceneID:(id)arg0 ;
-(void)dealloc;
-(void)permitJoin;


@end


#endif