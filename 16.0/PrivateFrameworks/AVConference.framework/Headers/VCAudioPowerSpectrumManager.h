// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOPOWERSPECTRUMMANAGER_H
#define VCAUDIOPOWERSPECTRUMMANAGER_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol VCAudioPowerSpectrumMeterDelegate, VCServerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"
#import "VCCellularAudioTap.h"

@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate, VCServerDelegate>

 {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableDictionary *_cellularTapTypeToStreamTokenMap;
    NSMutableDictionary *_powerSpectrumMetersForCellularTapType;
    VCCellularAudioTap *_cellularAudioTap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *meters; // ivar: _meters
@property (readonly, nonatomic) NSMutableDictionary *sources; // ivar: _sources
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)registerListenerWithCellularTapType:(id)arg0 clientProcessId:(id)arg1 powerSpectrumMeter:(id)arg2 powerSpectrumMeterKey:(id)arg3 error:(*id)arg4 ;
-(BOOL)registerListenerWithStreamToken:(id)arg0 powerSpectrumKey:(id)arg1 powerSpectrumMeter:(id)arg2 error:(*id)arg3 ;
-(BOOL)unregisterListenerWithCellularTapType:(id)arg0 powerSpectrumMeter:(id)arg1 error:(*id)arg2 ;
-(BOOL)unregisterListenerWithStreamToken:(id)arg0 powerSpectrumMeter:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)newPowerSpectrumMeterWithBinCount:(unsigned short)arg0 refreshRate:(CGFloat)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)powerSpectrumMetersForCellularTapType:(id)arg0 ;
-(id)registerStreamTokenForCellularTapType:(id)arg0 clientProcessId:(int)arg1 error:(*id)arg2 ;
-(id)serviceHandlerPowerMeterInitializeWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)serviceHandlerPowerMeterTerminateWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)serviceHandlerRegisterCellularTapWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)serviceHandlerRegisterListenerWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)serviceHandlerUnregisterCellularTagWithArguments:(id)arg0 error:(*id)arg1 ;
-(id)serviceHandlerUnregisterListenerWithArguments:(id)arg0 error:(*id)arg1 ;
-(void)audioPowerSpectrumMeter:(id)arg0 didUpdateAudioPowerSpectrums:(id)arg1 ;
-(void)cleanupPowerSpectrumSetForCellularTapType:(id)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)didServerDie;
-(void)registerAudioPowerMeterSource:(id)arg0 ;
-(void)registerBlocksForService;
-(void)terminatePowerSpectrumMeter:(id)arg0 ;
-(void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg0 ;


@end


#endif