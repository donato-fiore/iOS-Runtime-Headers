// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEANINGFULEVENTREQUIREDCRITERIA_H
#define PGMEANINGFULEVENTREQUIREDCRITERIA_H

@class NSDictionary, NSString;


#import "PGMeaningfulEventCriteria.h"
#import "PGMeaningfulEventPartOfDayTrait.h"
#import "PGMeaningfulEventCollectionTrait.h"
#import "PGMeaningfulEventLocationMobilityTrait.h"
#import "PGMeaningfulEventLocationCollectionTrait.h"
#import "PGMeaningfulEventNumberTrait.h"
#import "PGMeaningfulEventSceneCollectionTrait.h"

@interface PGMeaningfulEventRequiredCriteria : PGMeaningfulEventCriteria

@property (retain, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait;
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *datesTrait;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationCollectionTrait *locationsTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait;
@property (readonly, nonatomic) NSString *meaningNodeLabel;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait;
@property (readonly, nonatomic) CGFloat minimumScore; // ivar: _minimumScore
@property (nonatomic) BOOL mustBeInteresting; // ivar: _mustBeInteresting
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *peopleTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *poisTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *publicEventCategoriesTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *roisTrait;
@property (retain, nonatomic) PGMeaningfulEventSceneCollectionTrait *scenesTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *socialGroupsTrait;


-(id)debugDescription;
-(id)description;
-(id)initWithIdentifier:(id)arg0 minimumScore:(CGFloat)arg1 graph:(id)arg2 ;


@end


#endif