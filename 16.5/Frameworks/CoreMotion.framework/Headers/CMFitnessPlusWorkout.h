// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMFITNESSPLUSWORKOUT_H
#define CMFITNESSPLUSWORKOUT_H

@class NSString;


#import "CMWorkout.h"

@interface CMFitnessPlusWorkout : CMWorkout {
    NSString *fCatalogWorkoutId;
    NSInteger fMediaType;
}


@property (readonly, nonatomic) NSString *catalogWorkoutId;
@property (readonly, nonatomic) NSInteger mediaType;


+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)fitnessPlusWorkoutInstance:(id)arg0 ;
+(id)mediaTypeName:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 catalogWorkoutId:(id)arg2 mediaType:(NSInteger)arg3 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 catalogWorkoutId:(id)arg2 mediaType:(NSInteger)arg3 error:(*id)arg4 ;
-(id)initWithSessionId:(id)arg0 type:(NSInteger)arg1 catalogWorkoutId:(id)arg2 mediaType:(NSInteger)arg3 locationType:(NSInteger)arg4 error:(*id)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif