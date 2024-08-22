// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVPERSONDEDUPERSTEP_H
#define PVPERSONDEDUPERSTEP_H

@class NSDictionary, NSMapTable, NSString;
@protocol PVPersonPromoterDelegate;

#import <Foundation/Foundation.h>

#import "PVPersonClusterManager.h"
#import "PVPersonDeduperProfile.h"

@interface PVPersonDeduperStep : NSObject

@property (weak, nonatomic) NSObject<PVPersonPromoterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDictionary *invalidCandidatesMapping; // ivar: _invalidCandidatesMapping
@property (readonly, nonatomic) NSMapTable *mergeRelations; // ivar: _mergeRelations
@property (readonly, nonatomic) NSString *metricsKey;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) PVPersonClusterManager *personClusterManager; // ivar: _personClusterManager
@property (readonly, nonatomic) PVPersonDeduperProfile *profile; // ivar: _profile
@property (nonatomic) float progress; // ivar: _progress
@property (nonatomic) BOOL shouldStop; // ivar: _shouldStop


-(BOOL)addPotentialMergeCandidateForPerson:(id)arg0 withOtherPerson:(id)arg1 updateBlock:(id)arg2 ;
-(BOOL)isPersonSimilar:(id)arg0 withOtherPerson:(id)arg1 withDistance:(float)arg2 minAgeType:(unsigned short)arg3 ;
-(BOOL)shouldStopWithUpdateBlock:(id)arg0 ;
-(float)adjustedThreshold:(float)arg0 forMinAgeType:(unsigned short)arg1 ;
-(id)_resolveMergeCandidate:(id)arg0 forPerson:(id)arg1 ;
-(id)initWithPersonClusterManager:(id)arg0 invalidCandidatesMapping:(id)arg1 profile:(id)arg2 ;
-(id)mergeCandidatePersonsWithUpdateBlock:(id)arg0 ;
// -(void)dedupePersons:(id)arg0 withOtherPersons:(id)arg1 updateBlock:(id)arg2 resultBlock:(unk)arg3  ;


@end


#endif