// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMAPCAMERAZOOMRANGE_H
#define MKMAPCAMERAZOOMRANGE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MKMapCameraZoomRange : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat maxCenterCoordinateDistance; // ivar: _maxCenterCoordinateDistance
@property (readonly, nonatomic) CGFloat minCenterCoordinateDistance; // ivar: _minCenterCoordinateDistance


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMapCameraZoomRange:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaxCenterCoordinateDistance:(CGFloat)arg0 ;
-(id)initWithMinCenterCoordinateDistance:(CGFloat)arg0 ;
-(id)initWithMinCenterCoordinateDistance:(CGFloat)arg0 maxCenterCoordinateDistance:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif