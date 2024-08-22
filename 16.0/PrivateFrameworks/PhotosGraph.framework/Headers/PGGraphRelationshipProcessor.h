// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHRELATIONSHIPPROCESSOR_H
#define PGGRAPHRELATIONSHIPPROCESSOR_H

@class NSMutableArray, NSMutableDictionary, NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGGraphPersonNodeCollection.h"

@interface PGGraphRelationshipProcessor : NSObject

@property (retain, nonatomic) NSMutableArray *analyzersToRun; // ivar: _analyzersToRun
@property (retain, nonatomic) NSMutableDictionary *childScoreByPersonLocalIdentifier; // ivar: _childScoreByPersonLocalIdentifier
@property (readonly, nonatomic) NSSet *contactIdentifiers; // ivar: _contactIdentifiers
@property (retain, nonatomic) NSMutableDictionary *coworkerScoreByPersonLocalIdentifier; // ivar: _coworkerScoreByPersonLocalIdentifier
@property (retain, nonatomic) NSMutableDictionary *familyScoreByPersonLocalIdentifier; // ivar: _familyScoreByPersonLocalIdentifier
@property (retain, nonatomic) NSMutableDictionary *friendScoreByPersonLocalIdentifier; // ivar: _friendScoreByPersonLocalIdentifier
@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes; // ivar: _momentNodes
@property (readonly, nonatomic) NSUInteger numberOfSignals; // ivar: _numberOfSignals
@property (retain, nonatomic) NSMutableDictionary *parentScoreByPersonLocalIdentifier; // ivar: _parentScoreByPersonLocalIdentifier
@property (retain, nonatomic) NSMutableDictionary *partnerScoreByPersonLocalIdentifier; // ivar: _partnerScoreByPersonLocalIdentifier
@property (readonly, nonatomic) NSDictionary *personLocalIdentifierByContactIdentifier; // ivar: _personLocalIdentifierByContactIdentifier
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes; // ivar: _personNodes
@property (retain, nonatomic) NSMutableDictionary *relationshipAnalyzerPropertiesByPersonLocalIdentifier; // ivar: _relationshipAnalyzerPropertiesByPersonLocalIdentifier
@property (readonly, nonatomic) NSUInteger runOptions; // ivar: _runOptions


-(id)_socialGroupNodesIncludingPersonLocalIdentifiers:(id)arg0 minimumMatches:(NSUInteger)arg1 amongSocialGroupNodes:(id)arg2 ;
-(id)initWithPersonNodes:(id)arg0 runOptions:(NSUInteger)arg1 ;
-(id)personLocalIdentifierForContactIdentifier:(id)arg0 ;
-(id)relationshipAnalyzerPropertiesForPersonLocalIdentifier:(id)arg0 ;
-(void)_aggregateScores;
-(void)_enumerateInferredChildrenUsingBlock:(id)arg0 ;
-(void)_enumerateInferredCoworkersUsingBlock:(id)arg0 ;
-(void)_enumerateInferredFamilyMembersUsingBlock:(id)arg0 ;
-(void)_enumerateInferredFriendsUsingBlock:(id)arg0 ;
-(void)_enumerateInferredParentsUsingBlock:(id)arg0 ;
-(void)_enumerateInferredPartnerUsingBlock:(id)arg0 ;
-(void)_enumerateInferredRelationshipMembersFromScores:(id)arg0 cumulativeThreshold:(CGFloat)arg1 minimumConfidence:(CGFloat)arg2 usingBlock:(id)arg3 ;
-(void)_extractSignalsFromRunOptions;
-(void)enumerateInferredRelationshipsUsingBlock:(id)arg0 ;
-(void)runRelationshipAnalysisWithLoggingConnection:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif