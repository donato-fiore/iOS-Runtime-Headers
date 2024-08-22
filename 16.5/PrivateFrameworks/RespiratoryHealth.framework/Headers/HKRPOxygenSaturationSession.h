// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKRPOXYGENSATURATIONSESSION_H
#define HKRPOXYGENSATURATIONSESSION_H

@class NSString, HKHealthStore, HKTaskServerProxyProvider;
@protocol _HKXPCExportable, HKRPOxygenSaturationSessionClientInterface, HKRPOxygenSaturationSessionDelegate;

#import <Foundation/Foundation.h>


@interface HKRPOxygenSaturationSession : NSObject <_HKXPCExportable, HKRPOxygenSaturationSessionClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKRPOxygenSaturationSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)abortWithCompletion:(id)arg0 ;
-(void)clientRemote_didEndWithReason:(NSInteger)arg0 saturation:(id)arg1 barometricPressure:(id)arg2 averageHeartRate:(id)arg3 averageHeartRateUUID:(id)arg4 error:(id)arg5 ;
-(void)clientRemote_didSendFeedback:(NSUInteger)arg0 ;
-(void)clientRemote_didStartWithStartTime:(CGFloat)arg0 expectedDuration:(CGFloat)arg1 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)startWithCompletion:(id)arg0 ;


@end


#endif