// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTLESCANNER_H
#define BTLESCANNER_H

@class HMFObject, HMFTimer, CUBLEScanner, HAPBTLECentralManager, NSArray, NSString;
@protocol HMFTimerDelegate, HAPBTLECentralManagerDelegate, OS_dispatch_queue;


#import "HMDAccessoryQueues.h"

@interface BTLEScanner : HMFObject <HMFTimerDelegate, HAPBTLECentralManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_scanTimer;
    CUBLEScanner *_cubleScanner;
    HAPBTLECentralManager *_centralManager;
    HMDAccessoryQueues *_scanQueue;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(id)init;
-(void)_checkCanScan;
-(void)_flushQueue;
-(void)_stopScan;
-(void)_stopTimer;
-(void)didUpdateBTLEState:(NSInteger)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif