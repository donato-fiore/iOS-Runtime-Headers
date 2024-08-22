// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSPUSHHANDLER_H
#define IDSPUSHHANDLER_H

@class NSData, NSMutableSet, NSMapTable, NSRecursiveLock, APSConnection, NSString;
@protocol APSConnectionDelegate;

#import <Foundation/Foundation.h>


@interface IDSPushHandler : NSObject <APSConnectionDelegate>

 {
    NSData *_cachedPushToken;
    NSMutableSet *_topicsCache;
    NSMapTable *_handlerMap;
    NSRecursiveLock *_recursiveLock;
}


@property (retain, nonatomic) APSConnection *apsConnection; // ivar: _apsConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConnected;
@property (retain, nonatomic) NSString *namedDelegatePort; // ivar: _namedDelegatePort
@property (readonly, nonatomic) NSData *pushToken;
@property (nonatomic) BOOL shouldWaitToSetTopics; // ivar: _shouldWaitToSetTopics
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)sharedInstanceWithPortName:(id)arg0 ;
-(BOOL)_validateHandler:(id)arg0 withSelector:(SEL)arg1 topic:(id)arg2 command:(id)arg3 ;
-(id)_getValidPushHandlersWithSelector:(SEL)arg0 topic:(id)arg1 command:(id)arg2 ;
-(id)init;
-(id)initWithPort:(id)arg0 ;
-(struct __SecIdentity *)copyPushIdentity;
-(void)_recalculateTopicsCache;
-(void)_updateTopics;
-(void)addListener:(id)arg0 topics:(id)arg1 commands:(id)arg2 queue:(id)arg3 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg0 ;
-(void)configureAsMacNotificationCenterObserver:(id)arg0 withPushToWakeTopics:(id)arg1 ;
-(void)connection:(id)arg0 didChangeConnectedStatus:(BOOL)arg1 ;
-(void)connection:(id)arg0 didFailToSendOutgoingMessage:(id)arg1 error:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didSendOutgoingMessage:(id)arg1 ;
-(void)connectionDidReconnect:(id)arg0 ;
-(void)dealloc;
-(void)removeListener:(id)arg0 ;
-(void)setCommands:(id)arg0 forListener:(id)arg1 ;
-(void)setTopics:(id)arg0 forListener:(id)arg1 ;
-(void)writePushPayloadToDiskIfEnabled:(id)arg0 topic:(id)arg1 ;


@end


#endif