// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMUTABLEMODECONFIGURATION_H
#define DNDMUTABLEMODECONFIGURATION_H

@class NSDate, NSArray;


#import "DNDModeConfiguration.h"
#import "DNDConfiguration.h"
#import "DNDMode.h"

@interface DNDMutableModeConfiguration : DNDModeConfiguration

@property (nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (copy, nonatomic) DNDConfiguration *configuration;
@property (copy, nonatomic) NSDate *created;
@property (nonatomic) NSUInteger dimsLockScreen;
@property (nonatomic) NSUInteger impactsAvailability;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) DNDMode *mode;
@property (copy, nonatomic) NSArray *triggers;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif