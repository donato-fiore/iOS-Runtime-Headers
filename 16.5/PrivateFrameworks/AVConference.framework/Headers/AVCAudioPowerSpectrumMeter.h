// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAUDIOPOWERSPECTRUMMETER_H
#define AVCAUDIOPOWERSPECTRUMMETER_H

@class NSSet, NSString;
@protocol VCAudioPowerSpectrumMeterDelegate, AVCAudioPowerSpectrumMeterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"
#import "VCAudioPowerSpectrumMeter.h"

@interface AVCAudioPowerSpectrumMeter : NSObject <VCAudioPowerSpectrumMeterDelegate>

 {
    AVConferenceXPCClient *_connection;
    CGFloat _audioSpectrumRefreshRate;
    unsigned short _audioSpectrumBinCount;
    NSSet *_allowListedXPCObjects;
    VCAudioPowerSpectrumMeter *_powerSpectrumMeter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<AVCAudioPowerSpectrumMeterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int sessionToken; // ivar: _sessionToken
@property (readonly) Class superclass;


+(unsigned int)cellularTapTypeWithClientCellularTapType:(unsigned int)arg0 ;
-(BOOL)registerPowerSpectrumForCellularTapType:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)setupPowerSpectrumMeter;
-(BOOL)setupXPCConnection;
-(BOOL)storeDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(BOOL)unregisterPowerSpectrumForCellularTapType:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithConfig:(struct _AVCAudioPowerSpectrumMeterConfig )arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)audioPowerSpectrumMeter:(id)arg0 didUpdateAudioPowerSpectrums:(id)arg1 ;
-(void)cleanupDelegate;
-(void)cleanupPowerSpectrumMeter;
-(void)cleanupXPCConnection;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)registerBlocksForNotifications;
-(void)registerPowerSpectrumForStreamToken:(NSInteger)arg0 ;
-(void)unregisterPowerSpectrumForStreamToken:(NSInteger)arg0 ;


@end


#endif