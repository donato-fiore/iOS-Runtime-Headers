// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMNETWORKCONNECTION_H
#define _HMNETWORKCONNECTION_H

@class NSString;
@protocol _HMNetworkConnection, OS_nw_connection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _HMNetworkConnection : NSObject <_HMNetworkConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *nwConnection; // ivar: _nwConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 ;
-(void)cancel;
-(void)receiveMessageWithCompletion:(id)arg0 ;
-(void)sendData:(id)arg0 context:(id)arg1 isComplete:(BOOL)arg2 completion:(id)arg3 ;
-(void)setPathChangedHandler:(id)arg0 ;
-(void)setStateChangedHandler:(id)arg0 ;
-(void)setViabilityChangedHandler:(id)arg0 ;
-(void)start;


@end


#endif