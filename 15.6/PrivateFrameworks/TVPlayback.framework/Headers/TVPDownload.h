// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPDOWNLOAD_H
#define TVPDOWNLOAD_H

@class NSString, NSPointerArray, NSProgress, AVAggregateAssetDownloadTask, NSError, NSMapTable, NSNumber, NSArray, NSData, NSDictionary;
@protocol AVAssetDownloadDelegate, TVPMediaItem;

#import <Foundation/Foundation.h>

#import "TVPDownloadSession.h"
#import "TVPMediaItemLoader.h"
#import "TVPReportingSession.h"
#import "TVPStateMachine.h"

@interface TVPDownload : NSObject <AVAssetDownloadDelegate>



@property (nonatomic) BOOL allowCellularUsage; // ivar: _allowCellularUsage
@property (nonatomic) BOOL allowHDR; // ivar: _allowHDR
@property (nonatomic) BOOL allowMultichannelAudio; // ivar: _allowMultichannelAudio
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPointerArray *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger downloadInitiationBackgroundTask; // ivar: _downloadInitiationBackgroundTask
@property (nonatomic) BOOL downloadIsComplete; // ivar: _downloadIsComplete
@property (retain, nonatomic) NSProgress *downloadProgress; // ivar: _downloadProgress
@property (weak, nonatomic) TVPDownloadSession *downloadSession; // ivar: _downloadSession
@property (retain, nonatomic) AVAggregateAssetDownloadTask *downloadTask; // ivar: _downloadTask
@property (nonatomic) NSUInteger downloadTerminationBackgroundTask; // ivar: _downloadTerminationBackgroundTask
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeDefaultAudioOption; // ivar: _includeDefaultAudioOption
@property (nonatomic) BOOL includeDeviceLanguageAudio; // ivar: _includeDeviceLanguageAudio
@property (nonatomic) BOOL includeOriginalAudio; // ivar: _includeOriginalAudio
@property (nonatomic) BOOL includesAllSubtitles; // ivar: _includesAllSubtitles
@property (nonatomic) BOOL limitMultichannelAudioToSingleLanguage; // ivar: _limitMultichannelAudioToSingleLanguage
@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem; // ivar: _mediaItem
@property (retain, nonatomic) TVPMediaItemLoader *mediaItemLoader; // ivar: _mediaItemLoader
@property (retain, nonatomic) NSMapTable *mediaSelectionToProgressMap; // ivar: _mediaSelectionToProgressMap
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrate; // ivar: _minimumRequiredMediaBitrate
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrateForHEVC; // ivar: _minimumRequiredMediaBitrateForHEVC
@property (retain, nonatomic) NSNumber *minimumRequiredMediaBitrateForMostCompatibleFormat; // ivar: _minimumRequiredMediaBitrateForMostCompatibleFormat
@property (nonatomic) CGSize minimumRequiredPresentationSize; // ivar: _minimumRequiredPresentationSize
@property (nonatomic) NSUInteger numAudioSelectionsToBeDownloaded; // ivar: _numAudioSelectionsToBeDownloaded
@property (nonatomic) NSUInteger numMediaSelectionsCompleted; // ivar: _numMediaSelectionsCompleted
@property (nonatomic) NSUInteger numSubtitleSelectionsToBeDownloaded; // ivar: _numSubtitleSelectionsToBeDownloaded
@property (nonatomic) BOOL performKeyFetchOnly; // ivar: _performKeyFetchOnly
@property (nonatomic) BOOL preferMostCompatibleRendition; // ivar: _preferMostCompatibleRendition
@property (retain, nonatomic) NSArray *preferredAudioLanguageCodes; // ivar: _preferredAudioLanguageCodes
@property (retain, nonatomic) NSArray *preferredSubtitleLanguageCodes; // ivar: _preferredSubtitleLanguageCodes
@property (readonly, nonatomic) CGFloat progress;
@property (retain, nonatomic) TVPReportingSession *reportingSession; // ivar: _reportingSession
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (retain, nonatomic) NSData *storageSettingsImageData; // ivar: _storageSettingsImageData
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(void)initialize;
-(id)_newProgressForMediaSelection:(id)arg0 ;
-(id)descriptionForState:(NSInteger)arg0 ;
-(id)initWithMediaItem:(id)arg0 downloadSession:(id)arg1 existingDownloadTask:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_addMediaSelectionOptionsIfNotAlreadyAdded:(id)arg0 toMediaSelections:(id)arg1 forMediaSelectionGroup:(id)arg2 baseMediaSelection:(id)arg3 ;
-(void)_mediaItemLoaderStateDidChangeTo:(id)arg0 ;
-(void)_registerStateMachineHandlers;
-(void)addDelegate:(id)arg0 ;
-(void)cancel;
-(void)failWithError:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)removeDelegate:(id)arg0 ;
-(void)start;


@end


#endif