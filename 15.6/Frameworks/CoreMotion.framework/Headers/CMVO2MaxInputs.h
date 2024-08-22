// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMVO2MAXINPUTS_H
#define CMVO2MAXINPUTS_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMVO2MaxInputs : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger fRecordId;
    NSDate *fStartDate;
    CGFloat fMets;
    NSInteger fMetSource;
    CGFloat fHeartRate;
    CGFloat fHeartRateConfidence;
    CGFloat fGrade;
    NSInteger fGradeType;
    CGFloat fCadence;
    CGFloat fPace;
    BOOL fHasGPS;
    BOOL fHasStrideCal;
    NSInteger fWorkoutType;
}


@property (readonly, nonatomic) CGFloat cadence;
@property (readonly, nonatomic) CGFloat grade;
@property (readonly, nonatomic) NSInteger gradeType;
@property (readonly, nonatomic) BOOL hasGPS;
@property (readonly, nonatomic) BOOL hasStrideCal;
@property (readonly, nonatomic) CGFloat heartRate;
@property (readonly, nonatomic) CGFloat heartRateConfidence;
@property (readonly, nonatomic) NSInteger metSource;
@property (readonly, nonatomic) CGFloat mets;
@property (readonly, nonatomic) CGFloat pace;
@property (readonly, nonatomic) NSUInteger recordId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSInteger workoutType;


+(BOOL)supportsSecureCoding;
+(struct VO2MaxInput )VO2MaxInputFromCMVO2MaxInputs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(NSUInteger)arg0 startDate:(id)arg1 mets:(CGFloat)arg2 metSource:(NSInteger)arg3 heartRate:(CGFloat)arg4 heartRateConfidence:(CGFloat)arg5 grade:(CGFloat)arg6 gradeType:(NSInteger)arg7 cadence:(CGFloat)arg8 pace:(CGFloat)arg9 hasGPS:(BOOL)arg10 hasStrideCal:(BOOL)arg11 workoutType:(NSInteger)arg12 ;
-(id)initWithSample:(struct VO2MaxInput )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif