// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATDEVICESYNCMANAGER_H
#define ATDEVICESYNCMANAGER_H

@class NSMutableDictionary, NSString;
@protocol ATMessageLinkObserver, ATSessionObserver, ATMessageLinkRequestHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATDeviceSettings.h"

@interface ATDeviceSyncManager : NSObject <ATMessageLinkObserver, ATSessionObserver, ATMessageLinkRequestHandler>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activeSessionsForLinkIDAndDataClass;
    ATDeviceSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)deviceSyncManager;
-(id)_activeSessionsOnMessageLink:(id)arg0 ;
-(id)_initiateSyncForDataClass:(id)arg0 onMessageLink:(id)arg1 ;
-(id)_sessionForMessageLink:(id)arg0 dataClass:(id)arg1 ;
-(id)_sessionTaskForRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(id)_startSyncSessionForDataClass:(id)arg0 messageLink:(id)arg1 identifier:(id)arg2 ;
-(id)init;
-(id)initiateSyncForDataClass:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_cancelSyncForDataClass:(id)arg0 onMessageLink:(id)arg1 setSyncPending:(BOOL)arg2 ;
-(void)_handleBeginSyncSessionRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_handleEndSyncSessionRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_handleRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_removeSessionForMessageLink:(id)arg0 dataClass:(id)arg1 ;
-(void)_setSession:(id)arg0 forMessageLink:(id)arg1 dataClass:(id)arg2 ;
-(void)cancelSyncForDataClass:(id)arg0 onMessageLink:(id)arg1 ;
-(void)cancelSyncOnMessageLink:(id)arg0 ;
-(void)initiateSyncOnMessageLink:(id)arg0 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)messageLinkWasInitialized:(id)arg0 ;
-(void)messageLinkWasOpened:(id)arg0 ;
-(void)session:(id)arg0 didFinishSessionTask:(id)arg1 ;
-(void)session:(id)arg0 willBeginSessionTask:(id)arg1 ;
-(void)sessionDidFinish:(id)arg0 ;
-(void)sessionWillBegin:(id)arg0 ;


@end


#endif