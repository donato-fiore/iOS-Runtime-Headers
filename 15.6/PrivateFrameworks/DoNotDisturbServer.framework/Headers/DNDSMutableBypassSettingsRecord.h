// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMUTABLEBYPASSSETTINGSRECORD_H
#define DNDSMUTABLEBYPASSSETTINGSRECORD_H

@class NSString, NSNumber;


#import "DNDSBypassSettingsRecord.h"

@interface DNDSMutableBypassSettingsRecord : DNDSBypassSettingsRecord

@property (copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (copy, nonatomic) NSNumber *immediateBypassEventSourceType;
@property (copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif