// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACESUGGESTIONCLIENT_H
#define ATXFACESUGGESTIONCLIENT_H

@class NSXPCConnection;
@protocol ATXFaceSuggestionClientXPCInterface, ATXFaceSuggestionLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXFaceGalleryBiomeStream.h"

@interface ATXFaceSuggestionClient : NSObject <ATXFaceSuggestionClientXPCInterface, ATXFaceSuggestionLogging>

 {
    NSXPCConnection *_connection;
    ATXFaceGalleryBiomeStream *_stream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}




+(id)sharedInstance;
-(id)init;
-(void)_logEvent:(id)arg0 ;
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
-(void)inputDescriptionForComplicationSuggestionSignal:(id)arg0 completion:(id)arg1 ;
-(void)logComplicationGalleryDidAppearWithComplicationSets:(id)arg0 ;
-(void)logComplicationGalleryDidDisappear;
-(void)logComplicationsSeenInGalleryWithEngagements:(id)arg0 completion:(id)arg1 ;
-(void)logDidAddComplication:(id)arg0 ;
-(void)logDidAddComplicationSet:(id)arg0 ;
-(void)logDidHideFaceGalleryItem:(id)arg0 ;
-(void)logDidTapComplication:(id)arg0 ;
-(void)logDidTapComplicationSet:(id)arg0 ;
-(void)logDidTapFaceGalleryItem:(id)arg0 ;
-(void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)arg0 ;
-(void)logFaceGalleryDidDisappear;
-(void)logFaceGalleryItemsDidAppear:(id)arg0 ;
-(void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)arg0 completion:(id)arg1 ;
-(void)logPosterEdit:(id)arg0 completion:(id)arg1 ;
-(void)logPosterEditUIViewedWithCompletion:(id)arg0 ;
-(void)logPosterSwitch:(id)arg0 completion:(id)arg1 ;
-(void)posterBoardDidUpdateConfigurations:(id)arg0 completion:(id)arg1 ;
-(void)posterBoardDidUpdateDescriptors:(id)arg0 completion:(id)arg1 ;
-(void)refreshComplicationsCacheWithCompletion:(id)arg0 ;
-(void)regenerateFaceGalleryConfigurationWithCompletion:(id)arg0 ;
-(void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id)arg0 ;


@end


#endif