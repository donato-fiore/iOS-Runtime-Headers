// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRGAMECONTROLLERDAEMONPROXY_H
#define MRGAMECONTROLLERDAEMONPROXY_H

@class NSXPCConnection, NSString;
@protocol GameControllerDaemonListener, GameControllerDaemon;

#import <Foundation/Foundation.h>

#import "MRGameControllerDelayedEvents.h"

@interface MRGameControllerDaemonProxy : NSObject <GameControllerDaemonListener>

 {
    NSXPCConnection *_connection;
    id<GameControllerDaemon> *_remote;
    MRGameControllerDelayedEvents *_delayedEvents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultGameControllerDaemonProxy;
-(BOOL)_delayEvent:(NSUInteger)arg0 setValue:(float)arg1 forElement:(int)arg2 withUpDelay:(CGFloat)arg3 ;
-(id)addEmulatedControllerWithProperties:(id)arg0 ;
-(void)_openConnection;
-(void)addController:(id)arg0 ;
-(void)controllerID:(NSUInteger)arg0 setArrayValueX:(float)arg1 y:(float)arg2 z:(float)arg3 w:(float)arg4 forElement:(int)arg5 ;
-(void)controllerID:(NSUInteger)arg0 setDigitizerX:(float)arg1 digitizerY:(float)arg2 withTimeStamp:(NSUInteger)arg3 touchDown:(BOOL)arg4 ;
-(void)controllerID:(NSUInteger)arg0 setValue:(float)arg1 forElement:(int)arg2 ;
-(void)controllerID:(NSUInteger)arg0 setValue:(float)arg1 forElement:(int)arg2 withUpDelay:(CGFloat)arg3 ;
-(void)controllerWithUDID:(NSUInteger)arg0 setData:(id)arg1 ;
-(void)controllerWithUDID:(NSUInteger)arg0 setValue:(float)arg1 forElement:(int)arg2 ;
-(void)microControllerWithDigitizerX:(float)arg0 withY:(float)arg1 withTimeStamp:(NSUInteger)arg2 touchDown:(BOOL)arg3 ;
-(void)microControllerWithUDID:(NSUInteger)arg0 setDigitizerX:(float)arg1 digitizerY:(float)arg2 withTimeStamp:(NSUInteger)arg3 touchDown:(BOOL)arg4 ;
-(void)removeController:(id)arg0 ;
-(void)removeEmulatedController:(id)arg0 ;
-(void)replyConnectedHosts:(id)arg0 ;


@end


#endif