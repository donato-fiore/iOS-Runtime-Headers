// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAUDIOPOWERSPECTRUMMETER_H
#define AVCAUDIOPOWERSPECTRUMMETER_H

@class NSSet;
@protocol AVCAudioPowerSpectrumMeterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface AVCAudioPowerSpectrumMeter : NSObject {
    AVConferenceXPCClient *_connection;
    CGFloat _audioSpectrumRefreshRate;
    unsigned short _audioSpectrumBinCount;
    NSSet *_allowListedXPCObjects;
}


@property (readonly, nonatomic) NSObject<AVCAudioPowerSpectrumMeterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) unsigned int sessionToken; // ivar: _sessionToken


-(id)initWithConfig:(struct _AVCAudioPowerSpectrumMeterConfig )arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)registerBlocksForNotifications;
-(void)registerPowerSpectrumForStreamToken:(NSInteger)arg0 ;
-(void)unregisterPowerSpectrumForStreamToken:(NSInteger)arg0 ;


@end


#endif