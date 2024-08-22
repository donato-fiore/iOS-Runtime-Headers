// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSDAMPENINGMANAGERMO_H
#define DRSDAMPENINGMANAGERMO_H

@class NSManagedObject, NSSet;


#import "DRSDampeningConfigurationMO.h"
#import "DRSDampeningEnforcementSettingsMO.h"

@interface DRSDampeningManagerMO : NSManagedObject

@property (retain, nonatomic) DRSDampeningConfigurationMO *defaultSignatureConfiguration;
@property (retain, nonatomic) DRSDampeningEnforcementSettingsMO *enforcementSettings;
@property (retain, nonatomic) NSSet *resourceConfigurations;
@property (retain, nonatomic) NSSet *teamConfigurations;
@property (nonatomic) NSInteger totalCap;


+(id)fetchRequest;


@end


#endif