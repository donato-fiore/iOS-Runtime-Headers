// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDRAGGINGSYSTEMMONITOR_H
#define UIDRAGGINGSYSTEMMONITOR_H

@class NSXPCListener, NSMapTable, NSString, NSSet;
@protocol NSXPCListenerDelegate, _DUIClientSystemApp, OS_dispatch_queue, UIDraggingSystemMonitorDelegate;

#import <Foundation/Foundation.h>


@interface UIDraggingSystemMonitor : NSObject <NSXPCListenerDelegate, _DUIClientSystemApp>

 {
    NSXPCListener *_systemListener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMapTable *_sessionsBySessionInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIDraggingSystemMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *sessions;
@property (readonly) Class superclass;


+(id)new;
+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)xpcQueue_shouldAcceptNewConnection:(id)arg0 ;
-(id)_init;
-(id)init;
-(id)sessionForDropSession:(id)arg0 ;
-(void)dragDidBeginWithSystemSession:(id)arg0 info:(id)arg1 reply:(id)arg2 ;
-(void)dragDidEndWithSystemSession:(id)arg0 ;
-(void)xpcQueue_acceptNewConnection:(id)arg0 ;


@end


#endif