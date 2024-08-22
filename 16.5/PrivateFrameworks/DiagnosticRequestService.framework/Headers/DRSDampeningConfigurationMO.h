// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSDAMPENINGCONFIGURATIONMO_H
#define DRSDAMPENINGCONFIGURATIONMO_H

@class NSManagedObject, NSString;


#import "DRSTeamDampeningConfigurationMO.h"
#import "DRSDampeningManagerMO.h"

@interface DRSDampeningConfigurationMO : NSManagedObject

@property (nonatomic) CGFloat acceptanceRate;
@property (nonatomic) NSInteger countCap;
@property (retain, nonatomic) DRSTeamDampeningConfigurationMO *defaultTeamConfiguration;
@property (nonatomic) CGFloat hysteresis;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManagerResource;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManagerSignature;
@property (retain, nonatomic) DRSTeamDampeningConfigurationMO *parentTeamConfiguration;


+(id)fetchRequest;


@end


#endif