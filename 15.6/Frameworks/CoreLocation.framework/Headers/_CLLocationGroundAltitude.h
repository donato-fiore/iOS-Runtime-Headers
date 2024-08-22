// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CLLOCATIONGROUNDALTITUDE_H
#define _CLLOCATIONGROUNDALTITUDE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLLocationGroundAltitude : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat altitude;
@property (readonly, nonatomic) CGFloat altitudeWgs84; // ivar: _altitudeWgs84
@property (readonly, nonatomic) CGFloat estimate; // ivar: _estimate
@property (readonly, nonatomic) BOOL isAltitudeWgs84Available; // ivar: _isAltitudeWgs84Available
@property (readonly, nonatomic) CGFloat uncertainty; // ivar: _uncertainty
@property (readonly, nonatomic) CGFloat uncertaintyWgs84; // ivar: _uncertaintyWgs84
@property (readonly, nonatomic) CGFloat undulation; // ivar: _undulation
@property (readonly, nonatomic) int undulationModel; // ivar: _undulationModel


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEstimate:(CGFloat)arg0 uncertainty:(CGFloat)arg1 ;
-(id)initWithEstimate:(CGFloat)arg0 uncertainty:(CGFloat)arg1 undulation:(CGFloat)arg2 undulationModel:(int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif