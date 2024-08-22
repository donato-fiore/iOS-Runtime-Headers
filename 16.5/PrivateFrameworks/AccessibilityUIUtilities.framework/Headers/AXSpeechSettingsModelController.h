// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSPEECHSETTINGSMODELCONTROLLER_H
#define AXSPEECHSETTINGSMODELCONTROLLER_H

@class AXAssetsService, AVAudioPlayer, AVAudioSession, NSString, NSMutableDictionary, AVSpeechSynthesizer;
@protocol TTSAXResourceManagerObserver;

#import <Foundation/Foundation.h>


@interface AXSpeechSettingsModelController : NSObject <TTSAXResourceManagerObserver>



@property (retain, nonatomic) AXAssetsService *assetsService; // ivar: _assetsService
@property (retain, nonatomic) AVAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (retain, nonatomic) AVAudioSession *audioSessionForSamplePlayback; // ivar: _audioSessionForSamplePlayback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *downloadProgessByVoiceID; // ivar: _downloadProgessByVoiceID
@property (copy, nonatomic) id *downloadProgressForVoiceIdCallback; // ivar: _downloadProgressForVoiceIdCallback
@property (copy, nonatomic) id *finishedDeletingResourceCallback; // ivar: _finishedDeletingResourceCallback
@property (copy, nonatomic) id *finishedDownloadingResourceCallback; // ivar: _finishedDownloadingResourceCallback
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *resourceCacheDidReceiveUpdateCallback; // ivar: _resourceCacheDidReceiveUpdateCallback
@property (retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // ivar: _speechSynthesizer
@property (readonly) Class superclass;


+(void)partitionVoiceFootprints:(id)arg0 intoStandardVoices:(id)arg1 andNoveltyVoices:(id)arg2 ;
-(BOOL)allowedToDownload;
-(BOOL)hasAnyUserDeletableResources:(id)arg0 ;
-(BOOL)isResourceUserDeletable:(id)arg0 ;
-(id)init;
-(id)selectedVoiceIdentifierForSpeechSource:(NSInteger)arg0 ;
-(id)selectedVoiceIdentifierForSpeechSource:(NSInteger)arg0 languageCode:(id)arg1 ;
-(void)dealloc;
-(void)deleteResource:(id)arg0 ;
-(void)downloadProgressForVoiceId:(id)arg0 progress:(float)arg1 storageSize:(NSInteger)arg2 requiredDiskSpace:(BOOL)arg3 ;
-(void)finishedDeletingResource:(id)arg0 ;
-(void)finishedDownloadingResource:(id)arg0 wasCancelled:(BOOL)arg1 ;
-(void)playSampleForResource:(id)arg0 completion:(id)arg1 ;
-(void)refreshAssetCatalog:(BOOL)arg0 downloadSamplesIfNeeded:(BOOL)arg1 restartMigrationIfNeeded:(BOOL)arg2 ;
-(void)resourceCacheDidReceiveUpdate;
-(void)startDownloadForResource:(id)arg0 ;
-(void)stopDownloadForResource:(id)arg0 ;
-(void)updateSelectedVoiceIdentifier:(id)arg0 forSpeechSource:(NSInteger)arg1 ;
-(void)updateSelectedVoiceIdentifier:(id)arg0 forSpeechSource:(NSInteger)arg1 languageCode:(id)arg2 ;


@end


#endif