// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSRANKINGCONFIGURATION_H
#define PRSRANKINGCONFIGURATION_H

@class NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "SSPlistDataReader.h"

@interface PRSRankingConfiguration : NSObject {
    os_unfair_lock_s _mutex;
}


@property (nonatomic) BOOL allow_coreduet_influence; // ivar: _allow_coreduet_influence
@property (retain, nonatomic) NSMutableDictionary *categoryEngagements; // ivar: _categoryEngagements
@property (retain, nonatomic) NSMutableOrderedSet *cepBlocklistSet; // ivar: _cepBlocklistSet
@property (nonatomic) BOOL disableResultTruncation; // ivar: _disableResultTruncation
@property (retain, nonatomic) NSNumber *localResultQualityThreshold; // ivar: _localResultQualityThreshold
@property (nonatomic) float numAppsDeduped; // ivar: _numAppsDeduped
@property (retain, nonatomic) NSArray *parsecCategoryOrder; // ivar: _parsecCategoryOrder
@property (retain, nonatomic) NSMutableDictionary *queryDependentCategoryProbabilities; // ivar: _queryDependentCategoryProbabilities
@property (retain, nonatomic) SSPlistDataReader *queryIndependentCategoryProbabilities; // ivar: _queryIndependentCategoryProbabilities
@property (retain, nonatomic) NSArray *rankingQueries; // ivar: _rankingQueries
@property (retain, nonatomic) NSDictionary *serverFeatures; // ivar: _serverFeatures
@property (retain, nonatomic) NSString *shortcutSectionBundleID; // ivar: _shortcutSectionBundleID
@property (retain, nonatomic) NSDictionary *sqfData; // ivar: _sqfData


-(CGFloat)queryDependentProbabilityForCategory:(id)arg0 ;
-(CGFloat)queryIndependentProbabilityForCategory:(id)arg0 ;
-(float)engagementProbabilityForCategory:(id)arg0 ;
-(float)maxEngagementProbability;
-(id)init;
-(void)appendToExistingCEPBlocklist:(id)arg0 ;
-(void)lock;
-(void)mergeWith:(id)arg0 ;
-(void)unlock;
-(void)updateQueryDependentProbabilityAndBlocklistSetWith:(id)arg0 ;
-(void)updateWithSQFData:(id)arg0 ;


@end


#endif