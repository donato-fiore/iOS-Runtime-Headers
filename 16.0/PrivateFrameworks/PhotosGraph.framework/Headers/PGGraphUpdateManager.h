// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHUPDATEMANAGER_H
#define PGGRAPHUPDATEMANAGER_H

@class NSDate, NSString, NSMutableSet, NSMutableArray;
@protocol PGLibraryChangeConsumer, OS_dispatch_queue, PGGraphUpdateHealthRecording;

#import <Foundation/Foundation.h>

#import "PGPhotoChangeToGraphChangeConverter.h"
#import "PGGraphUpdateJetsamIndicator.h"
#import "PGLibraryChangeListener.h"
#import "PGManager.h"
#import "PGGraphUpdateManagerTargetTokenState.h"

@interface PGGraphUpdateManager : NSObject <PGLibraryChangeConsumer>



@property (retain, nonatomic) PGPhotoChangeToGraphChangeConverter *changeConverter; // ivar: _changeConverter
@property (readonly, nonatomic) NSDate *dateSinceMajorUpgrade; // ivar: _dateSinceMajorUpgrade
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger executionContext; // ivar: _executionContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConsistencyUpdate;
@property (readonly, nonatomic) PGGraphUpdateJetsamIndicator *jetsamIndicator; // ivar: _jetsamIndicator
@property (retain, nonatomic) PGLibraryChangeListener *libraryChangeListener; // ivar: _libraryChangeListener
@property (readonly, nonatomic) NSMutableSet *listeners; // ivar: _listeners
@property (nonatomic, getter=isListening) BOOL listening; // ivar: _listening
@property (readonly, nonatomic) PGManager *manager; // ivar: _manager
@property (retain, nonatomic) NSMutableArray *pendingChanges; // ivar: _pendingChanges
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (nonatomic) unsigned char processingState; // ivar: _processingState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (nonatomic) BOOL stopRequested; // ivar: _stopRequested
@property (readonly) Class superclass;
@property (retain, nonatomic) PGGraphUpdateManagerTargetTokenState *targetTokenState; // ivar: _targetTokenState
@property (readonly, nonatomic) NSObject<PGGraphUpdateHealthRecording> *updateHealthRecorder; // ivar: _updateHealthRecorder


-(BOOL)_pauseListening;
-(BOOL)_performEnrichmentWithGraphUpdateInventory:(id)arg0 enrichmentContext:(NSUInteger)arg1 progressBlock:(id)arg2 ;
-(BOOL)_startListening;
-(BOOL)startListening;
-(id)_graphUpdateForPhotoChanges:(id)arg0 ;
-(id)_tokensForChanges:(id)arg0 ;
-(id)initWithGraphManager:(id)arg0 ;
-(void)_notifyListeners:(id)arg0 notificationType:(unsigned char)arg1 ;
-(void)_notifyProgress:(CGFloat)arg0 ;
-(void)_onEncounteredTargetToken;
-(void)_onFinishedProcessingChangesWithTokens:(id)arg0 ;
-(void)_onStopRequestedWasListening:(BOOL)arg0 ;
// -(void)_performRebuildWithGraphIngestRecipe:(id)arg0 progressBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)_processPendingChanges;
-(void)_processRebuild;
-(void)_recordInformationFromDatabaseChange:(id)arg0 ;
-(void)_recordInformationFromGraphChanges:(id)arg0 ;
-(void)_recordNumberOfDaysSinceMajorOSUpgradeIfNeeded;
-(void)_signalGraphIsConsistentWithTokens:(id)arg0 ;
// -(void)_triggerFullRebuildDuringLiveUpdate:(BOOL)arg0 graphIngestRecipe:(id)arg1 progressBlock:(id)arg2 keepExistingGraph:(unk)arg3 completionBlock:(BOOL)arg4  ;
-(void)_triggerUpdateForGraphUpdate:(id)arg0 ;
-(void)addListener:(id)arg0 ;
-(void)incrementalChangeNotAvailable;
-(void)libraryChangesAvailable:(id)arg0 ;
// -(void)performFullRebuildWithProgressBlock:(id)arg0 completionBlock:(unk)arg1  ;
-(void)removeListener:(id)arg0 ;
-(void)stopListening;


@end


#endif