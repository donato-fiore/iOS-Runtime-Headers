// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTTREMOTECALL_H
#define RTTREMOTECALL_H

@class NSMutableArray, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;


#import "RTTCall.h"

@interface RTTRemoteCall : RTTCall {
    NSMutableArray *_devices;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (retain, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (retain, nonatomic) RPCompanionLinkDevice *pairedCallDevice; // ivar: _pairedCallDevice


-(BOOL)isLocallyHosted;
-(id)initWithCall:(id)arg0 ;
-(id)responseForRequest:(id)arg0 options:(id)arg1 ;
-(void)addDevice:(id)arg0 ;
-(void)callDidReceiveText:(id)arg0 forUtterance:(id)arg1 ;
-(void)removeDevice:(id)arg0 ;
-(void)resetRapportClientAndInvalidate:(BOOL)arg0 ;
-(void)sendCallIDChallengeToDevice:(id)arg0 ;
-(void)sendCallIDChallengeToDeviceId:(id)arg0 ;
-(void)sendString:(id)arg0 ;
-(void)setupRapportClient;
-(void)start;
-(void)stop;
-(void)updateCallWithRemoteFailure;


@end


#endif