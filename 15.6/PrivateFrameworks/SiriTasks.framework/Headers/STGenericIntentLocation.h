// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STGENERICINTENTLOCATION_H
#define STGENERICINTENTLOCATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STGenericIntentLocation : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isLatLong; // ivar: _isLatLong
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif