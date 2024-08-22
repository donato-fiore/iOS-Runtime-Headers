// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOPOWERSPECTRUMMANAGER_H
#define VCAUDIOPOWERSPECTRUMMANAGER_H

@class NSString, NSMutableArray, NSMutableDictionary;
@protocol VCAudioPowerSpectrumMeterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"

@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate>

 {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *meters; // ivar: _meters
@property (readonly, nonatomic) NSMutableDictionary *sources; // ivar: _sources
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)audioPowerSpectrumMeter:(id)arg0 didUpdateAudioPowerSpectrums:(id)arg1 ;
-(void)dealloc;
-(void)deregisterBlocksForService;
-(void)registerAudioPowerMeterSource:(id)arg0 ;
-(void)registerBlocksForService;
-(void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg0 ;


@end


#endif