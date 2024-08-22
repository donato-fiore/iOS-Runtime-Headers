// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUAIRPORT_H
#define FUAIRPORT_H

@class NSString, CLPlacemark, NSTimeZone;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FUAirport : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSString *IATACode; // ivar: _IATACode
@property (retain) NSString *city; // ivar: _city
@property CLLocationCoordinate2D location; // ivar: _location
@property (retain) NSString *name; // ivar: _name
@property (retain) CLPlacemark *placemark; // ivar: _placemark
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchPlacemarkWithCompletionHandler:(id)arg0 ;


@end


#endif