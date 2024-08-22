// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMUTABLEAPPLICATIONCONFIGURATIONRECORD_H
#define DNDSMUTABLEAPPLICATIONCONFIGURATIONRECORD_H

@class NSSet, NSNumber;


#import "DNDSApplicationConfigurationRecord.h"

@interface DNDSMutableApplicationConfigurationRecord : DNDSApplicationConfigurationRecord

@property (copy, nonatomic) NSSet *allowedThreads;
@property (copy, nonatomic) NSSet *deniedThreads;
@property (copy, nonatomic) NSNumber *minimumBreakthroughUrgency;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif