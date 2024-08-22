// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLIBRARYCLUSTERER_H
#define PLLIBRARYCLUSTERER_H

@class NSCalendar;
@protocol PLLibraryClustererDelegate;

#import <Foundation/Foundation.h>

#import "PLFrequentLocationManager.h"
#import "PLLocalCreationDateCreator.h"

@interface PLLibraryClusterer : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (weak, nonatomic) NSObject<PLLibraryClustererDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager; // ivar: _frequentLocationManager
@property (readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator; // ivar: _localCreationDateCreator


-(BOOL)_shouldSplitMomentsWithTimeDistance:(CGFloat)arg0 locationDistance:(CGFloat)arg1 ;
-(id)_momentsGroupedByDayWithMomentsSortedByDate:(id)arg0 ;
-(id)_momentsSeparatedOnLocationTypeWithMoments:(id)arg0 ;
-(id)_momentsSplitBetweenOriginatorsWithMoments:(id)arg0 ;
-(id)_momentsSplitWithinDayWithMoments:(id)arg0 ;
-(id)_momentsWithLocationClusteredByPossibleSource:(id)arg0 ;
-(id)_startDateComponentsForMomentCluster:(id)arg0 ;
-(id)initWithLocalCreationDateCreator:(id)arg0 frequentLocationManager:(id)arg1 ;
-(id)locationBasedMomentClustersForMomentsSortedByDate:(id)arg0 ;
-(id)momentClustersForMomentsSortedByDate:(id)arg0 ;
-(void)_createMomentsForDailyAssets:(id)arg0 currentMomentExistingMomentData:(id)arg1 ;
-(void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)arg0 clusters:(id)arg1 ;
-(void)processMomentsWithAssets:(id)arg0 ;


@end


#endif