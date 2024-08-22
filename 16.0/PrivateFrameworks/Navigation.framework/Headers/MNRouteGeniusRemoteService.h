// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNROUTEGENIUSREMOTESERVICE_H
#define MNROUTEGENIUSREMOTESERVICE_H

@class NSXPCConnection, NSString;
@protocol MNRouteGeniusDelegateProxy, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MNRouteGeniusRemoteService : NSObject <MNRouteGeniusDelegateProxy>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    id<MNRouteGeniusDelegateProxy> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_q_openConnectionIfNecessary;
-(id)initWithDelegate:(id)arg0 ;
-(void)_q_closeConnection;
-(void)dealloc;
-(void)didUpdateRouteGenius:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif