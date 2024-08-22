// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBNOTIFICATIONCENTERDEFAULTS_H
#define SBNOTIFICATIONCENTERDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic, getter=isBatteryWidgetAlwaysAvailable) BOOL batteryWidgetAlwaysAvailable;
@property (nonatomic) BOOL didPurgeNonASTCSnapshots;
@property (nonatomic) BOOL didPurgeNonCAMLSnapshots;
@property (readonly, nonatomic) BOOL showInternalWidgets;
@property (readonly, nonatomic) BOOL showWidgetSnapshotDebugLabels;
@property (readonly, nonatomic) BOOL useDuetRecommendations;
@property (readonly, nonatomic, getter=isWidgetLoggingEnabled) BOOL widgetLoggingEnabled;
@property (readonly, nonatomic, getter=isWidgetSnapshottingEnabled) BOOL widgetSnapshottingEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif