// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISWATCHCOMPLICATIONSWIDGETSCENE_H
#define CHUISWATCHCOMPLICATIONSWIDGETSCENE_H

@class CHSWatchComplicationsCurvedLabelMetrics;


#import "CHUISWidgetScene.h"

@interface CHUISWatchComplicationsWidgetScene : CHUISWidgetScene

@property (readonly, nonatomic) CGPoint bezelContentCenter;
@property (readonly, nonatomic) NSInteger cornerPosition;
@property (readonly, copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (readonly, nonatomic) BOOL generateSnapshotMetadata;
@property (readonly, nonatomic) BOOL includeAccessoryViews;


-(id)_sceneSettings;


@end


#endif