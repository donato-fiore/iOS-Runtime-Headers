// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVHAPTICSERVER_H
#define AVHAPTICSERVER_H

@class NSXPCListener, NSXPCInterface, NSError, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface AVHapticServer : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    map<unsigned int, NSMutableArray<AVServerWrapper *> *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, NSMutableArray<AVServerWrapper *> *>>> _instanceMap;
    recursive_mutex _instanceMutex;
    NSXPCInterface *_cachedClientInterface;
    NSXPCInterface *_cachedServerInterface;
    map<int, std::bitset<255>, std::less<int>, std::allocator<std::pair<const int, std::bitset<255>>>> _processIndexMap;
    NSUInteger _audioPrewarmCount;
    NSUInteger _hapticsPrewarmCount;
    NSUInteger _audioRunningCount;
    NSUInteger _hapticsRunningCount;
    NSUInteger _runningChannelIDCount;
    NSUInteger _SSSClientID;
    NSError *_savedError;
    *PowerTimer _powerTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger initCount; // ivar: _initCount
@property (readonly) *void manager; // ivar: _manager
@property (readonly) Class superclass;


-(?)decrementRunningCountAndStopAudio:(?)arg0 stopHapticsentry;
-(?)doPrewarm;
-(?)doStartRunningcompletedBlock;
-(?)doStopPrewarm:(?)arg0 audiohaptics;
-(?)doStopRunning:(?)arg0 audiohaptics;
-(?)doStopRunningForInterrupt:(?)arg0 audiohaptics;
-(?)entryWithID;
-(?)incrementRunningCountForAudio:(?)arg0 hapticsentry;
-(BOOL)incrementInit:(*id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)setupSSSClient;
-(NSUInteger)addProcessEntry:(int)arg0 ;
-(NSUInteger)getChannelID;
-(id)init;
-(int)cancelPatternWithOptions:(struct __CFDictionary *)arg0 ;
-(int)loadSynthPreset;
-(int)playVibePattern:(struct __CFDictionary *)arg0 gain:(float)arg1 synchronizer:(struct SSPlayerSynchronizer *)arg2 flags:(unsigned int)arg3 atTime:(CGFloat)arg4 completionHandler:(id)arg5 ;
-(int)startPrewarm;
-(int)stopPrewarm;
-(void)HandleInterruptionForSessionID:(unsigned int)arg0 command:(unsigned int)arg1 dictionary:(struct __CFDictionary *)arg2 ;
-(void)addListener:(id)arg0 forAudioSessionID:(unsigned int)arg1 ;
-(void)checkRunningCountAndStopSynth;
-(void)cleanup;
-(void)dealloc;
-(void)decrementInit;
-(void)decrementPrewarmCountAndStopAudio:(BOOL)arg0 stopHaptics:(BOOL)arg1 ;
-(void)displayRunningProcessEntriesWithOnTime:(NSUInteger)arg0 ;
-(void)doReleaseClientResources:(struct shared_ptr<ClientEntry> )arg0 ;
-(void)dumpProcessEntries:(struct __sFILE *)arg0 ;
-(void)incrementChannelID;
-(void)incrementPrewarmCountForAudio:(BOOL)arg0 haptics:(BOOL)arg1 ;
-(void)removeListener:(id)arg0 withAudioSessionID:(unsigned int)arg1 ;
-(void)removeProcessEntry:(NSUInteger)arg0 ;


@end


#endif