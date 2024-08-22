// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSSCHEDULEMANAGER_H
#define DNDSSCHEDULEMANAGER_H

@class NSMutableDictionary;
@protocol DNDSScheduleManagerDataSource;

#import <Foundation/Foundation.h>

#import "DNDSModeAssertionManager.h"

@interface DNDSScheduleManager : NSObject {
    DNDSModeAssertionManager *_modeAssertionManager;
    NSMutableDictionary *_currentScheduleSettingsByModeIdentifier;
}


@property (weak, nonatomic) NSObject<DNDSScheduleManagerDataSource> *dataSource; // ivar: _dataSource


-(id)_scheduleManagerClientIdentifierForModeIdentifier:(id)arg0 ;
-(id)initWithModeAssertionManager:(id)arg0 ;
-(void)_refreshWithScheduleSettings:(id)arg0 modeIdentifier:(id)arg1 currentScheduleAssertion:(id)arg2 context:(id)arg3 ;
-(void)_refreshWithScheduleSettingsByModeIdentifier:(id)arg0 context:(id)arg1 ;
-(void)refresh;


@end


#endif