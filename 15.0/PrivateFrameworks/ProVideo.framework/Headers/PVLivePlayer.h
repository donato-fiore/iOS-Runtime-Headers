// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVLIVEPLAYER_H
#define PVLIVEPLAYER_H

@class NSString;
@protocol PVLivePlayerDelegate;

#import <Foundation/Foundation.h>

#import "PVRenderer.h"
#import "PVLivePlayer.h"
#import "PVTaskTokenPool.h"
#import "PVColorSpace.h"
#import "PVLivePlayerRenderLink.h"
#import "PVLivePlayerThermalThrottlingPolicy.h"

@interface PVLivePlayer : NSObject {
    unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> _lock;
    map<unsigned int, id<PVLivePlayerSource>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, id<PVLivePlayerSource>>>> _sourceMap;
    PVRenderer *_renderer;
    id<PVLivePlayerDelegate> *_weakDelegate;
    uint8_t _queueSize;
    uint8_t _playerStatus;
    PVLivePlayer *_primaryPlayer;
    HGRef<HGRenderQueue> _playerQueue;
    unsigned int _playerQueueUnitCount;
    unsigned int _activeRenderLinkJobCount;
    ? _renderTime;
    ? _previousSignalTime;
    BOOL _previousSignalTimeValid;
    CGFloat _lastCompletedHostTime;
    uint8_t _frameCount;
    NSString *_name;
    uint8_t _parentCode;
    PVTaskTokenPool *_tokenPool;
    unique_ptr<PerfTimer, std::default_delete<PerfTimer>> _statLogTimer;
    unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> _perfStatsLock;
    unique_ptr<PVPerfStats, std::default_delete<PVPerfStats>> _perfStats;
    BOOL _trackStats;
}


@property (nonatomic) BOOL bypassRenderLink; // ivar: _bypassRenderLink
@property (nonatomic) BOOL lowerGCDPriority; // ivar: _lowerGCDPriority
@property (nonatomic) BOOL lowerGPUPriority; // ivar: _lowerGPUPriority
@property (retain, nonatomic) PVColorSpace *outputColorSpace;
@property (nonatomic) unsigned int queueSize;
@property (retain, nonatomic) PVLivePlayerRenderLink *renderLink; // ivar: _renderLink
@property (readonly, nonatomic) ? renderTime;
@property (readonly, nonatomic) int status;
@property (retain, nonatomic) PVLivePlayerThermalThrottlingPolicy *thermalThrottlingPolicy; // ivar: _thermalThrottlingPolicy


-(BOOL)_dropFrameForFullQueue;
-(BOOL)_dropFrameForSaturatedPrimaryPlayer;
-(BOOL)testOutOfOrderCompletion:(struct HGRef<PVRenderLinkJob> )arg0 ;
-(BOOL)throttledBypassRenderLink;
-(CGFloat)getWindowedFPS;
-(NSUInteger)getPackedFamilyCode:(unsigned int)arg0 ;
-(id)getTaskToken;
-(id)initWithOptions:(id)arg0 delegate:(id)arg1 ;
-(id)playerSources;
-(id)readSourceFrameSets:(CGFloat)arg0 ;
-(unsigned int)_throttledQueueSize_NoLock;
-(void)_notifyDelegateOfDroppedFrame:(int)arg0 ;
-(void)_renderLinkSignal:(struct ? )arg0 ;
-(void)_statsLogCheck;
-(void)addStats:(*void)arg0 ;
-(void)bypassRenderLink:(struct HGRef<PVRenderLinkJob> )arg0 ;
-(void)dealloc;
-(void)flush;
-(void)handleRenderLinkJob:(struct HGRef<PVRenderLinkJob> )arg0 ;
-(void)printAndClearStats:(BOOL)arg0 ;
-(void)renderLinkJobFinished:(struct HGRef<PVRenderLinkJob> )arg0 ;
-(void)renderLinkSignal:(struct ? )arg0 ;
-(void)setName:(id)arg0 ;
-(void)setParentCode:(unsigned int)arg0 ;
-(void)setPrimaryPlayer:(id)arg0 ;
-(void)setSource:(id)arg0 inputID:(unsigned int)arg1 ;
-(void)shutdown;
-(void)start;
-(void)stop;
-(void)trackStats:(BOOL)arg0 ;
-(void)updateRenderQueueUnits;


@end


#endif