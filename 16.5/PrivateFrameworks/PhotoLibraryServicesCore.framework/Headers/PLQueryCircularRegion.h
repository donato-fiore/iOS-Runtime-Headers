// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLQUERYCIRCULARREGION_H
#define PLQUERYCIRCULARREGION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLQueryCircularRegion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCenterLatitude:(CGFloat)arg0 centerLongitude:(CGFloat)arg1 radius:(CGFloat)arg2 identifier:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif