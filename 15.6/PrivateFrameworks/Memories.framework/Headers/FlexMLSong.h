// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLEXMLSONG_H
#define FLEXMLSONG_H

@class NSString, NSURL;


#import "FlexSongBackend.h"
#import "FlexMLSummaryManager.h"

@interface FlexMLSong : FlexSongBackend

@property (retain, nonatomic) NSString *audioFileExtension; // ivar: _audioFileExtension
@property (readonly, nonatomic) NSURL *audioFileURL; // ivar: _audioFileURL
@property (nonatomic) ? cachedNaturalDuration; // ivar: _cachedNaturalDuration
@property (readonly, nonatomic) NSString *metadataPath; // ivar: _metadataPath
@property (readonly, nonatomic) NSString *rootPath; // ivar: _rootPath
@property (retain, nonatomic) FlexMLSummaryManager *summaryManager; // ivar: _summaryManager


+(id)loadSongAtPath:(id)arg0 ;
-(BOOL)canPlay;
-(BOOL)isLoaded;
-(BOOL)verifyRendition:(id)arg0 forDuration:(struct ? )arg1 failureReason:(*id)arg2 ;
-(id)idealDurations;
-(id)initWithFileAtPath:(id)arg0 ;
-(id)renditionForDuration:(struct ? )arg0 withOptions:(id)arg1 testingContext:(id)arg2 ;
-(id)timedMetadataItemsWithIdentifier:(id)arg0 forRendition:(id)arg1 ;
-(struct ? )minimumDuration;
-(struct ? )naturalDuration;
-(void)_setupInitialAssets:(id)arg0 ;
-(void)updateAssets:(id)arg0 ;


@end


#endif