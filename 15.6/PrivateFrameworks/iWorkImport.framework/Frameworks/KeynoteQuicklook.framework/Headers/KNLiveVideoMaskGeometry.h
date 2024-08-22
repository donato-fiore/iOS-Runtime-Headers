// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNLIVEVIDEOMASKGEOMETRY_H
#define KNLIVEVIDEOMASKGEOMETRY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KNLiveVideoMaskGeometry : NSObject <NSCopying>



@property (readonly, nonatomic) CGRect maskBounds; // ivar: _maskBounds
@property (readonly, nonatomic) CGPoint normalizedOffset; // ivar: _normalizedOffset
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMaskBounds:(struct CGRect )arg0 scale:(CGFloat)arg1 normalizedOffset:(struct CGPoint )arg2 ;
-(struct CGRect )videoBoundsForNaturalSize:(struct CGSize )arg0 ;
-(struct CGRect )videoTextureRectForNaturalSize:(struct CGSize )arg0 ;


@end


#endif