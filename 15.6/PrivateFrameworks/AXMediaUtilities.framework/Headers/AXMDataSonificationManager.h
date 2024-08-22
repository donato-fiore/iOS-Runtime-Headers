// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMDATASONIFICATIONMANAGER_H
#define AXMDATASONIFICATIONMANAGER_H

@class NSString, NSTimer, NSArray;
@protocol AXMDataSonifierPlaybackObserver, AXMDataSummaryCategoryNameProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXMChartDescriptor.h"
#import "AXMDataSummary.h"

@interface AXMDataSonificationManager : NSObject <AXMDataSonifierPlaybackObserver, AXMDataSummaryCategoryNameProvider>

 {
    NSObject<OS_dispatch_queue> *_dataSonifierAccessQueue;
}


@property (retain, nonatomic) AXMChartDescriptor *currentChartDescriptor; // ivar: _currentChartDescriptor
@property (readonly, nonatomic) CGFloat currentPlaybackPosition;
@property (nonatomic) NSInteger currentSeriesIndex;
@property (retain, nonatomic) AXMDataSummary *dataSeriesSummary; // ivar: _dataSeriesSummary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hapticsEnabled; // ivar: _hapticsEnabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDataSeriesRegressionModelLoaded; // ivar: _isDataSeriesRegressionModelLoaded
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isScrubbing;
@property (nonatomic) CGFloat lastPlayheadPosition; // ivar: _lastPlayheadPosition
@property (nonatomic) CGFloat lastScrubbingValueAnnouncementPosition; // ivar: _lastScrubbingValueAnnouncementPosition
@property (readonly, nonatomic) NSUInteger playbackStatus;
@property (retain, nonatomic) NSTimer *scrubbingValueAnnouncementTimer; // ivar: _scrubbingValueAnnouncementTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *xCategoryLabels; // ivar: _xCategoryLabels
@property (readonly, nonatomic) NSArray *xGridlinePositions; // ivar: _xGridlinePositions


+(id)sharedManager;
-(id)categoryNameForXAxisPosition:(CGFloat)arg0 ;
-(id)init;
-(id)valueDescriptionForPlayheadPosition;
-(void)announceValueForPlayheadPosition;
-(void)beginLiveModeSession;
-(void)beginScrubbingSession;
-(void)endLiveModeSession;
-(void)endScrubbingSession;
-(void)pause;
-(void)play;
-(void)scrubToPosition:(CGFloat)arg0 ;
-(void)setLiveModeValue:(CGFloat)arg0 ;
-(void)stopPlaying;
-(void)stopSpeaking;


@end


#endif