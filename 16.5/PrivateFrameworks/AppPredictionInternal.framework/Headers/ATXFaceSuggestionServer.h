// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACESUGGESTIONSERVER_H
#define ATXFACESUGGESTIONSERVER_H

@class _PASSimpleCoalescingTimer, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, ATXFaceSuggestionGeneratorDelegate, ATXWidgetDescriptorCacheObserver, ATXPosterDescriptorCacheObserver, ATXFaceSuggestionClientXPCInterface;

#import <Foundation/Foundation.h>

#import "ATXPosterConfigurationCache.h"
#import "ATXPosterDescriptorCache.h"
#import "ATXFaceSuggestionAssetParameters.h"
#import "ATXComplicationSuggestionGenerator.h"
#import "ATXFaceSuggestionGenerator.h"
#import "_ATXInternalUninstallNotification.h"

@interface ATXFaceSuggestionServer : NSObject <NSXPCListenerDelegate, ATXFaceSuggestionGeneratorDelegate, ATXWidgetDescriptorCacheObserver, ATXPosterDescriptorCacheObserver, ATXFaceSuggestionClientXPCInterface>

 {
    ATXPosterConfigurationCache *_configurationCache;
    ATXPosterDescriptorCache *_descriptorCache;
    ATXFaceSuggestionAssetParameters *_assetParameters;
    ATXComplicationSuggestionGenerator *_complicationsGenerator;
    ATXFaceSuggestionGenerator *_faceSuggestionGenerator;
    _ATXInternalUninstallNotification *_uninstallNotification;
    _PASSimpleCoalescingTimer *_modeFaceSuggestionRefreshCoalescingTimer;
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)descriptorCacheDidUpdateWithDescriptors:(id)arg0 ;
-(void)fetchComplicationSetsForFaceGalleryItem:(id)arg0 completion:(id)arg1 ;
-(void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(id)arg0 ;
-(void)fetchFaceGalleryConfigurationWithCompletion:(id)arg0 ;
-(void)fetchFaceSuggestionsForFocusMode:(id)arg0 completion:(id)arg1 ;
-(void)fetchInlineComplicationSetForFaceGalleryItem:(id)arg0 completion:(id)arg1 ;
-(void)fetchMetricsDescriptionWithCompletion:(id)arg0 ;
-(void)fetchPosterConfigurationsWithCompletion:(id)arg0 ;
-(void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(id)arg0 ;
-(void)fetchRankedPosterDescriptors:(id)arg0 ;
-(void)fetchScoredComplicationDescriptionWithCompletion:(id)arg0 ;
-(void)generatorDidUpdateFaceGalleryConfiguration:(id)arg0 ;
-(void)inputDescriptionForComplicationSuggestionSignal:(id)arg0 completion:(id)arg1 ;
-(void)logComplicationsSeenInGalleryWithEngagements:(id)arg0 completion:(id)arg1 ;
-(void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)arg0 ;
-(void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)arg0 completion:(id)arg1 ;
-(void)logPosterEdit:(id)arg0 completion:(id)arg1 ;
-(void)logPosterEditUIViewedWithCompletion:(id)arg0 ;
-(void)logPosterSwitch:(id)arg0 completion:(id)arg1 ;
-(void)posterBoardDidUpdateConfigurations:(id)arg0 completion:(id)arg1 ;
-(void)posterBoardDidUpdateDescriptors:(id)arg0 completion:(id)arg1 ;
-(void)refreshComplicationsCacheWithCompletion:(id)arg0 ;
-(void)regenerateFaceGalleryConfigurationWithCompletion:(id)arg0 ;
-(void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id)arg0 ;
-(void)widgetDescriptorCacheDidUpdateDescriptors:(id)arg0 ;


@end


#endif