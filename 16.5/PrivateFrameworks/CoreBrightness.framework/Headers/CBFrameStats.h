// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBFRAMESTATS_H
#define CBFRAMESTATS_H

@class CAWindowServerDisplay, NSMutableArray;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface CBFrameStats : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CAWindowServerDisplay *_windowServerDisplay;
    vector<float, std::allocator<float>> _rtplcFrameDelayedNitsTable;
    vector<float, std::allocator<float>> _rtplcFrameDelayedAPCETable;
    PeakAPCE _peakAPCE;
    RTPLCCapApplied _rtplcCapApplied;
    float _previousFramePresentationTime;
    NSObject<OS_os_log> *_logHandle;
    NSMutableArray *_frameArray;
    float _lastFrameAPCE;
}


@property CGFloat movingAverageDuration; // ivar: _movingAverageDuration
@property (readonly) float scaleFactor; // ivar: _scaleFactor


-(BOOL)shouldPop;
-(float)getMovingAverage;
-(float)getPeakAPCE;
-(float)getPeakAPCECap;
-(id)initWithQueue:(id)arg0 ;
-(void)dealloc;
-(void)enableFrameInfoLogging:(BOOL)arg0 ;
-(void)initialiseWindowServerDisplay;
-(void)processFrameInfo:(struct ? )arg0 ;
-(void)startMonitoring:(id)arg0 ;
-(void)stopMonitoring;


@end


#endif