// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLVEHICLEHEADING_H
#define CLVEHICLEHEADING_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) CGFloat trueHeading;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientVehicleHeading:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif