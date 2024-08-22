// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHNAMINGPROCESSOR_H
#define PGGRAPHNAMINGPROCESSOR_H

@class NSMutableArray, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "PGManager.h"
#import "PGGraph.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"

@interface PGGraphNamingProcessor : NSObject {
    PGManager *_manager;
}


@property (retain, nonatomic) NSMutableArray *analyzersToRun; // ivar: _analyzersToRun
@property (retain, nonatomic) NSMutableDictionary *contactMatchesByPersonLocalIdentifier; // ivar: _contactMatchesByPersonLocalIdentifier
@property (retain, nonatomic) NSMutableDictionary *filteredOutContactMatchesByPersonLocalIdentifier; // ivar: _filteredOutContactMatchesByPersonLocalIdentifier
@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes; // ivar: _momentNodes
@property (readonly, nonatomic) NSUInteger numberOfSignals; // ivar: _numberOfSignals
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodesToName; // ivar: _personNodesToName
@property (readonly, nonatomic) NSUInteger runOptions; // ivar: _runOptions
@property (retain, nonatomic) NSMutableDictionary *selectedContactMatchesByPersonLocalIdentifier; // ivar: _selectedContactMatchesByPersonLocalIdentifier
@property (retain, nonatomic) NSArray *sortedPoolOfContactIdentifiers; // ivar: _sortedPoolOfContactIdentifiers


-(id)_applyMessageFrequencyPenaltyToMatchScores:(id)arg0 ;
-(id)_extractSortedPoolOfContactIdentifiers;
-(id)_personMatchScoresByContactIdentifierFromMatchProperties:(id)arg0 ;
-(id)_swapPersonAndContactIdentifiersFromMatchesByContactIdentifier:(id)arg0 ;
-(id)initWithPersonNodes:(id)arg0 runOptions:(NSUInteger)arg1 ;
-(id)initWithPersonNodes:(id)arg0 runOptions:(NSUInteger)arg1 manager:(id)arg2 ;
-(id)matchPropertiesBetweenContactIdentifier:(id)arg0 andPersonLocalIdentifier:(id)arg1 ;
-(id)personNodesToNameFromPersonNodes:(id)arg0 ;
-(void)_extractSignalsFromRunOptions;
-(void)_limitNumberOfContactSuggestionsPerPerson;
-(void)_removeSuggestionOfContact:(id)arg0 forPerson:(id)arg1 ;
-(void)enumerateContactSuggestionsForPersonNode:(id)arg0 usingBlock:(id)arg1 ;
-(void)filterContactMatches;
-(void)runNamingAnalysisWithProgressBlock:(id)arg0 ;


@end


#endif