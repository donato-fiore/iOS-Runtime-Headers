// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IDSCONTINUITY_H
#define _IDSCONTINUITY_H

@class CUTWeakReference, NSString;
@protocol IDSDaemonListenerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol>

 {
    id *_delegateContext;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 delegateContext:(id)arg2 ;
-(void)_callDelegateWithBlock:(id)arg0 ;
-(void)_daemonDied:(id)arg0 ;
-(void)_handleReconnect;
-(void)continuityDidDiscoverType:(NSInteger)arg0 withData:(id)arg1 fromPeer:(id)arg2 ;
-(void)continuityDidFailToStartAdvertisingOfType:(NSInteger)arg0 withError:(id)arg1 ;
-(void)continuityDidFailToStartScanningForType:(NSInteger)arg0 withError:(id)arg1 ;
-(void)continuityDidLosePeer:(id)arg0 ;
-(void)continuityDidLosePeer:(id)arg0 forType:(NSInteger)arg1 ;
-(void)continuityDidStartAdvertisingOfType:(NSInteger)arg0 ;
-(void)continuityDidStartScanningForType:(NSInteger)arg0 ;
-(void)continuityDidStartTrackingPeer:(id)arg0 error:(id)arg1 ;
-(void)continuityDidStartTrackingPeer:(id)arg0 forType:(NSInteger)arg1 error:(id)arg2 ;
-(void)continuityDidStopAdvertisingOfType:(NSInteger)arg0 ;
-(void)continuityDidStopAdvertisingOfType:(NSInteger)arg0 withError:(id)arg1 ;
-(void)continuityDidStopScanningForType:(NSInteger)arg0 ;
-(void)continuityDidStopTrackingPeer:(id)arg0 ;
-(void)continuityDidStopTrackingPeer:(id)arg0 forType:(NSInteger)arg1 ;
-(void)continuityDidUpdateStateToState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)startAdvertisingOfType:(NSInteger)arg0 withData:(id)arg1 withOptions:(id)arg2 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 boostedScan:(BOOL)arg3 duplicates:(BOOL)arg4 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 peers:(id)arg3 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 peers:(id)arg3 boostedScan:(BOOL)arg4 duplicates:(BOOL)arg5 ;
-(void)startTrackingPeer:(id)arg0 forType:(NSInteger)arg1 ;
-(void)stopAdvertisingOfType:(NSInteger)arg0 ;
-(void)stopScanningForType:(NSInteger)arg0 ;
-(void)stopTrackingPeer:(id)arg0 forType:(NSInteger)arg1 ;


@end


#endif