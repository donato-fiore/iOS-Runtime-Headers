// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASGEOCODERESULT_H
#define ASGEOCODERESULT_H

@class CNPostalAddress, CLLocation, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASGeoCodeResult : NSObject <NSSecureCoding>



@property (readonly) CNPostalAddress *address; // ivar: _address
@property (readonly) CLLocation *location; // ivar: _location
@property (readonly) NSDate *updated; // ivar: _updated


+(BOOL)supportsSecureCoding;
-(id)initWithAddress:(id)arg0 location:(id)arg1 updated:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif