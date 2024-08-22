// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXAVMEDIAMETADATAREADER_H
#define JFXAVMEDIAMETADATAREADER_H

@class AVAssetReaderOutputMetadataAdaptor, AVMetadataItem, NSString, NSError;
@protocol JFXMediaMetadataReader;


#import "JFXAVMediaDataReader.h"

@interface JFXAVMediaMetaDataReader : JFXAVMediaDataReader <JFXMediaMetadataReader>



@property (retain, nonatomic) AVAssetReaderOutputMetadataAdaptor *assetReaderOutputMetadataAdaptor; // ivar: _assetReaderOutputMetadataAdaptor
@property (retain, nonatomic) AVMetadataItem *currentMetadataItem; // ivar: _currentMetadataItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) AVMetadataItem *nextMetadataItem; // ivar: _nextMetadataItem
@property (readonly, nonatomic) ? readableTimeRange;
@property (readonly, nonatomic) NSUInteger signPostID;
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;


-(BOOL)hasRemainingAvailableData;
-(BOOL)readAheadToTime:(struct ? )arg0 ;
-(id)createAssetReaderTrackOutput;
-(id)metadataForTime:(struct ? )arg0 ;
-(struct ? )startTimeOfCurrentData;
-(void)JFX_preloadData;
-(void)cancelReadingForReaderReset;
-(void)didUpdateReadingRange;
-(void)readAndDiscardRemainingAvailableData;


@end


#endif