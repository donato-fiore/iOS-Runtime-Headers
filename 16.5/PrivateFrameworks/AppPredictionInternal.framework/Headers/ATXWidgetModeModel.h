// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXWIDGETMODEMODEL_H
#define ATXWIDGETMODEMODEL_H


#import <Foundation/Foundation.h>

#import "ATXWidgetModeEntityModelWeights.h"
#import "ATXGlobalWidgetPopularityModel.h"

@interface ATXWidgetModeModel : NSObject {
    NSUInteger _mode;
    ATXWidgetModeEntityModelWeights *_widgetModeEntityModelWeights;
    ATXGlobalWidgetPopularityModel *_widgetPopularityModel;
}




+(id)fetchAvailableWidgets;
-(CGFloat)combineWidgetModeProbability:(CGFloat)arg0 withAppModeProbabiilty:(CGFloat)arg1 ;
-(CGFloat)scoreFromCorrelationStatistics:(id)arg0 ;
-(id)initWithMode:(NSUInteger)arg0 globalWidgetPopularityModel:(id)arg1 ;
-(id)scoredEntitiesWithScoredAppEntities:(id)arg0 ;
-(id)scoredWidgetModeEntityWithWidgetFeatures:(id)arg0 widget:(id)arg1 scoredApp:(id)arg2 ;
-(id)widgetModeEntityForDescriptor:(id)arg0 widgetSize:(NSInteger)arg1 scoredAppEntities:(id)arg2 ;
-(id)widgetModeEntityForWidgetId:(id)arg0 widgetFeatures:(id)arg1 availableWidgets:(id)arg2 scoredAppEntities:(id)arg3 ;
-(void)addEntitySpecificFeaturesToWidgetFeatures:(id)arg0 scoredApp:(id)arg1 ;


@end


#endif