// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGHIGHLIGHTTAILOR_H
#define PGHIGHLIGHTTAILOR_H

@class NSArray;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PGMoodGenerationContext.h"
#import "PGManager.h"

@interface PGHighlightTailor : NSObject {
    NSObject<OS_dispatch_group> *_enrichmentCommitGroup;
    PGMoodGenerationContext *_moodGenerationContext;
}


@property (retain, nonatomic) NSArray *enrichmentProfiles; // ivar: _enrichmentProfiles
@property (retain, nonatomic) PGManager *manager; // ivar: _manager


+(BOOL)itemScoreIsAutoplayable:(CGFloat)arg0 ;
-(BOOL)enrichAllHighlightsWithOptions:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(BOOL)enrichDayHighlights:(id)arg0 dayGroupHighlights:(id)arg1 withOptions:(NSUInteger)arg2 progressBlock:(id)arg3 ;
-(BOOL)enrichHighlights:(id)arg0 options:(NSUInteger)arg1 progressBlock:(id)arg2 ;
-(BOOL)shouldEnrichHighlight:(id)arg0 withEnrichmentProfile:(id)arg1 options:(NSUInteger)arg2 ;
-(CGFloat)highlightVisibilityWeightForItem:(id)arg0 ;
-(id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(id)assetSortDescriptors;
-(id)bestEnrichmentProfileForHighlight:(id)arg0 options:(NSUInteger)arg1 ;
-(id)computeChangedVisibilityScoresForItems:(id)arg0 ;
-(id)enrichmentValuesForHighlight:(id)arg0 usingEnrichmentProfile:(id)arg1 graph:(id)arg2 options:(NSUInteger)arg3 reportChangedValuesOnly:(BOOL)arg4 highlightTailorContext:(id)arg5 progressBlock:(id)arg6 ;
-(id)initForTesting;
-(id)initWithManager:(id)arg0 ;
-(id)keyAssetFromHighlight:(id)arg0 ;
-(id)sortedCurationOfType:(unsigned short)arg0 fromHighlight:(id)arg1 ;
-(void)writeHighlightEnrichmentValues:(id)arg0 toChangeRequest:(id)arg1 ;


@end


#endif