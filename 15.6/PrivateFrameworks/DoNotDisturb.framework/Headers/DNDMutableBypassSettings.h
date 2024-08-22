// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMUTABLEBYPASSSETTINGS_H
#define DNDMUTABLEBYPASSSETTINGS_H

@class NSString;


#import "DNDBypassSettings.h"

@interface DNDMutableBypassSettings : DNDBypassSettings

@property (copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic) NSUInteger immediateBypassEventSourceType;
@property (nonatomic) NSUInteger repeatEventSourceBehaviorEnabledSetting;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif