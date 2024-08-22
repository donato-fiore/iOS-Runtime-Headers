// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMFALLDETECTIONCLIENT_H
#define CMFALLDETECTIONCLIENT_H

@class NSXPCConnection, NSString;
@protocol CMFallDetectionClientXPC, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMFallDetectionClient : NSObject <CMFallDetectionClientXPC>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CMFallDetectionClientXPC> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_invalidateInternal;
-(void)_setupConnection;
-(void)appDidFinishProcessingEventWithDuration:(CGFloat)arg0 ;
-(void)appDidRequestFallDetectionPrompt;
-(void)dealloc;
-(void)didHideFallDetectionPrompt;
-(void)didStartBackgroundSession;
-(void)invalidate;
-(void)reconnect;


@end


#endif