// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGFULEVENTCRITERIA_H
#define PGMEANINGFULEVENTCRITERIA_H


#import <Foundation/Foundation.h>

#import "PGMeaningfulEventPartOfDayTrait.h"
#import "PGMeaningfulEventCollectionTrait.h"
#import "PGGraph.h"
#import "PGMeaningfulEventLocationMobilityTrait.h"
#import "PGMeaningfulEventLocationCollectionTrait.h"
#import "PGMeaningfulEventNumberTrait.h"
#import "PGMeaningfulEventSceneCollectionTrait.h"

@interface PGMeaningfulEventCriteria : NSObject

@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait; // ivar: _allPartsOfDayTrait
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *datesTrait; // ivar: _datesTrait
@property (nonatomic, getter=isDebug) BOOL debug; // ivar: _debug
@property (readonly, nonatomic) PGGraph *graph; // ivar: _graph
@property (retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait; // ivar: _locationMobilityTrait
@property (retain, nonatomic) PGMeaningfulEventLocationCollectionTrait *locationsTrait; // ivar: _locationsTrait
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait; // ivar: _maximumDurationTrait
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait; // ivar: _minimumDurationTrait
@property (retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait; // ivar: _numberOfPeopleTrait
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *peopleTrait; // ivar: _peopleTrait
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *poisTrait; // ivar: _poisTrait
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *publicEventCategoriesTrait; // ivar: _publicEventCategoriesTrait
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *roisTrait; // ivar: _roisTrait
@property (retain, nonatomic) PGMeaningfulEventSceneCollectionTrait *scenesTrait; // ivar: _scenesTrait
@property (retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait; // ivar: _significantPartsOfDayTrait
@property (retain, nonatomic) PGMeaningfulEventCollectionTrait *socialGroupsTrait; // ivar: _socialGroupsTrait


-(id)_debugDescriptionWithMomentNode:(id)arg0 ;
-(id)initWithGraph:(id)arg0 ;


@end


#endif