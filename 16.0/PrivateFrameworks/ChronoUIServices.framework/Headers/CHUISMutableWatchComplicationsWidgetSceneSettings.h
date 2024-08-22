// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISMUTABLEWATCHCOMPLICATIONSWIDGETSCENESETTINGS_H
#define CHUISMUTABLEWATCHCOMPLICATIONSWIDGETSCENESETTINGS_H

@class CHSWatchComplicationsCurvedLabelMetrics;


#import "CHUISMutableWidgetSceneSettings.h"

@interface CHUISMutableWatchComplicationsWidgetSceneSettings : CHUISMutableWidgetSceneSettings

@property (nonatomic) CGPoint bezelContentCenter;
@property (nonatomic) NSUInteger cornerPosition;
@property (copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (nonatomic) BOOL generateSnapshotMetadata;
@property (nonatomic) BOOL includeAccessoryViews;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif