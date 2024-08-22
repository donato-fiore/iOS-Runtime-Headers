// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POWERUIBATTERYMITIGATIONMANAGER_H
#define POWERUIBATTERYMITIGATIONMANAGER_H

@class NSString, NSDate, NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUIBatteryMitigationManager : NSObject

@property NSUInteger decisionSignalID; // ivar: _decisionSignalID
@property (retain, nonatomic) NSString *defaultsDomain; // ivar: _defaultsDomain
@property (retain) NSDate *lastDOD0Update; // ivar: _lastDOD0Update
@property (retain, nonatomic) NSArray *lastDOD0Values; // ivar: _lastDOD0Values
@property (retain, nonatomic) NSArray *lastQMaxArray; // ivar: _lastQMaxArray
@property (retain) NSDate *lastQMaxUpdate; // ivar: _lastQMaxUpdate
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) NSUInteger testDaysSinceQmaxUpdate; // ivar: _testDaysSinceQmaxUpdate
@property (nonatomic) CGFloat timeSinceLastDOD0Update; // ivar: _timeSinceLastDOD0Update
@property (nonatomic) CGFloat timeSinceLastQmaxUpdate; // ivar: _timeSinceLastQmaxUpdate


-(CGFloat)additionalWaitTime;
-(CGFloat)additionalWaitTimeForDOD0WithInterval:(CGFloat)arg0 ;
-(CGFloat)additionalWaitTimeForQMaxWithInterval:(CGFloat)arg0 ;
-(CGFloat)additionalWaitTimeWithProperties:(id)arg0 ;
-(id)dod0ArrayFromBatteryProperties:(id)arg0 ;
-(id)initWithDefaultsDomain:(id)arg0 ;
-(id)qMaxFromBatteryProperties:(id)arg0 ;
-(id)readLastDOD0Update;
-(id)readLastDOD0Values;
-(id)readLastQMaxArray;
-(id)readLastQMaxUpdate;
-(void)updateLastDOD0Values:(id)arg0 atDate:(id)arg1 ;
-(void)updateLastQMaxArray:(id)arg0 atDate:(id)arg1 ;


@end


#endif