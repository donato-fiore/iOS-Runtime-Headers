// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRBEACONLISTENER_H
#define PRBEACONLISTENER_H

@class NSString;
@protocol PRRangingClientProtocol, PRBeaconListenerDelegate, OS_dispatch_queue;


#import "PRRangingDevice.h"

@interface PRBeaconListener : PRRangingDevice <PRRangingClientProtocol>

 {
    DaemonBackedService _service;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRBeaconListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_updateState:(NSUInteger)arg0 ;
-(void)clearBeaconAllowlistWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deamonConnectionInterrupted;
-(void)deamonConnectionInvalidated;
-(void)didFailWithError:(id)arg0 ;
-(void)didReceiveNewSolutions:(id)arg0 ;
-(void)pushBeaconAllowlist:(id)arg0 completionHandler:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(NSUInteger)arg0 ;
-(void)rangingServiceDidUpdateState:(NSUInteger)arg0 cause:(NSInteger)arg1 ;


@end


#endif