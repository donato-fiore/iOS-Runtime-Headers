// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLVEHICLESPEED_H
#define CLVEHICLESPEED_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLVehicleSpeed : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (readonly, nonatomic) CGFloat speed;
@property (readonly, nonatomic) NSDate *timestamp;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientVehicleSpeed:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif