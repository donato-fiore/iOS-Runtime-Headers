// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTBUILDERPERSISTEDCONFIGURATION_H
#define HDWORKOUTBUILDERPERSISTEDCONFIGURATION_H

@class NSUUID, HKQuantity, NSString, HKWorkoutConfiguration;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HDDeviceEntity.h"
#import "HDSourceEntity.h"

@interface HDWorkoutBuilderPersistedConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSUUID *builderIdentifier; // ivar: _builderIdentifier
@property (retain, nonatomic) HDDeviceEntity *deviceEntity; // ivar: _deviceEntity
@property (copy, nonatomic) HKQuantity *goal; // ivar: _goal
@property (nonatomic) NSUInteger goalType; // ivar: _goalType
@property (nonatomic) BOOL shouldCollectWorkoutEvents; // ivar: _shouldCollectWorkoutEvents
@property (retain, nonatomic) HDSourceEntity *sourceEntity; // ivar: _sourceEntity
@property (copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif