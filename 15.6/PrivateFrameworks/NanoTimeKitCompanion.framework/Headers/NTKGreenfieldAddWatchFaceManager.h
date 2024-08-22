// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDADDWATCHFACEMANAGER_H
#define NTKGREENFIELDADDWATCHFACEMANAGER_H

@class NSTimer, NSError, NSMutableArray, NSMutableSet, NSSet, NSString, NSUUID;
@protocol NTKFaceCollectionObserver, OS_dispatch_queue, NTKGreenfieldAddWatchFaceManagerDelegate;

#import <Foundation/Foundation.h>

#import "NTKGreenfieldDownloader.h"
#import "NTKPersistentFaceCollection.h"
#import "NTKGreenfieldDecodedRecipe.h"

@interface NTKGreenfieldAddWatchFaceManager : NSObject <NTKFaceCollectionObserver>

 {
    NSUInteger _decodingState;
    NSUInteger _uiState;
    NTKGreenfieldDownloader *_downloader;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NTKPersistentFaceCollection *_library;
    NSTimer *_libraryTimeoutTimer;
    BOOL _isLibraryTimeout;
    NSError *_failedError;
    NSMutableArray *_orderedPendingComplicationsItemIds;
    NSMutableSet *_skippedPendingComplicationsItemIds;
    NSMutableSet *_installedComplicationIds;
    NSSet *_locallyAvailableItemIds;
    NSSet *_appsThatRequireUpdatesItemIds;
    NSString *_sourceApplicationBundleIdentifier;
    NSUInteger _totalNonInstalledSlotCount;
    NSMutableSet *_unavailableComplicationsSlots;
    NSMutableSet *_unavailableComplicationsNames;
}


@property (readonly, nonatomic) NSString *addFaceDescription;
@property (readonly, nonatomic) NSUUID *addedFaceID; // ivar: _addedFaceID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NTKGreenfieldDecodedRecipe *decodedRecipe; // ivar: _decodedRecipe
@property (weak, nonatomic) NSObject<NTKGreenfieldAddWatchFaceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger remainingAppsToInstallCount; // ivar: _remainingAppsToInstallCount
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger totalNonInstalledAppCount; // ivar: _totalNonInstalledAppCount
@property (readonly, nonatomic) NSInteger viewedNonInstalledAppCount; // ivar: _viewedNonInstalledAppCount


-(BOOL)_canAddFaceWithoutAllCompicationInstalled;
-(BOOL)hasSkippedComplications;
-(NSInteger)remainingComplicationsToInstallCount;
-(id)_addToLibraryOrUpdateFaceInLibrary;
-(id)_analyticsExitScreenNameForCurrentState;
-(id)_analyticsModelForAddFaceEvents;
-(id)_appNameFromItemId:(id)arg0 ;
-(id)_curPendingComplicationItemId;
-(id)_missingAppsDescription;
-(id)_queue_fetchLocallyAvailableAppsWithError:(*id)arg0 ;
-(id)canAddWatchFaceFromDecodedRecipe:(id)arg0 toLibrary:(id)arg1 ;
-(id)init;
-(id)skippedComplicationsSlots;
-(void)_buildUnavailableComplicationsInformationWithInstalledBundleIds:(id)arg0 ;
-(void)_cancelLibraryTimeoutTimer;
-(void)_cleanUpDownloader;
-(void)_decodeUrl:(id)arg0 ;
-(void)_handleAddWatchFaceManagerDidFinishWithError:(id)arg0 ;
-(void)_libraryTimeoutTimerFired;
-(void)_moveAndNotifyDelegateToStartStateIfPossible;
-(void)_queue_fetchInstalledAppsOnWatchWithithCompletionBlock:(id)arg0 ;
-(void)_refreshInstalledComplicationsWithContinueBlock:(id)arg0 ;
-(void)_startDownloadWirthURL:(id)arg0 ;
-(void)_startLibraryTimeoutTimer;
-(void)_updateUIStateAndNotifyDelegate:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)decodeWatchFaceWithURL:(id)arg0 sourceApplicationBundleIdentifier:(id)arg1 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)handleAddToMyFacesAction;
-(void)handleContinueAction;
-(void)handleDidExitAddWatchFaceFlow;
-(void)handleDoneAction;
-(void)handleRevisitSkippedComplicationsAction;
-(void)handleSkipComplicationAction;
-(void)markComplicationAsInstalled;
-(void)openAppStore;


@end


#endif