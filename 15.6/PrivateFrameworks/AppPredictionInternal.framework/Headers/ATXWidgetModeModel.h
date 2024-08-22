// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXWIDGETMODEMODEL_H
#define ATXWIDGETMODEMODEL_H


#import <Foundation/Foundation.h>


@interface ATXWidgetModeModel : NSObject {
    NSUInteger _mode;
}




-(CGFloat)scoreFromCorrelationStatistics:(id)arg0 ;
-(id)fetchAvailableWidgets;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)scoredEntitiesWithScoredAppEntities:(id)arg0 ;
-(id)scoredWidgetModeEntityWithWidgetFeatures:(id)arg0 widget:(id)arg1 ;
-(id)widgetModeEntityForDescriptor:(id)arg0 widgetSize:(NSInteger)arg1 ;
-(id)widgetModeEntityForWidgetId:(id)arg0 widgetFeatures:(id)arg1 availableWidgets:(id)arg2 ;


@end


#endif