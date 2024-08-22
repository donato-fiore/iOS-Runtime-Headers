// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMNATALIMETER_H
#define CMNATALIMETER_H


#import <Foundation/Foundation.h>

#import "CMNatalimeterInternal.h"

@interface CMNatalimeter : NSObject

@property (readonly, nonatomic) CMNatalimeterInternal *_internal; // ivar: _internal


+(BOOL)isNatalimeterAvailable;
+(BOOL)resetCalibrationDataWithError:(*id)arg0 ;
+(BOOL)setUserInfo:(id)arg0 error:(*id)arg1 ;
+(BOOL)setUserProfile:(id)arg0 error:(*id)arg1 ;
+(CGFloat)activeMetsThreshold;
+(CGFloat)briskMinuteMetsThreshold;
+(CGFloat)computeTimeToActiveCalories:(id)arg0 user:(id)arg1 workoutType:(NSInteger)arg2 ;
+(id)computeRestingCaloriesAtRate:(NSUInteger)arg0 user:(id)arg1 duration:(CGFloat)arg2 ;
+(id)defaultUserProfile;
+(id)maxNatalieEntries;
+(id)userProfile;
-(id)init;
-(void)dealloc;
-(void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg0 withHandler:(id)arg1 ;
-(void)queryAbsoluteNatalimetryDataSinceRecord:(NSInteger)arg0 withHandler:(id)arg1 ;
-(void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id)arg0 ;
-(void)stopAbsoluteNatalimetryDataUpdates;


@end


#endif