// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEANINGFULEVENTREQUIREDCRITERIA_H
#define PGMEANINGFULEVENTREQUIREDCRITERIA_H

@class NSDictionary, NSString;


#import "PGMeaningfulEventCriteria.h"
#import "PGMeaningfulEventPartOfDayTrait.h"
#import "PGMeaningfulEventSetTrait.h"
#import "PGMeaningfulEventLocationMobilityTrait.h"
#import "PGMeaningfulEventLocationSetTrait.h"
#import "PGMeaningfulEventNumberTrait.h"
#import "PGMeaningfulEventSceneCollectionTrait.h"

@interface PGMeaningfulEventRequiredCriteria : PGMeaningfulEventCriteria

@property (retain, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait;
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) PGMeaningfulEventSetTrait *datesTrait;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait;
@property (retain, nonatomic) PGMeaningfulEventLocationSetTrait *locationsTrait;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait;
@property (readonly, nonatomic) NSString *meaningNodeLabel;
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait;
@property (readonly, nonatomic) CGFloat minimumScore; // ivar: _minimumScore
@property (nonatomic) BOOL mustBeInteresting; // ivar: _mustBeInteresting
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *peopleTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *poisTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *publicEventCategoriesTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *roisTrait;
@property (retain, nonatomic) PGMeaningfulEventSceneCollectionTrait *scenesTrait;
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait;
@property (retain, nonatomic) PGMeaningfulEventSetTrait *socialGroupsTrait;


-(id)debugDescription;
-(id)description;
-(id)initWithIdentifier:(id)arg0 minimumScore:(CGFloat)arg1 ;


@end


#endif