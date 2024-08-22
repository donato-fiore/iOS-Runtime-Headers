// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMUTABLECONFIGURATIONRECORD_H
#define DNDSMUTABLECONFIGURATIONRECORD_H

@class NSNumber;


#import "DNDSConfigurationRecord.h"

@interface DNDSMutableConfigurationRecord : DNDSConfigurationRecord

@property (copy, nonatomic) NSNumber *applicationConfigurationType;
@property (copy, nonatomic) NSNumber *compatibilityVersion;
@property (copy, nonatomic) NSNumber *hideApplicationBadges;
@property (copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (copy, nonatomic) NSNumber *senderConfigurationType;
@property (copy, nonatomic) NSNumber *suppressionType;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif