// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMUTABLECONFIGURATIONRECORD_H
#define DNDSMUTABLECONFIGURATIONRECORD_H

@class NSNumber;


#import "DNDSConfigurationRecord.h"

@interface DNDSMutableConfigurationRecord : DNDSConfigurationRecord

@property (copy, nonatomic) NSNumber *compatibilityVersion;
@property (copy, nonatomic) NSNumber *hideApplicationBadges;
@property (copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (copy, nonatomic) NSNumber *suppressionType;
@property (copy, nonatomic) NSNumber *type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif