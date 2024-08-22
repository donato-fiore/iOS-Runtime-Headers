// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVAPRDEVICE_H
#define CVAPRDEVICE_H

@class NSUUID, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CVAPRAngleMeasurement.h"
#import "CVAPRRangeMeasurement.h"

@interface CVAPRDevice : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) CVAPRAngleMeasurement *azimuth; // ivar: _azimuth
@property (retain, nonatomic) CVAPRAngleMeasurement *elevation; // ivar: _elevation
@property (nonatomic) CGFloat mach_continuous_time; // ivar: _mach_continuous_time
@property (nonatomic) NSInteger measurementNumber; // ivar: _measurementNumber
@property (nonatomic) CGFloat measurementTimestamp; // ivar: _measurementTimestamp
@property (retain, nonatomic) CVAPRRangeMeasurement *range; // ivar: _range
@property (nonatomic) NSInteger referenceFrame; // ivar: _referenceFrame
@property (retain, nonatomic) NSNumber *sessionID; // ivar: _sessionID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat utc_time; // ivar: _utc_time


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addTimes;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif