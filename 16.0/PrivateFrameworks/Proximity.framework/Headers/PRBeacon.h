// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRBEACON_H
#define PRBEACON_H

@class NSString;
@protocol PRRangingClientProtocol, PRBeaconDelegate, OS_dispatch_queue;


#import "PRRangingDevice.h"

@interface PRBeacon : PRRangingDevice <PRRangingClientProtocol>

 {
    DaemonBackedService _service;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRBeaconDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_updateState:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deamonConnectionInterrupted;
-(void)deamonConnectionInvalidated;
-(void)didFailWithError:(id)arg0 ;
-(void)didReceiveNewSolutions:(id)arg0 ;
-(void)rangingRequestDidUpdateStatus:(NSUInteger)arg0 ;
-(void)rangingServiceDidUpdateState:(NSUInteger)arg0 cause:(NSInteger)arg1 ;
-(void)startBeaconingWithOptions:(id)arg0 ;
-(void)stopBeaconing;


@end


#endif