// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCONNECTIONPAIR_H
#define CTCONNECTIONPAIR_H

@protocol OS_dispatch_queue, CTConnectionPairDelegate, OS_nw_connection, OS_nw_endpoint, OS_nw_parameters;

#import <Foundation/Foundation.h>


@interface CTConnectionPair : NSObject {
    BOOL fStarted;
    NSObject<OS_dispatch_queue> *fQueue;
    id<CTConnectionPairDelegate> *fDelegate;
    NSInteger fConnectionPairState;
    NSObject<OS_nw_connection> *fConnection1;
    NSObject<OS_nw_endpoint> *fEndpoint1;
    NSObject<OS_nw_parameters> *fParameters1;
    int fConnectionState1;
    NSObject<OS_nw_connection> *fConnection2;
    NSObject<OS_nw_endpoint> *fEndpoint2;
    NSObject<OS_nw_parameters> *fParameters2;
    int fConnectionState2;
}




-(BOOL)sendData:(id)arg0 usingConnection:(NSInteger)arg1 completion:(id)arg2 ;
-(BOOL)start;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 endpoint1:(id)arg2 parameters1:(id)arg3 endpoint2:(id)arg4 parameter2:(id)arg5 ;
-(void)connectionStateChanged:(int)arg0 connectionId:(NSInteger)arg1 ;
-(void)dealloc;
-(void)receiveData:(NSInteger)arg0 ;
-(void)updatePairState:(NSInteger)arg0 ;


@end


#endif