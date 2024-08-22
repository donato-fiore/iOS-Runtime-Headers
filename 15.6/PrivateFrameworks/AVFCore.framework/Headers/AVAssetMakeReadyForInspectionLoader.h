// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETMAKEREADYFORINSPECTIONLOADER_H
#define AVASSETMAKEREADYFORINSPECTIONLOADER_H

@class NSMutableArray, NSURL;


#import "AVAssetInspectorLoader.h"
#import "AVAssetInspector.h"

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
    *OpaqueFigFormatReader _formatReader;
    *OpaqueFigSimpleMutex _loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    NSInteger _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}




-(BOOL)_inspectionRequiresAFormatReader;
-(BOOL)_isStreaming;
-(BOOL)_providesAccurateTiming;
-(BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg0 ;
-(BOOL)_updateStatusWhileMutexLocked:(NSInteger)arg0 figErrorCode:(int)arg1 ;
-(BOOL)hasProtectedContent;
-(BOOL)isComposable;
-(BOOL)isExportable;
-(BOOL)isPlayable;
-(BOOL)isReadable;
-(NSInteger)_status;
-(NSInteger)_statusOfValueWhileMutexLockedForKey:(id)arg0 error:(*id)arg1 ;
-(NSInteger)firstFragmentSequenceNumber;
-(NSInteger)fragmentCount;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)URL;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg0 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg0 ;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
-(id)assetInspector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)figChapterGroupInfo;
-(id)initWithURL:(id)arg0 ;
-(id)lyrics;
-(struct ? )duration;
-(struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(*int)arg0 ;
-(struct OpaqueFigFormatReader *)_formatReader;
-(struct OpaqueFigPlaybackItem *)_playbackItem;
-(struct OpaqueFigSimpleMutex *)_loadingMutex;
-(void)_serverHasDied;
-(void)_setStatus:(NSInteger)arg0 figErrorCode:(int)arg1 ;
-(void)cancelLoading;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif