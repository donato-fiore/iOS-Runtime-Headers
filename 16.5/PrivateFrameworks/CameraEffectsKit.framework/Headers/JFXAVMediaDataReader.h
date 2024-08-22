// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXAVMEDIADATAREADER_H
#define JFXAVMEDIADATAREADER_H

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, NSString, NSError;
@protocol JFXMediaDataReader;

#import <Foundation/Foundation.h>


@interface JFXAVMediaDataReader : NSObject <JFXMediaDataReader>



@property (retain, nonatomic) AVAsset *asset; // ivar: _asset
@property (retain, nonatomic) AVAssetReader *assetReader; // ivar: _assetReader
@property (retain, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput; // ivar: _assetReaderTrackOutput
@property (retain, nonatomic) AVAssetTrack *assetTrack; // ivar: _assetTrack
@property (nonatomic) ? currentReadingRange; // ivar: _currentReadingRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (readonly, nonatomic) ? minimumFrameDuration; // ivar: _minimumFrameDuration
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) ? readableTimeRange; // ivar: _readableTimeRange
@property (nonatomic) NSUInteger signPostID; // ivar: _signPostID
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


-(BOOL)JFX_resetReaderFromTime:(struct ? )arg0 ;
-(BOOL)JFX_shouldResetReaderWhenSeekingFromStartTimeOfCurrentData:(struct ? )arg0 toTime:(struct ? )arg1 ;
-(BOOL)beginReading;
-(BOOL)beginReadingAtTime:(struct ? )arg0 ;
-(BOOL)beginReadingAtTimeRange:(struct ? )arg0 ;
-(BOOL)hasRemainingAvailableData;
-(BOOL)prepareAssetReaderForReading;
-(BOOL)readAheadToTime:(struct ? )arg0 ;
-(BOOL)seekToTime:(struct ? )arg0 ;
-(BOOL)seekingAheadIsExpensiveFromTime:(struct ? )arg0 toTime:(struct ? )arg1 ;
-(id)createAssetReader;
-(id)createAssetReaderTrackOutput;
-(id)initWithAVAssetTrack:(id)arg0 withName:(id)arg1 ;
-(struct ? )JFX_allMediaTimeRange;
-(struct ? )startTimeOfCurrentData;
-(void)JFX_configureAssetReaderToReadFromTime:(struct ? )arg0 ;
-(void)JFX_configureAssetReaderTrackOutput;
-(void)JFX_releaseReadersForReset;
-(void)JFX_resetReaderIfNecessaryToSeekFromStartTimeOfCurrentData:(struct ? )arg0 toTime:(struct ? )arg1 ;
-(void)JFX_resetReadingRangeWhenScrubbingToTime:(struct ? )arg0 ;
-(void)cancelReadingForReaderReset;
-(void)didFailWithError:(id)arg0 ;
-(void)didUpdateReadingRange;
-(void)readAndDiscardRemainingAvailableData;


@end


#endif