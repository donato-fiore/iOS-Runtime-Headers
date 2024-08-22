// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDMUTABLEAPPLICATIONCONFIGURATION_H
#define DNDMUTABLEAPPLICATIONCONFIGURATION_H

@class NSMutableSet;


#import "DNDApplicationConfiguration.h"

@interface DNDMutableApplicationConfiguration : DNDApplicationConfiguration

@property (copy, nonatomic) NSMutableSet *allowedThreads;
@property (copy, nonatomic) NSMutableSet *deniedThreads;
@property (nonatomic) NSUInteger minimumBreakthroughUrgency;




@end


#endif