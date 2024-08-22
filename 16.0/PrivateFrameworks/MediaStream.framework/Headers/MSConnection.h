// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCONNECTION_H
#define MSCONNECTION_H

@class NSXPCConnection, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSConnection : NSObject {
    NSXPCConnection *_center;
    NSMutableDictionary *_serverSideConfig;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
}




+(id)sharedConnection;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg0 personID:(id)arg1 outError:(*id)arg2 ;
-(BOOL)enqueueAssetCollections:(id)arg0 personID:(id)arg1 outError:(*id)arg2 ;
-(id)_machErrorWithUnderlyingError:(id)arg0 ;
-(id)init;
-(id)pause;
-(id)serverSideConfigurationForPersonID:(id)arg0 ;
-(void)_waitForMessageToBeSent;
-(void)abortActivitiesForPersonID:(id)arg0 ;
-(void)checkForOutstandingActivities;
-(void)dealloc;
-(void)deleteAssetCollections:(id)arg0 personID:(id)arg1 ;
-(void)forgetPersonID:(id)arg0 ;
-(void)handleSubscriptionPushForPersonID:(id)arg0 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg0 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg0 ;
-(void)resetServerStateForPersonID:(id)arg0 ;
-(void)resume:(id)arg0 ;


@end


#endif