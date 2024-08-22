// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUFLIGHTSTEP_H
#define FUFLIGHTSTEP_H

@class NSNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "FUStepTime.h"
#import "FUAirport.h"

@interface FUFlightStep : NSObject <NSSecureCoding, NSCopying>

 {
    NSNumber *_delayFromSchedule;
}


@property (retain) FUStepTime *actualTime; // ivar: _actualTime
@property (retain) FUAirport *airport; // ivar: _airport
@property (retain, nonatomic) NSNumber *delayFromSchedule;
@property BOOL departure; // ivar: _departure
@property (retain) FUStepTime *estimatedTime; // ivar: _estimatedTime
@property (retain) NSString *gate; // ivar: _gate
@property NSInteger legStatus; // ivar: _legStatus
@property (retain) FUStepTime *plannedTime; // ivar: _plannedTime
@property (retain) FUStepTime *runwayTime; // ivar: _runwayTime
@property (retain) FUStepTime *scheduledTime; // ivar: _scheduledTime
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) BOOL taxiing;
@property (retain) NSString *terminal; // ivar: _terminal
@property (readonly) FUStepTime *time;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif