// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCOMPLICATIONSUGGESTIONGENERATOR_H
#define ATXCOMPLICATIONSUGGESTIONGENERATOR_H

@class ATXWidgetDescriptorCache, NSString, ATXComplicationSet, NSArray;
@protocol ATXFaceGalleryLayoutGeneratorComplicationProviding;

#import <Foundation/Foundation.h>

#import "ATXComplicationSuggestionCache.h"
#import "ATXComplicationSuggestionScorer.h"
#import "ATXComplicationSuggestionParameters.h"
#import "ATXPosterConfigurationCache.h"

@interface ATXComplicationSuggestionGenerator : NSObject <ATXFaceGalleryLayoutGeneratorComplicationProviding>

 {
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXComplicationSuggestionCache *_complicationSuggestionCache;
    ATXComplicationSuggestionScorer *_complicationScorer;
    ATXComplicationSuggestionParameters *_parameters;
    ATXPosterConfigurationCache *_posterConfigurationCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATXComplicationSet *inlineSet;
@property (readonly, copy, nonatomic) NSArray *modularSets;
@property (readonly) Class superclass;


-(BOOL)_complicationIsAlreadyAdded:(id)arg0 alreadyAddedComplications:(id)arg1 ;
-(BOOL)_layoutIsValidGivenComplications:(id)arg0 allowedComplicationPersonalities:(id)arg1 ;
-(NSInteger)_layoutTypeForSet:(id)arg0 ;
-(id)_circularComplicationFromComplications:(id)arg0 ;
-(id)_complicationWithDesiredLayout:(NSInteger)arg0 complicationDescriptors:(id)arg1 unusedRecentsComplications:(id)arg2 alreadyAddedComplications:(id)arg3 ;
-(id)_complicationsFromFallbackSet:(id)arg0 alreadyAddedDescriptors:(id)arg1 ;
-(id)_fallbackSets;
-(id)_inlineSetDescriptors_ShouldRefresh:(BOOL)arg0 ;
-(id)_modularDescriptors_ShouldRefresh:(BOOL)arg0 ;
-(id)_modularLayoutTypesGivenRecentsLayoutType:(NSInteger)arg0 ;
-(id)_recentInlineComplications;
-(id)_recentsComplications_unusedComplications:(id)arg0 ;
-(id)_recentsSet_unusedComplications:(id)arg0 ;
-(id)_rectangularComplicationFromComplications:(id)arg0 ;
-(id)_scoredInlineComplicationDescriptors;
-(id)_scoredModularComplicationDescriptors;
-(id)descriptionForScoredSet:(id)arg0 ;
-(id)init;
-(id)inputDescriptionForComplicationSuggestionSignal:(id)arg0 ;
-(id)modelDescription;
-(id)modularSetsWithDesiredLayouts:(id)arg0 unusedRecentComplications:(id)arg1 alreadyAddedComplications:(id)arg2 ;
-(id)scoredComplicationsDescription;
-(void)refreshComplicationCache;


@end


#endif