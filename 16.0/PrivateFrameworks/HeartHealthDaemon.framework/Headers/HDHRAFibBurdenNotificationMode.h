// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRAFIBBURDENNOTIFICATIONMODE_H
#define HDHRAFIBBURDENNOTIFICATIONMODE_H

@class NSNumber, NSDateInterval, NSUUID;

#import <Foundation/Foundation.h>


@interface HDHRAFibBurdenNotificationMode : NSObject

@property (readonly, nonatomic) NSNumber *currentPercentage; // ivar: _currentPercentage
@property (readonly, nonatomic) NSNumber *currentValueClamped; // ivar: _currentValueClamped
@property (readonly, nonatomic) NSDateInterval *currentValueDateInterval; // ivar: _currentValueDateInterval
@property (readonly, nonatomic) NSUUID *currentValueUUID; // ivar: _currentValueUUID
@property (readonly, nonatomic) NSNumber *previousPercentage; // ivar: _previousPercentage
@property (readonly, nonatomic) NSNumber *previousTimeZoneDiffersFromCurrent; // ivar: _previousTimeZoneDiffersFromCurrent
@property (readonly, nonatomic) NSNumber *previousValueClamped; // ivar: _previousValueClamped
@property (readonly, nonatomic) BOOL shouldForwardToWatch; // ivar: _shouldForwardToWatch
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithType:(NSInteger)arg0 shouldForwardToWatch:(BOOL)arg1 currentPercentage:(id)arg2 currentValueClamped:(id)arg3 currentValueDateInterval:(id)arg4 currentValueUUID:(id)arg5 previousPercentage:(id)arg6 previousValueClamped:(id)arg7 previousTimeZoneDiffersFromCurrent:(id)arg8 ;


@end


#endif