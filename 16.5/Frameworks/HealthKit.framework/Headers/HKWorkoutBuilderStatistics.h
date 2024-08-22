// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKWORKOUTBUILDERSTATISTICS_H
#define HKWORKOUTBUILDERSTATISTICS_H

@class NSMutableDictionary, NSDictionary, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKWorkoutBuilderStatistics : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_workoutStatistics;
    NSMutableDictionary *_activitiesStatistics;
}


@property (readonly, copy, nonatomic) NSDictionary *activitiesStatistics;
@property (readonly, copy, nonatomic) NSSet *allTypes;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSDictionary *workoutStatistics;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)addActivityStatistics:(id)arg0 forType:(id)arg1 activityUUID:(id)arg2 ;
-(void)addWorkoutStatistics:(id)arg0 forType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif