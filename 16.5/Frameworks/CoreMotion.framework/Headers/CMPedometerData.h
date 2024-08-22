// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMPEDOMETERDATA_H
#define CMPEDOMETERDATA_H

@class NSDate, NSNumber, NSUUID, NSString;
@protocol SRSampling, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMPedometerData : NSObject <SRSampling, NSSecureCoding, NSCopying>

 {
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fNumberOfSteps;
    NSNumber *fDistance;
    NSNumber *fFloorsAscended;
    NSNumber *fFloorsDescended;
    NSNumber *fRecordId;
    NSNumber *fCurrentPace;
    NSNumber *fCurrentCadence;
    NSDate *fFirstStepTime;
    NSNumber *fActiveTime;
    NSUUID *fSourceId;
    NSNumber *fIsOdometerDistance;
    NSNumber *fIsOdometerPace;
    NSNumber *fNumberOfPushes;
    NSNumber *fWorkoutType;
    NSNumber *fElevationAscended;
    NSNumber *fElevationDescended;
    NSNumber *fDistanceSource;
}


@property (readonly, nonatomic) NSNumber *activeTime;
@property (readonly, nonatomic) NSNumber *averageActivePace;
@property (readonly, nonatomic) NSNumber *currentCadence;
@property (readonly, nonatomic) NSNumber *currentPace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) NSNumber *distanceSource;
@property (readonly, nonatomic) NSNumber *elevationAscended;
@property (readonly, nonatomic) NSNumber *elevationDescended;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *firstStepTime;
@property (readonly, nonatomic) NSNumber *floorsAscended;
@property (readonly, nonatomic) NSNumber *floorsDescended;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *numberOfPushes;
@property (readonly, nonatomic) NSNumber *numberOfSteps;
@property (readonly, nonatomic) NSInteger recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *workoutType;


+(BOOL)supportsSecureCoding;
+(id)maxPedometerEntries;
-(BOOL)isOdometerDistance;
-(BOOL)isOdometerPace;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(CGFloat)arg0 endDate:(CGFloat)arg1 steps:(int)arg2 distance:(CGFloat)arg3 floorsAscended:(id)arg4 floorsDescended:(id)arg5 recordID:(NSInteger)arg6 currentPace:(id)arg7 currentCadence:(id)arg8 firstStepTime:(CGFloat)arg9 activeTime:(id)arg10 sourceId:(id)arg11 isOdometerDistance:(id)arg12 isOdometerPace:(id)arg13 pushes:(int)arg14 workoutType:(int)arg15 elevationAscended:(id)arg16 elevationDescended:(id)arg17 distanceSource:(int)arg18 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif