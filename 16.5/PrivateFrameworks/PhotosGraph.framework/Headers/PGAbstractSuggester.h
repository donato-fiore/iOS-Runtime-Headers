// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGABSTRACTSUGGESTER_H
#define PGABSTRACTSUGGESTER_H

@class CLSSceneConfidenceThresholdHelper, NSSet, NSString;
@protocol PGSuggester;

#import <Foundation/Foundation.h>

#import "PGSuggestionSession.h"

@interface PGAbstractSuggester : NSObject <PGSuggester>

 {
    CLSSceneConfidenceThresholdHelper *_suggestableScenesHelper;
    BOOL _prefetchedSharedLibraryState;
    BOOL _isSharedLibraryEnabled;
    NSSet *_sharedLibraryPersonIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastSuggestionWasColliding; // ivar: _lastSuggestionWasColliding
@property (weak, nonatomic) PGSuggestionSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)_sharedLibraryPersonIdentifiersInLibrary:(id)arg0 withScope:(id)arg1 ;
+(id)internalPredicateForProcessedAssetsWithMinimumSceneAnalysisVersion:(NSUInteger)arg0 ;
+(id)noVideoPredicate;
+(id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg0 forMomentNodes:(id)arg1 containsUnverifiedPersons:(*BOOL)arg2 ;
+(id)suggesterWithSession:(id)arg0 ;
+(id)suggestionSubtypes;
+(id)suggestionTypes;
-(BOOL)assetIsValidForSuggesting:(id)arg0 ;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg0 onDate:(id)arg1 ;
-(BOOL)hasSuggestableScenesWithAsset:(id)arg0 ;
-(BOOL)processedAssetIsValidForSuggesting:(id)arg0 allowGuestAsset:(BOOL)arg1 ;
-(CGFloat)userFeedbackScoreWithAsset:(id)arg0 ;
-(id)defaultAssetFetchOptionsWithInternalPredicate:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(id)reasonsForSuggestion:(id)arg0 ;
-(id)sharingSuggestionResultsForMomentNodes:(id)arg0 withWorkingContext:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(void)_prefetchSharedLibraryStateIfNeeded;


@end


#endif