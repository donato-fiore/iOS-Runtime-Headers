// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEANINGFULEVENTCRITERIA_H
#define PGMEANINGFULEVENTCRITERIA_H


#import <Foundation/Foundation.h>

#import "PGMeaningfulEventPartOfDayTrait.h"
#import "PGMeaningfulEventSetTrait.h"
#import "PGMeaningfulEventLocationMobilityTrait.h"
#import "PGMeaningfulEventLocationSetTrait.h"
#import "PGMeaningfulEventNumberTrait.h"
#import "PGMeaningfulEventSceneCollectionTrait.h"

@interface PGMeaningfulEventCriteria : NSObject

@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait; // ivar: _allPartsOfDayTrait
@property (retain, nonatomic) PGMeaningfulEventSetTrait *datesTrait; // ivar: _datesTrait
@property (nonatomic, getter=isDebug) BOOL debug; // ivar: _debug
@property (retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait; // ivar: _locationMobilityTrait
@property (retain, nonatomic) PGMeaningfulEventLocationSetTrait *locationsTrait; // ivar: _locationsTrait
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait; // ivar: _maximumDurationTrait
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait; // ivar: _minimumDurationTrait
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait; // ivar: _numberOfPeopleTrait
@property (retain, nonatomic) PGMeaningfulEventSetTrait *peopleTrait; // ivar: _peopleTrait
@property (retain, nonatomic) PGMeaningfulEventSetTrait *poisTrait; // ivar: _poisTrait
@property (retain, nonatomic) PGMeaningfulEventSetTrait *publicEventCategoriesTrait; // ivar: _publicEventCategoriesTrait
@property (retain, nonatomic) PGMeaningfulEventSetTrait *roisTrait; // ivar: _roisTrait
@property (retain, nonatomic) PGMeaningfulEventSceneCollectionTrait *scenesTrait; // ivar: _scenesTrait
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait; // ivar: _significantPartsOfDayTrait
@property (retain, nonatomic) PGMeaningfulEventSetTrait *socialGroupsTrait; // ivar: _socialGroupsTrait


-(id)_debugDescriptionWithMomentNode:(id)arg0 ;
-(id)init;


@end


#endif