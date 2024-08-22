// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISWATCHCOMPLICATIONSWIDGETHOSTVIEWCONTROLLER_H
#define CHUISWATCHCOMPLICATIONSWIDGETHOSTVIEWCONTROLLER_H

@class CHSWatchComplicationsCurvedLabelMetrics;
@protocol CHUISWatchComplicationsWidgetHostViewControllerDelegate;


#import "CHUISWidgetHostViewController.h"
#import "CHUISWatchComplicationsWidgetSceneClientSettingsDiffInspector.h"
#import "CHUISWatchComplicationsWidgetSnapshotMetadata.h"

@interface CHUISWatchComplicationsWidgetHostViewController : CHUISWidgetHostViewController {
    CHUISWatchComplicationsWidgetSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    CHUISWatchComplicationsWidgetSnapshotMetadata *_snapshotMetadata;
}


@property (nonatomic) CGPoint bezelContentCenter; // ivar: _bezelContentCenter
@property (nonatomic) NSInteger cornerPosition; // ivar: _cornerPosition
@property (copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics; // ivar: _curvedLabelMetrics
@property (readonly, nonatomic) CGFloat curvedTextAngularWidth;
@property (nonatomic) BOOL generateSnapshotMetadata; // ivar: _generateSnapshotMetadata
@property (nonatomic) BOOL includeAccessoryViews; // ivar: _includeAccessoryViews
@property (readonly, copy, nonatomic) CHUISWatchComplicationsWidgetSnapshotMetadata *snapshotMetadata;
@property (weak, nonatomic) NSObject<CHUISWatchComplicationsWidgetHostViewControllerDelegate> *watchComplicationsDelegate; // ivar: _watchComplicationsDelegate


-(NSInteger)position;
-(id)additionalSnapshotPresentationContext;
-(id)handleActions:(id)arg0 ;
-(id)initWithWidget:(id)arg0 metrics:(id)arg1 widgetConfigurationIdentifier:(id)arg2 ;
-(id)sceneSpecification;
-(void)prepareForSnapshotWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)sceneDidUpdateClientSettingsWithDiff:(id)arg0 oldClientSettings:(id)arg1 newClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)setPosition:(NSInteger)arg0 ;
-(void)willModifySceneClientSettings:(id)arg0 ;
-(void)willModifySceneSettings:(id)arg0 ;


@end


#endif