// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWUNITTESTPEARLDEVICE_H
#define AWUNITTESTPEARLDEVICE_H

@protocol AWUnitTestSampler, OS_dispatch_queue, BKDevicePearlDelegate;

#import <Foundation/Foundation.h>

#import "AWUnitTestFaceDetectOperation.h"

@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler>

 {
    ? _sampleStats;
    NSObject<OS_dispatch_queue> *_awQueue;
    AWUnitTestFaceDetectOperation *_lastOperation;
    id *_displayCallback;
    id *_smartCoverCallback;
}


@property (weak, nonatomic) NSObject<BKDevicePearlDelegate> *delegate; // ivar: _delegate
@property BOOL facePresent; // ivar: _facePresent
@property BOOL pearlError; // ivar: _pearlError
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property *? sampleStatsPtr; // ivar: _sampleStatsPtr


+(id)sharedDevice;
-(id)createPresenceDetectOperationWithError:(*id)arg0 ;
-(id)init;
-(void)deliverPearlDeviceEvent:(NSInteger)arg0 ;
-(void)deliverPearlDeviceState:(NSInteger)arg0 ;
-(void)getStatsWithBlock:(id)arg0 ;
-(void)resetStats;
-(void)setDisplayCallback:(id)arg0 ;
-(void)setDisplayState:(BOOL)arg0 ;
-(void)setDisplayState:(BOOL)arg0 reply:(id)arg1 ;
-(void)setSampleState:(BOOL)arg0 ;
-(void)setSampleState:(BOOL)arg0 deliverEvent:(BOOL)arg1 ;
-(void)setSampleState:(BOOL)arg0 deliverEvent:(BOOL)arg1 reply:(id)arg2 ;
-(void)setSampleState:(BOOL)arg0 reply:(id)arg1 ;
-(void)setSmartCoverCallback:(id)arg0 ;
-(void)setSmartCoverClosed:(BOOL)arg0 ;
-(void)setSmartCoverClosed:(BOOL)arg0 reply:(id)arg1 ;


@end


#endif