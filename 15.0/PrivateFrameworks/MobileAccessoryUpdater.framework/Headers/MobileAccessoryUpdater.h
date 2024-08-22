// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOBILEACCESSORYUPDATER_H
#define MOBILEACCESSORYUPDATER_H

@class NSString;
@protocol MobileAccessoryUpdaterDelegate, FudConnection, OS_dispatch_queue, OS_dispatch_queue_attr;

#import <Foundation/Foundation.h>


@interface MobileAccessoryUpdater : NSObject {
    id<MobileAccessoryUpdaterDelegate> *_delegate;
    id<FudConnection> *_connection;
    NSString *_bundleIdentifier;
    NSString *_clientIdentifier;
    char * _cClientIdentifier;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue_attr> *_attr;
    NSString *_activeFilter;
    BOOL _isInternalClient;
    BOOL _didUnregister;
}




-(BOOL)doesOperationCodeRequireFilter:(int)arg0 ;
-(BOOL)loadPluginWithAccessoryInfo:(id)arg0 options:(id)arg1 ;
-(BOOL)registerForIdentifier:(id)arg0 isGroupIdentifier:(BOOL)arg1 ;
-(BOOL)sendMessageForCommand:(int)arg0 withOptions:(id)arg1 requiresFilter:(BOOL)arg2 ;
-(BOOL)sendMessageForCommand:(int)arg0 withOptions:(id)arg1 requiresFilter:(BOOL)arg2 replyHandler:(id)arg3 ;
-(BOOL)setActiveDeviceClass:(id)arg0 ;
-(BOOL)setLastRemoteFindDate:(id)arg0 ;
-(char *)getActiveDeviceClassCString;
-(id)activeFilter;
-(id)bundleIdentifier;
-(id)clientIdentifier;
-(id)getActiveDeviceClass;
-(id)getPluginsList;
-(id)initWithDelegate:(id)arg0 isInternalClient:(BOOL)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithGroupIdentifer:(id)arg0 delegate:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithPluginIdentifier:(id)arg0 delegate:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithPluginIdentifier:(id)arg0 isGroupIdentifier:(BOOL)arg1 delegate:(id)arg2 isInternalClient:(BOOL)arg3 options:(id)arg4 error:(*id)arg5 ;
-(id)queryNextStep:(*id)arg0 ;
-(int)getOperationCodeFromName:(id)arg0 ;
-(void)createConnection;
-(void)dealloc;
-(void)doneWithOptions:(id)arg0 ;
-(void)handleAUNotificationEvent:(id)arg0 ;
-(void)handleInboundEvent:(id)arg0 ;
-(void)performNextStepWithOptions:(id)arg0 ;
-(void)performStep:(id)arg0 withOptions:(id)arg1 ;
-(void)unregister;


@end


#endif