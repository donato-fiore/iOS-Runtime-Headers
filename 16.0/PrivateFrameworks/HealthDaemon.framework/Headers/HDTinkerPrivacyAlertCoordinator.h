// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDTINKERPRIVACYALERTCOORDINATOR_H
#define HDTINKERPRIVACYALERTCOORDINATOR_H

@class NSDate, NSDateComponents;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDPrimaryProfile.h"
#import "HDRestorableAlarm.h"

@interface HDTinkerPrivacyAlertCoordinator : NSObject {
    HDPrimaryProfile *_profile;
    HDRestorableAlarm *_scheduler;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (copy, nonatomic) NSDate *_unitTest_currentDate; // ivar: __unitTest_currentDate
@property (readonly, nonatomic) NSDateComponents *_unitTest_scheduledBirthdayTransparencyAlertComponents; // ivar: __unitTest_scheduledBirthdayTransparencyAlertComponents


-(BOOL)_unitTest_didReceiveDueEvents:(id)arg0 ;
-(BOOL)_unitTest_scheduleTransparencyAlertIfRequiredForBirthdate:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAllEventsWithError:(*id)arg0 ;
-(BOOL)scheduleEventIfRequiredForDateComponents:(id)arg0 eventIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)allScheduledDueDatesWithError:(*id)arg0 ;
-(id)allScheduledEventsWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_queue_clearDueEvents:(id)arg0 ;
-(void)_userCharacteristicsDidChangeNotification:(id)arg0 ;


@end


#endif