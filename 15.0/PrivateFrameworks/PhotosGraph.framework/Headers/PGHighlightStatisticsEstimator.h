// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGHIGHLIGHTSTATISTICSESTIMATOR_H
#define PGHIGHLIGHTSTATISTICSESTIMATOR_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGHighlightStatisticsEstimator : NSObject {
    PGManagerWorkingContext *_workingContext;
}


@property (readonly, nonatomic) NSString *highlightEstimatesDescription;
@property (readonly, nonatomic) NSDictionary *highlightEstimatesDictionary; // ivar: _highlightEstimatesDictionary


-(BOOL)_isUtilityAsset:(id)arg0 ;
-(NSUInteger)_numberOfUtilityAssetsForAssetCollection:(id)arg0 ;
-(id)_collectDetailsForAggregations:(id)arg0 inGraph:(id)arg1 ;
-(id)_collectDetailsForTripsAndWeekends:(id)arg0 inGraph:(id)arg1 ;
-(id)_createHighlightEstimatesDictionary;
-(id)_highlightEstimatesDescriptionWithData:(id)arg0 ;
-(id)_stringDescriptionForHomeWorkAggregations:(id)arg0 ;
-(id)_stringDescriptionForMomentsDetails:(id)arg0 ;
-(id)_stringDescriptionForTripWeekendDetails:(id)arg0 ;
-(id)initWithWorkingContext:(id)arg0 ;


@end


#endif