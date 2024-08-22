// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPROXIMITYESTIMATOR_H
#define PRPROXIMITYESTIMATOR_H

@class NSMutableDictionary;
@protocol OS_os_log, OS_dispatch_queue, PRProximityEstimatorDelegate;

#import <Foundation/Foundation.h>


@interface PRProximityEstimator : NSObject {
    BOOL usingST;
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *devicesMonitered;
}


@property (readonly, weak) NSObject<PRProximityEstimatorDelegate> *delegate; // ivar: _delegate


-(BOOL)addRssiSample:(CGFloat)arg0 channel:(unsigned int)arg1 forPeer:(id)arg2 withError:(*id)arg3 ;
-(BOOL)startEstimatingProximityFor:(id)arg0 peerDeviceModel:(id)arg1 withError:(*id)arg2 ;
-(BOOL)stopEstimatingProximityFor:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)initSingleThresholdEstmatorWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)invokeDelegateBlock:(id)arg0 ;


@end


#endif