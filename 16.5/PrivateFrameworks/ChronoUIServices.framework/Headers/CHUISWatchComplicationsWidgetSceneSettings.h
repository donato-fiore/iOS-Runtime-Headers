// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISWATCHCOMPLICATIONSWIDGETSCENESETTINGS_H
#define CHUISWATCHCOMPLICATIONSWIDGETSCENESETTINGS_H

@class CHSWatchComplicationsCurvedLabelMetrics;


#import "CHUISWidgetSceneSettings.h"

@interface CHUISWatchComplicationsWidgetSceneSettings : CHUISWidgetSceneSettings

@property (readonly, nonatomic) CGPoint bezelContentCenter;
@property (readonly, nonatomic) NSUInteger cornerPosition;
@property (readonly, copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (readonly, nonatomic) BOOL generateSnapshotMetadata;
@property (readonly, nonatomic) BOOL includeAccessoryViews;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif