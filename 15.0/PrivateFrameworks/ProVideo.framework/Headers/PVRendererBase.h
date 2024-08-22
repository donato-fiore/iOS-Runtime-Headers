// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVRENDERERBASE_H
#define PVRENDERERBASE_H

@class NSLock, NSString;

#import <Foundation/Foundation.h>

#import "PVVideoCompositingContext.h"

@interface PVRendererBase : NSObject {
    atomic<unsigned int> _frameCount;
    vector<HGRef<PVRenderJob>, std::allocator<HGRef<PVRenderJob>>> _inFlightRenderJobs;
    NSLock *_inFlightRenderJobsLock;
    *HGSynchronizable _perfStatsLock;
    *void _perfStats;
    BOOL _trackStats;
    BOOL _hasRendered;
}


@property (retain, nonatomic) PVVideoCompositingContext *compositingContext; // ivar: _compositingContext
@property (nonatomic) BOOL immediatelyCancelPendingRequests; // ivar: _immediatelyCancelPendingRequests
@property (retain, nonatomic) NSString *name; // ivar: _name


+(id)getEAGLShareGroup;
-(CGFloat)averageStat:(int)arg0 ;
-(CGFloat)getLastStat:(int)arg0 ;
-(CGFloat)numFrames;
-(CGFloat)windowedFPS;
-(NSUInteger)taskResidentSize;
-(id)description;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(struct HGRef<PVRenderJob> )startJobForDelegate:(id)arg0 time:(struct ? )arg1 playback:(BOOL)arg2 ;
-(unsigned int)frameCount;
-(void)_initOutputColorSpace:(id)arg0 ;
-(void)addFrameStats:(*void)arg0 ;
-(void)addRenderJobInFlight:(struct HGRef<PVRenderJob> )arg0 ;
-(void)cancelAllPendingRequests;
-(void)cleanupMemoryCaches;
-(void)dealloc;
-(void)didRecieveMemoryWarning:(id)arg0 ;
-(void)printAndClearStats;
-(void)printAndClearStats:(BOOL)arg0 ;
-(void)renderJobFinished:(struct HGRef<PVRenderJob> )arg0 ;
-(void)setOutputColorSpace:(id)arg0 ;
-(void)trackStats:(BOOL)arg0 ;
-(void)updateDestinationFormatForOutputColorSpace;


@end


#endif