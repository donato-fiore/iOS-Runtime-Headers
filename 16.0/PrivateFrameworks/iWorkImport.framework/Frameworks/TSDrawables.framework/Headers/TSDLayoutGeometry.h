// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDLAYOUTGEOMETRY_H
#define TSDLAYOUTGEOMETRY_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "TSDInfoGeometry.h"

@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGPoint center;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) CGAffineTransform fullTransform;
@property (readonly, nonatomic) TSDInfoGeometry *infoGeometry;
@property (readonly, nonatomic) CGAffineTransform inverseTransform;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) CGAffineTransform transform; // ivar: _transform


+(id)geometryFromFullTransform:(struct CGAffineTransform )arg0 ;
-(BOOL)differsInMoreThanTranslationFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)geometryByOutsettingBy:(struct CGSize )arg0 ;
-(id)geometryByTransformingBy:(struct CGAffineTransform )arg0 ;
-(id)geometryByTranslatingBy:(struct CGPoint )arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithInfoGeometry:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 transform:(struct CGAffineTransform )arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGAffineTransform )transformByConcatenatingTransformTo:(struct CGAffineTransform )arg0 ;


@end


#endif