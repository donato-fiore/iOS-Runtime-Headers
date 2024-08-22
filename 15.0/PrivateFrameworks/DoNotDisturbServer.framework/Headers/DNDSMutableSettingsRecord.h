// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMUTABLESETTINGSRECORD_H
#define DNDSMUTABLESETTINGSRECORD_H



#import "DNDSSettingsRecord.h"
#import "DNDSBehaviorSettingsRecord.h"
#import "DNDSConfigurationsRecord.h"
#import "DNDSBypassSettingsRecord.h"
#import "DNDSScheduleSettingsRecord.h"

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (copy, nonatomic) DNDSConfigurationsRecord *configurations;
@property (copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif