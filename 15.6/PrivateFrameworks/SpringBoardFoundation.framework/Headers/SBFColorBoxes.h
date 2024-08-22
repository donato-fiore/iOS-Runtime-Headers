// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFCOLORBOXES_H
#define SBFCOLORBOXES_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBFColorBoxes : NSObject <NSSecureCoding>



@property (readonly, nonatomic) *? colorBoxesRowMajor; // ivar: _colorBoxesRowMajor
@property (readonly, nonatomic) NSUInteger columnCount; // ivar: _columnCount
@property (readonly, nonatomic) NSUInteger downsampledBoxSize; // ivar: _downsampledBoxSize
@property (readonly, nonatomic) NSUInteger effectiveDownsampleFactor; // ivar: _effectiveDownsampleFactor
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) NSUInteger pixelHeight; // ivar: _pixelHeight
@property (readonly, nonatomic) NSUInteger pixelWidth; // ivar: _pixelWidth
@property (readonly, nonatomic) NSUInteger rowCount; // ivar: _rowCount
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly, nonatomic) unsigned char totalContrast8; // ivar: _totalContrast8


+(BOOL)supportsSecureCoding;
+(id)colorBoxesForImage:(id)arg0 ;
-(CGFloat)contrast;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorBoxes:(struct ? *)arg0 size:(NSUInteger)arg1 rowCount:(NSUInteger)arg2 columnCount:(NSUInteger)arg3 totalContrast8:(unsigned char)arg4 imageSize:(struct CGSize )arg5 downsampledBoxSize:(NSUInteger)arg6 effectiveDownsampleFactor:(NSUInteger)arg7 pixelHeight:(NSUInteger)arg8 pixelWidth:(NSUInteger)arg9 ;
-(struct ? *)colorBoxAtRow:(NSUInteger)arg0 col:(NSUInteger)arg1 ;
-(struct CGRect )rectForColorBoxAtRow:(NSUInteger)arg0 col:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif