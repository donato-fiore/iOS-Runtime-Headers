// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDINFOGEOMETRY_H
#define TSDINFOGEOMETRY_H

@protocol TSDMixing, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying>

 {
    ? _flags;
}


@property (readonly, nonatomic) BOOL allValuesValidNumbers;
@property (readonly, nonatomic) CGFloat angle; // ivar: _angle
@property (readonly, nonatomic) CGRect boundsBeforeRotation;
@property (readonly, nonatomic) CGPoint center;
@property (readonly, nonatomic) CGAffineTransform fullTransform;
@property (readonly, nonatomic) BOOL heightValid;
@property (readonly, nonatomic) BOOL horizontalFlip;
@property (readonly, nonatomic) CGPoint position; // ivar: _position
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) CGAffineTransform transform;
@property (readonly, nonatomic) CGAffineTransform transformWithoutFlips;
@property (readonly, nonatomic) CGRect transformedBounds;
@property (readonly, nonatomic) CGPoint transformedBoundsOrigin;
@property (readonly, nonatomic) BOOL verticalFlip;
@property (readonly, nonatomic) BOOL widthValid;


+(id)geometryFromFullTransform:(struct CGAffineTransform )arg0 ;
+(id)geometryFromFullTransform:(struct CGAffineTransform )arg0 widthValid:(BOOL)arg1 heightValid:(BOOL)arg2 ;
+(id)geometryFromTransform:(struct CGAffineTransform )arg0 withSize:(struct CGSize )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualExceptForPosition:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)geometryByAppendingTransform:(struct CGAffineTransform )arg0 ;
-(id)geometryRelativeToGeometry:(id)arg0 ;
-(id)geometryWithNewBounds:(struct CGRect )arg0 ;
-(id)geometryWithParentGeometry:(id)arg0 ;
-(id)geometryWithValidNumbers;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithCenter:(struct CGPoint )arg0 size:(struct CGSize )arg1 ;
-(id)initWithFullTransform:(struct CGAffineTransform )arg0 widthValid:(BOOL)arg1 heightValid:(BOOL)arg2 ;
-(id)initWithHeight:(CGFloat)arg0 ;
-(id)initWithLayoutGeometry:(id)arg0 ;
-(id)initWithPosition:(struct CGPoint )arg0 size:(struct CGSize )arg1 ;
-(id)initWithPosition:(struct CGPoint )arg0 size:(struct CGSize )arg1 angle:(CGFloat)arg2 ;
-(id)initWithPosition:(struct CGPoint )arg0 size:(struct CGSize )arg1 widthValid:(BOOL)arg2 heightValid:(BOOL)arg3 horizontalFlip:(BOOL)arg4 verticalFlip:(BOOL)arg5 angle:(CGFloat)arg6 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithTransform:(struct CGAffineTransform )arg0 size:(struct CGSize )arg1 ;
-(id)initWithTransformedBoundsOrigin:(struct CGPoint )arg0 size:(struct CGSize )arg1 angle:(CGFloat)arg2 ;
-(id)initWithTransformedBoundsOrigin:(struct CGPoint )arg0 size:(struct CGSize )arg1 horizontalFlip:(BOOL)arg2 verticalFlip:(BOOL)arg3 angle:(CGFloat)arg4 ;
-(id)initWithWidth:(CGFloat)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)normalizedGeometry;
-(struct CGAffineTransform )transformBasedOnPoint:(struct CGPoint )arg0 centeredAtPoint:(struct CGPoint )arg1 ;
-(struct CGAffineTransform )transformBasedOnPoint:(struct CGPoint )arg0 centeredAtPoint:(struct CGPoint )arg1 withFlips:(BOOL)arg2 ;
-(struct CGAffineTransform )transformBasedOnRect:(struct CGRect )arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif