// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FUFLIGHTLEG_H
#define FUFLIGHTLEG_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FUFlightStep.h"

@interface FUFlightLeg : NSObject <NSSecureCoding>



@property (retain) FUFlightStep *arrival; // ivar: _arrival
@property (retain) NSString *baggageClaim; // ivar: _baggageClaim
@property (readonly) CGFloat currentProgress;
@property (retain) FUFlightStep *departure; // ivar: _departure
@property CGFloat duration; // ivar: _duration
@property NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif