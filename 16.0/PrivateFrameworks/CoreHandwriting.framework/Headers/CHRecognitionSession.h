// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHRECOGNITIONSESSION_H
#define CHRECOGNITIONSESSION_H

@class NSOrderedSet, NSMutableArray, NSMutableDictionary, NSArray, NSString, NSData;
@protocol CHRecognitionSessionTextInputTaskDelegate, NSSecureCoding, CHStrokeProvider, OS_dispatch_queue, CHRecognitionSessionDataSource;

#import <Foundation/Foundation.h>

#import "CHRecognitionSessionResult.h"
#import "CHTextInputQuery.h"
#import "CHRecognitionSessionVersion.h"
#import "CHStrokeClassificationModel.h"

@interface CHRecognitionSession : NSObject <CHRecognitionSessionTextInputTaskDelegate, NSSecureCoding>

 {
    CHRecognitionSessionResult *_lastRecognitionResult;
    NSInteger _status;
    id<CHStrokeProvider> *_latestStrokeProvider;
    NSOrderedSet *_latestStrokeProviderVisibleStrokes;
    CHTextInputQuery *_activeTextInputQuery;
    BOOL _strokeGroupingOnly;
    CHRecognitionSessionResult *_cachedFastGroupingRecognitionResult;
    CHRecognitionSessionResult *_partialRecognitionResult;
    int _autoCapitalizationMode;
    int _autoCorrectionMode;
    CHRecognitionSessionVersion *_sessionVersion;
}


@property (readonly, nonatomic) NSMutableArray *_activeTasks; // ivar: __activeTasks
@property (nonatomic) NSUInteger _changeCoalescingIndex; // ivar: __changeCoalescingIndex
@property (readonly, nonatomic) NSMutableArray *_changeObservers; // ivar: __changeObservers
@property (readonly, nonatomic) NSMutableDictionary *_correctionRecognizersByLocalesKey; // ivar: __correctionRecognizersByLocalesKey
@property (nonatomic, setter=_setHasUnprocessedChanges:) BOOL _hasUnprocessedChanges; // ivar: __hasUnprocessedChanges
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_highResponsivenessQueue; // ivar: __highResponsivenessQueue
@property (readonly, nonatomic) NSMutableArray *_inputDrawingClients; // ivar: __inputDrawingClients
@property (retain, setter=_setLatestTextInputTargets:) NSArray *_latestTextInputTargets; // ivar: __latestTextInputTargets
@property (readonly, nonatomic) NSMutableDictionary *_recognizersByLocaleID; // ivar: __recognizersByLocaleID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_sessionQueue; // ivar: __sessionQueue
@property (setter=_setShouldForceFastGrouping:) BOOL _shouldForceFastGrouping; // ivar: __shouldForceFastGrouping
@property (readonly, nonatomic) unsigned int _taskQueueQoSClass; // ivar: __taskQueueQoSClass
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_tasksWorkQueue; // ivar: __tasksWorkQueue
@property (copy, nonatomic, setter=_setTextRecognitionLocales:) NSArray *_textRecognitionLocales; // ivar: __textRecognitionLocales
@property (weak, nonatomic) CHTextInputQuery *activeTextInputQuery;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) NSObject<CHRecognitionSessionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CHRecognitionSessionResult *lastRecognitionResult;
@property (retain, setter=_setLastRecognitionResult:) CHRecognitionSessionResult *lastRecognitionResult;
@property (readonly) NSObject<CHStrokeProvider> *latestStrokeProvider;
@property (retain, setter=_setLatestStrokeProvider:) NSObject<CHStrokeProvider> *latestStrokeProvider;
@property (copy, nonatomic) NSArray *locales;
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (copy, nonatomic) NSArray *preferredLocales; // ivar: _preferredLocales
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) NSInteger recognitionEnvironment; // ivar: _recognitionEnvironment
@property (readonly, nonatomic) NSData *sessionData;
@property (readonly) CHRecognitionSessionVersion *sessionVersion;
@property (retain, setter=_setSessionVersion:) CHRecognitionSessionVersion *sessionVersion;
@property (nonatomic) BOOL shouldForceFastGrouping;
@property (readonly, nonatomic) NSInteger status;
@property (nonatomic, setter=_setStatus:) NSInteger status;
@property (readonly, nonatomic) CHStrokeClassificationModel *strokeClassificationModel; // ivar: _strokeClassificationModel
@property (nonatomic) BOOL strokeGroupingOnly;
@property (readonly) Class superclass;


+(BOOL)isLocaleSupported:(id)arg0 ;
+(BOOL)shouldRunRecognitionLocallyWithEnvironment:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_cacheKeyForLocales:(id)arg0 ;
+(id)_strokeGroupsInProximityOfSubjectStrokeGroups:(id)arg0 clusteredStrokeGroups:(id)arg1 ;
+(id)createRecognizerForLocale:(id)arg0 sessionMode:(NSInteger)arg1 remote:(BOOL)arg2 priority:(NSInteger)arg3 ;
+(id)createRecognizerForLocales:(id)arg0 sessionMode:(NSInteger)arg1 remote:(BOOL)arg2 priority:(NSInteger)arg3 ;
+(id)effectiveLocalesFromLocales:(id)arg0 ;
+(id)strokeIdentifiersInProximalGroupsForStrokeIdentifiers:(id)arg0 sortedStrokeGroups:(id)arg1 clusteredStrokeGroups:(id)arg2 unusedStrokeIdentifiers:(*id)arg3 ;
-(BOOL)_hasPendingRecognitionTasks;
-(BOOL)_isReadyToProcessChanges;
-(BOOL)_validateLastRecognitionResult:(id)arg0 visibleStrokeIdentifiers:(id)arg1 ;
-(BOOL)loadSessionData:(id)arg0 error:(*id)arg1 ;
-(CGFloat)_preferredCoalescingInterval;
-(id)_cachedClutterFilter;
-(id)_cachedFastGroupingResult;
-(id)_contextResultForContextStrokes:(id)arg0 outStrokeGroupingResult:(*id)arg1 outStrokeClassificationResult:(*id)arg2 shouldCancel:(id)arg3 ;
-(id)_contextualTextResultsFromCachedResultUsingContextStrokes:(id)arg0 shouldCancel:(id)arg1 ;
-(id)_newRecognitionSessionTaskWithStrokeGroupingRequirement:(NSInteger)arg0 isHighResponsivenessTask:(BOOL)arg1 strokeGroupingOnly:(BOOL)arg2 subjectStrokeIdentifiers:(id)arg3 partialResultBlock:(id)arg4 ;
-(id)_recognitionSessionResultOnDemandUsingContextStrokes:(id)arg0 shouldCancel:(id)arg1 ;
-(id)_strokeGroupsContainingStrokeIdentifiers:(id)arg0 ;
-(id)_strokeIdentifiersFromCachedResultUsingContextStrokes:(id)arg0 tokenizationLevel:(NSInteger)arg1 ;
-(id)_strokeIdentifiersInGroupsContainingStrokeIdentifiers:(id)arg0 ;
-(id)_strokeIdentifiersInProximalGroupsForStrokeIdentifiers:(id)arg0 ;
-(id)_strokeIdentifiersInWordsContainingStrokeIdentifiers:(id)arg0 ;
// -(id)contextualTextResultsForContextStrokes:(id)arg0 completion:(id)arg1 shouldCancel:(unk)arg2  ;
-(id)indexableContent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 ;
-(id)initWithMode:(NSInteger)arg0 recognitionSessionResult:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithMode:(NSInteger)arg0 withVersion:(id)arg1 ;
-(id)recognizableDrawingForStrokeGroupQueryItem:(id)arg0 ;
-(id)recognizerForLocale:(id)arg0 ;
// -(id)strokePointTransformationsForContextStrokes:(id)arg0 completion:(id)arg1 shouldCancel:(unk)arg2  ;
// -(id)strokePointTransformationsForContextStrokes:(id)arg0 completionWithTelemetry:(id)arg1 shouldCancel:(unk)arg2  ;
-(id)textCorrectionRecognizerForLocales:(id)arg0 ;
// -(id)tokenStrokeIdentifiersForContextStrokes:(id)arg0 point:(struct CGPoint )arg1 tokenizationLevel:(NSInteger)arg2 completion:(id)arg3 shouldCancel:(unk)arg4  ;
-(struct CGSize )_drawingCanvasSizeForLatestStrokeProviderSnapshot;
-(void)_cancelAllHighResponsivenessTasks;
-(void)_cancelOngoingRequests;
-(void)_cleanupCachedRecognizers;
-(void)_invalidateCachedResults;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_processPendingStrokeChangesIfAvailable;
-(void)_scheduleProcessStrokeProviderChangesImmediately:(BOOL)arg0 ;
-(void)_setCachedFastGroupingRecognitionResult:(id)arg0 ;
-(void)_setPartialRecognitionResult:(id)arg0 ;
-(void)_setupExecutionQueuesForMode:(NSInteger)arg0 ;
-(void)_updateLatestStrokeProviderVisibleStrokes;
-(void)_updateRecognitionSessionStatus;
-(void)cancelOngoingRequests;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)rebuildRecognitionResults;
-(void)registerChangeObserver:(id)arg0 ;
-(void)registerInputDrawingClient:(id)arg0 ;
-(void)setNeedsRecognitionUpdate;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)unregisterInputDrawingClient:(id)arg0 ;
-(void)waitForPendingRecognitionTasks;


@end


#endif