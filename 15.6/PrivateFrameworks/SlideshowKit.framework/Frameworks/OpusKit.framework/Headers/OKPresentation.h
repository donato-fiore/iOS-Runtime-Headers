// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKPRESENTATION_H
#define OKPRESENTATION_H

@class NSMutableArray, NSMutableDictionary, NSMutableString, OFLRUCache;
@protocol OKPresentationLookupDelegate;

#import <Foundation/Foundation.h>

#import "OKResourcesDiskCacheManager.h"
#import "OKDocument.h"
#import "OKPresentationInfo.h"

@interface OKPresentation : NSObject {
    NSMutableArray *_producerPlugins;
    NSMutableDictionary *_pageTemplates;
    NSMutableDictionary *_widgetTemplates;
    NSMutableDictionary *_materialTemplates;
    NSMutableDictionary *_pages;
    NSMutableDictionary *_navigators;
    NSMutableDictionary *_couches;
    NSMutableDictionary *_feeders;
    NSMutableDictionary *_guidelines;
    NSMutableString *_mainScript;
    OFLRUCache *_feedersMemoryCache;
    OFLRUCache *_mediaItemsMemoryCache;
    OFLRUCache *_metadataMemoryCache;
    OFLRUCache *_lowThumbnailsMemoryCache;
    OFLRUCache *_intermediate1ThumbnailsMemoryCache;
    OFLRUCache *_intermediate2ThumbnailsMemoryCache;
    OKResourcesDiskCacheManager *_temporaryDiskCacheManager;
}


@property BOOL canBeEdited; // ivar: _canBeEdited
@property (nonatomic) OKDocument *document; // ivar: _document
@property BOOL enableDisplayDebugging; // ivar: _enableDisplayDebugging
@property (readonly) BOOL haveCouchesChanged; // ivar: _haveCouchesChanged
@property (readonly) BOOL haveFeedersChanged; // ivar: _haveFeedersChanged
@property (readonly) BOOL haveGuidelinesChanged; // ivar: _haveGuidelinesChanged
@property (readonly) BOOL haveNavigatorsChanged; // ivar: _haveNavigatorsChanged
@property (readonly) BOOL havePagesChanged; // ivar: _havePagesChanged
@property (readonly) BOOL haveScriptsChanged; // ivar: _haveScriptsChanged
@property (readonly) BOOL haveTemplatesChanged; // ivar: _haveTemplatesChanged
@property (readonly, retain) OKPresentationInfo *info; // ivar: _info
@property (nonatomic) NSObject<OKPresentationLookupDelegate> *lookupDelegate; // ivar: _lookupDelegate


-(BOOL)guidelineAuthoringDebuggingEnabled;
-(BOOL)guidelineAuthoringFitToAudioDuration;
-(BOOL)guidelineLiveAuthoringEnabled;
-(BOOL)registerProducerPlugin:(id)arg0 ;
-(CGFloat)guidelineAuthoringCurrentPageDuration;
-(CGFloat)guidelineAuthoringDurationFactor;
-(CGFloat)guidelineAuthoringMaximumDuration;
-(CGFloat)guidelineAuthoringMinimumDuration;
-(CGFloat)guidelineAuthoringPageDuration;
-(CGFloat)guidelineAuthoringTotalDuration;
-(NSUInteger)guidelineAuthoringRandomSeed;
-(id)_temporaryDiskCacheManager;
-(id)allGuidelineGlobalUniqueKeys;
-(id)allGuidelines;
-(id)canvasForKeyPath:(id)arg0 ;
-(id)couchWithName:(id)arg0 ;
-(id)couchesDictionary;
-(id)couchesNames;
-(id)feederWithName:(id)arg0 ;
-(id)feedersDictionary;
-(id)feedersNames;
-(id)guidelineAuthoringAttributedTitle;
-(id)guidelineAuthoringInteractiveTransitionSettings;
-(id)guidelineAuthoringMediaAttributes;
-(id)guidelineAuthoringMediaAttributesForKey:(id)arg0 ;
-(id)guidelineAuthoringProducerMediaItems;
-(id)guidelineAuthoringProducerMediaURLs;
-(id)guidelineAuthoringRecommendedResolutionSizes;
-(id)guidelineAuthoringSynopsis;
-(id)guidelineAuthoringTitle;
-(id)guidelineAuthoringTransitionSettings;
-(id)guidelineAuthoringUserAudioItems;
-(id)guidelineAuthoringUserAudioURLs;
-(id)guidelineAuthoringUserMediaItems;
-(id)guidelineAuthoringUserMediaURLs;
-(id)guidelineForGlobalUniqueKey:(id)arg0 ;
-(id)guidelineValueForGlobalUniqueKey:(id)arg0 ;
-(id)guidelinesDictionary;
-(id)guidelinesForKey:(id)arg0 ;
-(id)guidelinesForMediaItem:(id)arg0 ;
-(id)guidelinesForMediaItem:(id)arg0 andKey:(id)arg1 ;
-(id)guidelinesForPresentationCanvas:(id)arg0 ;
-(id)guidelinesForPresentationCanvas:(id)arg0 andKey:(id)arg1 ;
-(id)guidelinesForProducerPlugin:(id)arg0 ;
-(id)guidelinesForType:(NSUInteger)arg0 ;
-(id)init;
-(id)mainScript;
-(id)materialTemplateWithName:(id)arg0 ;
-(id)materialTemplatesNames;
-(id)mediaFeederWithName:(id)arg0 ;
-(id)mediaItemForURL:(id)arg0 ;
-(id)mediaItemsForURLs:(id)arg0 ;
-(id)metadataInMemoryForMediaItem:(id)arg0 ;
-(id)navigatorWithName:(id)arg0 ;
-(id)navigatorsDictionary;
-(id)navigatorsNames;
-(id)pageTemplateWithName:(id)arg0 ;
-(id)pageTemplatesNames;
-(id)pageWithName:(id)arg0 ;
-(id)pagesDictionary;
-(id)pagesNames;
-(id)registeredProducerPluginWithIdentifier:(id)arg0 ;
-(id)rootCouch;
-(id)rootFeeder;
-(id)rootMediaFeeder;
-(id)rootNavigator;
-(id)templatesDictionary;
-(id)thumbnailImageInMemoryCacheForMediaItem:(id)arg0 andResolution:(NSUInteger)arg1 ;
-(id)trailerCouch;
-(id)trailerNavigator;
-(id)widgetTemplateWithName:(id)arg0 ;
-(id)widgetTemplatesNames;
-(struct CGSize )bestResolutionSizeForDisplaySize:(struct CGSize )arg0 keepAspectRatio:(*BOOL)arg1 ;
-(void)_commonInit;
-(void)_didEnterBackgroundNotification:(id)arg0 ;
-(void)_didReceiveMemoryWarningNotification:(id)arg0 ;
-(void)_invalidateMemoryCachedMediaItem:(id)arg0 ;
-(void)_willEnterForegroundNotification:(id)arg0 ;
-(void)_willTerminateNotification:(id)arg0 ;
-(void)addCouch:(id)arg0 ;
-(void)addFeeder:(id)arg0 ;
-(void)addGuideline:(id)arg0 ;
-(void)addGuidelines:(id)arg0 ;
-(void)addMainScript:(id)arg0 extend:(BOOL)arg1 ;
-(void)addMaterialTemplate:(id)arg0 ;
-(void)addNavigator:(id)arg0 ;
-(void)addPage:(id)arg0 ;
-(void)addPageTemplate:(id)arg0 ;
-(void)addWidgetTemplate:(id)arg0 ;
-(void)dealloc;
-(void)guidelineAuthoringMediaAttributesUpdateForKey:(id)arg0 updateBlock:(id)arg1 ;
-(void)invalidateMetadataMemoryCacheForMediaItem:(id)arg0 ;
-(void)invalidateThumbnailsMemoryCacheForMediaItem:(id)arg0 ;
-(void)reloadCouchesFromDictionary:(id)arg0 ;
-(void)reloadFeedersFromDictionary:(id)arg0 ;
-(void)reloadGuidelinesFromArray:(id)arg0 ;
-(void)reloadNavigatorsFromDictionary:(id)arg0 ;
-(void)reloadPagesFromDictionary:(id)arg0 ;
-(void)reloadTemplatesFromDictionary:(id)arg0 ;
-(void)removeAllCouches;
-(void)removeAllFeeders;
-(void)removeAllGuidelines;
-(void)removeAllMaterialTemplates;
-(void)removeAllNavigators;
-(void)removeAllPageTemplates;
-(void)removeAllPages;
-(void)removeAllTemplates;
-(void)removeAllWidgetTemplates;
-(void)removeCouchWithName:(id)arg0 ;
-(void)removeFeederWithName:(id)arg0 ;
-(void)removeGuideline:(id)arg0 ;
-(void)removeGuidelineForGlobalUniqueKey:(id)arg0 ;
-(void)removeGuidelines:(id)arg0 ;
-(void)removeMainScript;
-(void)removeMaterialTemplateWithName:(id)arg0 ;
-(void)removeNavigatorWithName:(id)arg0 ;
-(void)removePageTemplateWithName:(id)arg0 ;
-(void)removePageWithName:(id)arg0 ;
-(void)removeWidgetTemplateWithName:(id)arg0 ;
-(void)resolveIfNeeded;
-(void)setGuidelines:(id)arg0 ;
-(void)setMediaFeeder:(id)arg0 withName:(id)arg1 ;
-(void)setMetadataToMemory:(id)arg0 forMediaItem:(id)arg1 ;
-(void)setPresentationChanged:(BOOL)arg0 ;
-(void)setRootMediaFeeder:(id)arg0 ;
-(void)setThumbnailImageToMemoryCache:(id)arg0 forMediaItem:(id)arg1 andResolution:(NSUInteger)arg2 ;


@end


#endif