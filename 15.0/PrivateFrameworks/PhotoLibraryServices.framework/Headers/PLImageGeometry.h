// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLIMAGEGEOMETRY_H
#define PLIMAGEGEOMETRY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLImageGeometry : NSObject <NSCopying>



@property (nonatomic) NSInteger appliedOrientation;
@property (readonly, nonatomic) CGAffineTransform appliedTransform;
@property (readonly, nonatomic) NSInteger inputOrientation; // ivar: _inputOrientation
@property (readonly, nonatomic) CGRect inputRect; // ivar: _inputRect
@property (readonly, nonatomic, getter=isMirrored) BOOL mirrored;
@property (readonly, nonatomic) CGRect outputRect;
@property (readonly, nonatomic, getter=isSizeInverted) BOOL sizeInverted;
@property (nonatomic) NSInteger userOrientation; // ivar: _userOrientation


+(id)geometryWithInputSize:(struct CGSize )arg0 initialOrientation:(NSInteger)arg1 ;
+(id)geometryWithOutputSize:(struct CGSize )arg0 appliedOrientation:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithInputSize:(struct CGSize )arg0 inputOrientation:(NSInteger)arg1 ;
-(struct CGAffineTransform )_transformFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(struct CGAffineTransform )transformFromOrientation:(NSInteger)arg0 ;
-(struct CGAffineTransform )transformToOrientation:(NSInteger)arg0 ;
-(struct CGRect )_basisRect:(NSInteger)arg0 ;
-(struct CGRect )denormalizeRect:(struct CGRect )arg0 basis:(NSInteger)arg1 ;
-(struct CGRect )inputRectForOutputRect:(struct CGRect )arg0 ;
-(struct CGRect )normalizeRect:(struct CGRect )arg0 basis:(NSInteger)arg1 ;
-(struct CGRect )outputRectForInputRect:(struct CGRect )arg0 ;
-(void)applyOrientation:(NSInteger)arg0 ;
-(void)flipHorizontally;
-(void)flipVertically;
-(void)rotateClockwise;
-(void)rotateCounterClockwise;


@end


#endif