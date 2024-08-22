// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSCAMERARECORDINGCLOUDUPGRADERESULTEVENT_H
#define HFANALYTICSCAMERARECORDINGCLOUDUPGRADERESULTEVENT_H



#import "HFAnalyticsEvent.h"

@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent : HFAnalyticsEvent

@property (nonatomic) NSUInteger iCloudPlanUpgradeState; // ivar: _iCloudPlanUpgradeState
@property (nonatomic) NSUInteger iCloudUpgradeOfferPresented; // ivar: _iCloudUpgradeOfferPresented
@property (nonatomic) NSUInteger numCamerasWithRecording; // ivar: _numCamerasWithRecording


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif