// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUACTIVITYITEMSOURCECONTROLLER_H
#define PUACTIVITYITEMSOURCECONTROLLER_H

@class PXObservable, NSMutableOrderedSet, NSArray, NSString, NSOrderedSet, NSMutableArray, PHPerson, NSURL;
@protocol PUCMMActivityItemSourceDelegate, PXCMMActionPerformerDelegate, PXChangeObserver, PXActivityItemSourceController, PUActivityItemSourceControllerDelegate, OS_dispatch_queue;


#import "PUActivityViewController.h"
#import "PUCMMActivityItemSource.h"

@interface PUActivityItemSourceController : PXObservable <PUCMMActivityItemSourceDelegate, PXCMMActionPerformerDelegate, PXChangeObserver, PXActivityItemSourceController>

 {
    NSMutableOrderedSet *_assetItemSources;
    NSArray *_activeItemSources;
    uint8_t _taskId;
    NSUInteger _cloudSharedAssetCount;
    NSInteger _momentShareAssetCount;
    NSInteger _unsavedSyndicatedAssetCount;
    NSInteger _externalLibraryAssetCount;
}


@property (retain) NSString *activeActivityType; // ivar: _activeActivityType
@property (copy) NSArray *activeItemSources;
@property (readonly, copy, nonatomic) NSArray *activityItems;
@property (weak, nonatomic) PUActivityViewController *activityViewController; // ivar: _activityViewController
@property (readonly, copy, nonatomic) NSOrderedSet *assetItemSources;
@property (copy, nonatomic) NSOrderedSet *assetItems; // ivar: _assetItems
@property (readonly, copy, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) PUCMMActivityItemSource *cmmActivityItemSource; // ivar: _cmmActivityItemSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUActivityItemSourceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *errors; // ivar: _errors
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *externalIsolation; // ivar: _externalIsolation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPreparingIndividualItems;
@property (readonly, nonatomic) BOOL itemSourcesSupportMomentShareLinkCreation;
@property (readonly, nonatomic) BOOL itemSourcesSupportSlideshow;
@property (readonly, nonatomic) BOOL momentSharePublishAttempted; // ivar: _momentSharePublishAttempted
@property (nonatomic) NSUInteger numSourcesDownloading; // ivar: _numSourcesDownloading
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (readonly, nonatomic) unsigned int powerAssertionIdentifier; // ivar: _powerAssertionIdentifier
@property (nonatomic) NSUInteger preferredPreparationType; // ivar: _preferredPreparationType
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (retain, nonatomic, setter=_setPublishedURL:) NSURL *publishedURL; // ivar: _publishedURL
@property (nonatomic) BOOL shouldExcludeAccessibilityDescriptionInAllItemSources; // ivar: _shouldExcludeAccessibilityDescriptionInAllItemSources
@property (nonatomic) BOOL shouldExcludeCaptionInAllItemSources; // ivar: _shouldExcludeCaptionInAllItemSources
@property (nonatomic) BOOL shouldExcludeLivenessInAllItemSources; // ivar: _shouldExcludeLivenessInAllItemSources
@property (nonatomic) BOOL shouldExcludeLocationInAllItemSources; // ivar: _shouldExcludeLocationInAllItemSources
@property (nonatomic) BOOL shouldShareAsOriginals; // ivar: _shouldShareAsOriginals
@property (nonatomic) BOOL shouldUseMomentShareLinkInMessagesIfThresholdMet; // ivar: _shouldUseMomentShareLinkInMessagesIfThresholdMet
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unsavedSyndicatedAssetCount;


-(BOOL)_prepareForPerformWithActivityType:(id)arg0 error:(*id)arg1 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(id)activityItemSourceForAsset:(id)arg0 ;
-(id)init;
-(struct ? )synthesizedSharingPreferencesForAssetItem:(id)arg0 ;
-(struct PXAssetMediaTypeCount )requestAssetsMediaTypeCount;
-(void)_cleanupAfterPerform;
-(void)_didPublishMomentShareLinkToURL:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_prepareIndividualItemSourcesForActivity:(id)arg0 ;
-(void)_prepareMomentShareLinkFromIndividualItemSourcesForActivity:(id)arg0 ;
-(void)addAssetItem:(id)arg0 ;
-(void)cancel;
-(void)cleanUpExportedFiles;
-(void)cmmActivityItemSource:(id)arg0 didFinishPreparationForActivityType:(id)arg1 preparationType:(NSUInteger)arg2 withItems:(id)arg3 didCancel:(BOOL)arg4 error:(id)arg5 completion:(id)arg6 ;
-(void)cmmActivityItemSource:(id)arg0 willBeginPreparationWithActivityType:(id)arg1 preparationType:(NSUInteger)arg2 ;
-(void)configureItemSourcesForActivityIfNeeded:(id)arg0 forcePreparationAsMomentShareLink:(BOOL)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)publishLinkForActivityType:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAssetItem:(id)arg0 ;
-(void)runExplicitly:(BOOL)arg0 withActivityType:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateSharingPreferencesInItemSources;
-(void)updateState;


@end


#endif