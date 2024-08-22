// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDIMAGEDATAATTRIBUTES_H
#define TSDIMAGEDATAATTRIBUTES_H

@class TSPDataAttributes;



@interface TSDImageDataAttributes : TSPDataAttributes

@property (readonly, nonatomic) BOOL hasImageIsSRGB; // ivar: _hasImageIsSRGB
@property (readonly, nonatomic) BOOL hasPixelSize; // ivar: _hasPixelSize
@property (readonly, nonatomic) BOOL imageIsSRGB; // ivar: _imageIsSRGB
@property (readonly, nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (readonly, nonatomic) BOOL shouldBeInterpretedAsGenericIfUntagged; // ivar: _shouldBeInterpretedAsGenericIfUntagged


-(id)copyWithIsSRGB:(BOOL)arg0 ;
-(id)copyWithPixelSize:(struct CGSize )arg0 ;
-(id)copyWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIsSRGB:(BOOL)arg0 ;
-(id)initWithMessage:(*void)arg0 ;
-(id)initWithPixelSize:(struct CGSize )arg0 ;
-(id)initWithShouldBeInterpretedAsGenericIfUntagged:(BOOL)arg0 ;
-(struct CGSize )size;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif