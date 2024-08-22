// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPBEACONOBSERVATION_H
#define SPBEACONOBSERVATION_H

@class NSUUID, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPObservationLocation.h"

@interface SPBeaconObservation : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) SPObservationLocation *location; // ivar: _location
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithBeaconIdentifier:(id)arg0 type:(NSInteger)arg1 date:(id)arg2 location:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif