// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHMEDICATIONSPROFILEEXTENSION_H
#define HDHEALTHMEDICATIONSPROFILEEXTENSION_H

@class HDAnalyticsDailyEventManager, NSString, HDPrimaryProfile;
@protocol HDProfileExtension;

#import <Foundation/Foundation.h>

#import "HDMedicationDoseEventObserver.h"
#import "HDMedicationNanoSyncTriggerManager.h"
#import "HDMedicationScheduleManager.h"
#import "HDMedicationsWidgetSchedulingManager.h"

@interface HDHealthMedicationsProfileExtension : NSObject <HDProfileExtension>

 {
    HDAnalyticsDailyEventManager *_medicationDailyAnalyticsManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDMedicationDoseEventObserver *medicationDoseEventObserver; // ivar: _medicationDoseEventObserver
@property (readonly, nonatomic) HDMedicationNanoSyncTriggerManager *medicationNanoSyncTriggerManager; // ivar: _medicationNanoSyncTriggerManager
@property (readonly, nonatomic) HDMedicationScheduleManager *medicationScheduleManager; // ivar: _medicationScheduleManager
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDMedicationsWidgetSchedulingManager *widgetSchedulingManager; // ivar: _widgetSchedulingManager


-(id)init;
-(id)initWithProfile:(id)arg0 ;


@end


#endif