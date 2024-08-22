// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLLOCATIONGNSSODOMETERINFO_H
#define CLLOCATIONGNSSODOMETERINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLLocationGnssOdometerInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat deltaDistance; // ivar: _deltaDistance
@property (readonly, nonatomic) CGFloat deltaDistanceAccuracy; // ivar: _deltaDistanceAccuracy
@property (readonly, nonatomic) CGFloat odometer; // ivar: _odometer


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOdometer:(CGFloat)arg0 deltaDistance:(CGFloat)arg1 deltaDistanceAccuracy:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif