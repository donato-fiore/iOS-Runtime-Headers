// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFAUDIOPOWERUPDATER_H
#define AFAUDIOPOWERUPDATER_H

@protocol OS_dispatch_queue, OS_dispatch_source, AFAudioPowerUpdaterDelegate, AFAudioPowerProviding;

#import <Foundation/Foundation.h>


@interface AFAudioPowerUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id<AFAudioPowerUpdaterDelegate> *_delegate;
    *void _sharedMemory;
    float _averagePower;
    float _peakPower;
}


@property (readonly, nonatomic) NSInteger frequency; // ivar: _frequency
@property (readonly, nonatomic) NSObject<AFAudioPowerProviding> *provider; // ivar: _provider


-(BOOL)_createSharedMemory;
-(float)_unsafeAveragePower;
-(float)_unsafePeakPower;
-(id)_createNewXPCWrapper;
-(id)_createSharedMemoryXPCObject;
-(id)initWithProvider:(id)arg0 queue:(id)arg1 frequency:(NSInteger)arg2 delegate:(id)arg3 ;
-(void)_beginUpdate;
-(void)_createNewXPCWrapperWithCompletion:(id)arg0 ;
-(void)_destroySharedMemory;
-(void)_endUpdate;
-(void)_getPowerWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_timerFired;
-(void)_updatePowerWithAveragePower:(float)arg0 andPeakPower:(float)arg1 ;
-(void)_writeSharedMemoryWithAveragePower:(float)arg0 peakPower:(float)arg1 ;
-(void)beginUpdate;
-(void)createNewXPCWrapperWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)endUpdate;
-(void)getPowerWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif