// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWSERVICESESSIONMANAGER_H
#define _UIVIEWSERVICESESSIONMANAGER_H

@class NSXPCListener, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, _UIViewServiceSessionManagerDelegate;

#import <Foundation/Foundation.h>


@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate>

 {
    os_unfair_lock_s _lock;
    NSXPCListener *_listener;
    NSMutableArray *_sessions;
    int _connectionNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<_UIViewServiceSessionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)hasActiveSessions;
+(id)__serviceSessionManager;
+(void)startViewServiceSessionManagerAsPlugin:(BOOL)arg0 ;
+(void)startViewServiceSessionWithDelegate:(id)arg0 ;
-(BOOL)_hasActiveSessions;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_initAsPlugIn:(BOOL)arg0 ;
-(id)_initWithDelegate:(id)arg0 ;
-(id)init;
-(void)_configureSessionForConnection:(id)arg0 ;
-(void)_registerSessionForDefaultDeputies:(id)arg0 ;
-(void)_startListener;
-(void)_startListenerWithName:(id)arg0 ;
-(void)_startOrStopSystemsForBackgroundRunning;
-(void)dealloc;


@end


#endif