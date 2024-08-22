// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRRELATIVEPOSITION_H
#define PRRELATIVEPOSITION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRAngleMeasurement.h"
#import "PRRangeMeasurement.h"

@interface PRRelativePosition : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) PRAngleMeasurement *azimuth; // ivar: _azimuth
@property (readonly) NSInteger cycleIndex; // ivar: _cycleIndex
@property (readonly, nonatomic) PRAngleMeasurement *elevation; // ivar: _elevation
@property (readonly, nonatomic) PRRangeMeasurement *range; // ivar: _range
@property (readonly) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)relativePositionWithTimestamp:(CGFloat)arg0 range:(id)arg1 azimuth:(id)arg2 elevation:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 range:(id)arg1 azimuth:(id)arg2 elevation:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif