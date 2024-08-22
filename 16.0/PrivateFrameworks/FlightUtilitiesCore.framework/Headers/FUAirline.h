// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FUAIRLINE_H
#define FUAIRLINE_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FUAirline : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSString *FAACode; // ivar: _FAACode
@property (retain) NSString *IATACode; // ivar: _IATACode
@property (retain) NSURL *URL; // ivar: _URL
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *phoneNumber; // ivar: _phoneNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif