// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVPERSONDEDUPER_H
#define PVPERSONDEDUPER_H

@class NSDictionary;
@protocol PVPersonPromoterDelegate;

#import <Foundation/Foundation.h>

#import "PVPersonClusterManager.h"
#import "PVPersonDeduperProfile.h"
#import "PVPersonPromoter.h"

@interface PVPersonDeduper : NSObject {
    PVPersonClusterManager *_personClusterManager;
    NSDictionary *_invalidCandidatesMapping;
    PVPersonDeduperProfile *_profile;
}


@property (weak, nonatomic) NSObject<PVPersonPromoterDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) PVPersonPromoter *personPromoter; // ivar: _personPromoter


-(id)basicSequence;
-(id)dedupeNewVerifiedPersons:(id)arg0 withExistingVerifiedPersons:(id)arg1 updateBlock:(id)arg2 ;
-(id)dedupeUnverifiedPersons:(id)arg0 updateBlock:(id)arg1 ;
-(id)dedupeUnverifiedPersons:(id)arg0 withVerifiedPersons:(id)arg1 updateBlock:(id)arg2 ;
-(id)initWithPersonClusterManager:(id)arg0 andInvalidCandidatesMapping:(id)arg1 profile:(id)arg2 ;
// -(void)_executeStepsInSequences:(id)arg0 forPersons:(id)arg1 andOtherPersons:(id)arg2 updateBlock:(id)arg3 resultBlock:(unk)arg4  ;


@end


#endif