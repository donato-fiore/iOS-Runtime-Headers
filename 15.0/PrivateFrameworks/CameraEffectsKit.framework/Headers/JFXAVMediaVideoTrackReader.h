// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXAVMEDIAVIDEOTRACKREADER_H
#define JFXAVMEDIAVIDEOTRACKREADER_H

@class NSString, NSError;
@protocol JFXMediaVideoTrackReader;


#import "JFXAVMediaDataReader.h"
#import "JFXAVMediaVideoTrackReaderSample.h"

@interface JFXAVMediaVideoTrackReader : JFXAVMediaDataReader <JFXMediaVideoTrackReader>



@property (retain, nonatomic) JFXAVMediaVideoTrackReaderSample *currentSample; // ivar: _currentSample
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) JFXAVMediaVideoTrackReaderSample *nextSample; // ivar: _nextSample
@property (readonly, nonatomic) ? readableTimeRange;
@property (readonly, nonatomic) NSUInteger signPostID;
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;


-(BOOL)hasRemainingAvailableData;
-(BOOL)readAheadToTime:(struct ? )arg0 ;
-(id)createAssetReaderTrackOutput;
-(id)videoSampleForTime:(struct ? )arg0 ;
-(struct ? )startTimeOfCurrentData;
-(void)JFX_preloadData;
-(void)JFX_updateCurrentSampleDurationIfNeeded;
-(void)didUpdateReadingRange;
-(void)readAndDiscardRemainingAvailableData;


@end


#endif