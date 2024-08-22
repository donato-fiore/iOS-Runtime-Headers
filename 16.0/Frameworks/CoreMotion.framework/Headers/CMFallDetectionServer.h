// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMFALLDETECTIONSERVER_H
#define CMFALLDETECTIONSERVER_H

@class NSXPCListener, NSMutableArray, NSString;
@protocol CMFallDetectionServerXPC, NSXPCListenerDelegate, CMFallDetectionServerDelegate;

#import <Foundation/Foundation.h>


@interface CMFallDetectionServer : NSObject <CMFallDetectionServerXPC, NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    os_unfair_lock_s _connectionsLock;
    NSMutableArray *_connections;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CMFallDetectionServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_addConnection:(id)arg0 ;
-(void)_removeConnection:(id)arg0 ;
-(void)appDidFinishProcessingEventWithDuration:(CGFloat)arg0 ;
-(void)appDidRequestFallDetectionPrompt;
-(void)clientDidStart;
-(void)dealloc;
-(void)didHideFallDetectionPromptForProcessID:(int)arg0 ;


@end


#endif