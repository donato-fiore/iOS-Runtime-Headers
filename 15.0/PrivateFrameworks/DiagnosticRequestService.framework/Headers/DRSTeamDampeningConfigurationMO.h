// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSTEAMDAMPENINGCONFIGURATIONMO_H
#define DRSTEAMDAMPENINGCONFIGURATIONMO_H

@class NSManagedObject, NSSet, NSString;


#import "DRSDampeningConfigurationMO.h"
#import "DRSDampeningManagerMO.h"

@interface DRSTeamDampeningConfigurationMO : NSManagedObject

@property (retain, nonatomic) NSSet *categoryConfigurations;
@property (retain, nonatomic) DRSDampeningConfigurationMO *defaultConfiguration;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManager;
@property (copy, nonatomic) NSString *teamID;


+(id)fetchRequest;


@end


#endif