// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHINGESTMOMENTCONTAINER_H
#define PGGRAPHINGESTMOMENTCONTAINER_H

@class CLSClueCollection, NSNumber, CLSCurationContext, NSString, CLSInvestigationPhotoKitFeeder, NSDate;
@protocol PGGraphIngestMoment;

#import <Foundation/Foundation.h>

#import "PGCurationManager.h"

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment>

 {
    PGCurationManager *_curationManager;
    CGFloat _topTierAestheticScore;
}


@property (readonly, nonatomic) CGFloat behavioralScore;
@property (retain, nonatomic) CLSClueCollection *clueCollection; // ivar: _clueCollection
@property (readonly, nonatomic) BOOL containsBetterScoringAsset;
@property (readonly, nonatomic) BOOL containsNonJunkAssets;
@property (readonly, nonatomic) CGFloat contentScore;
@property (retain, nonatomic) NSNumber *contentScoreNumber; // ivar: _contentScoreNumber
@property (retain, nonatomic) CLSCurationContext *curationContext; // ivar: _curationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat facesProcessedRatio;
@property (retain, nonatomic) CLSInvestigationPhotoKitFeeder *feeder; // ivar: _feeder
@property (readonly, nonatomic) BOOL hasAssetsWithInterestingScenes;
@property (readonly, nonatomic) BOOL hasHigherThanImprovedAssets;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat inhabitationScore;
@property (readonly, nonatomic) BOOL isInteresting;
@property (retain, nonatomic) NSNumber *isInterestingNumber; // ivar: _isInterestingNumber
@property (readonly, nonatomic) BOOL isInterestingWithAlternateJunking;
@property (retain, nonatomic) NSNumber *isInterestingWithAlternateJunkingNumber; // ivar: _isInterestingWithAlternateJunkingNumber
@property (readonly, nonatomic) BOOL isSmartInteresting;
@property (retain, nonatomic) NSNumber *isSmartInterestingNumber; // ivar: _isSmartInterestingNumber
@property (readonly, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) NSDate *localStartDate;
@property (readonly, nonatomic) NSUInteger numberOfAssetsInExtendedCuration;
@property (readonly, nonatomic) NSUInteger numberOfItems;
@property (readonly, nonatomic) NSUInteger numberOfItemsWithPersons;
@property (readonly, nonatomic) NSUInteger numberOfRegularGemItems;
@property (readonly, nonatomic) NSUInteger numberOfShinyGemItems;
@property (readonly, nonatomic) CGFloat scenesProcessedRatio;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalNumberOfPersons;
@property (readonly, nonatomic) NSDate *universalEndDate;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSString *uuid;


-(id)initMomentContainerWithFeeder:(id)arg0 clueCollection:(id)arg1 curationManager:(id)arg2 topTierAestheticScore:(CGFloat)arg3 curationContext:(id)arg4 ;
-(void)_computeScoresIfNeeded;


@end


#endif