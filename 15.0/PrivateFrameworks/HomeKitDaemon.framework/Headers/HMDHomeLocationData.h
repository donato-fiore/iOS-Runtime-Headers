// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMELOCATIONDATA_H
#define HMDHOMELOCATIONDATA_H

@class HMFObject, CLLocation, NSDate;
@protocol NSSecureCoding;



@interface HMDHomeLocationData : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSDate *locationUpdateTimestamp; // ivar: _locationUpdateTimestamp


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 locationUpdateTimestamp:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif