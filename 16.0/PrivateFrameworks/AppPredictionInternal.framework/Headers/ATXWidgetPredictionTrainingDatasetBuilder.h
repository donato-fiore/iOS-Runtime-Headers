// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXWIDGETPREDICTIONTRAININGDATASETBUILDER_H
#define ATXWIDGETPREDICTIONTRAININGDATASETBUILDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXWidgetPredictionTrainingDatasetBuilder : NSObject {
    NSDictionary *_distinctScoreCounts;
}




-(id)createMLArrayBatchProviderFromTrainingArray:(id)arg0 ;
-(id)featureDictionaryWithWidgetEngagementRecord:(id)arg0 ;
-(id)initWithDistinctScoreCounts:(id)arg0 ;
-(id)mlFeatureKeyMapping;
-(id)mlFeatureValueForFeatureName:(id)arg0 withWidgetEngagementRecord:(id)arg1 withFeatureMapping:(id)arg2 ;
-(id)propertyNameForInputFeatureName:(id)arg0 ;
-(void)populateAdditionalFeaturesWithMultiArray:(id)arg0 forWidgetEngagementRecord:(id)arg1 ;


@end


#endif