// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPLOCATION_H
#define NPLOCATION_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPLocation : NSObject <NSSecureCoding>



@property (readonly) BOOL isValid;
@property CGFloat latitude; // ivar: _latitude
@property CGFloat longtitude; // ivar: _longtitude
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longtitude:(CGFloat)arg1 timestamp:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif