// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTROKESELECTIONIMAGECONFIG_H
#define PKSTROKESELECTIONIMAGECONFIG_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKStrokeSelectionImageConfig : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) CGRect imageViewBounds; // ivar: _imageViewBounds
@property (readonly, nonatomic) BOOL invertedColors; // ivar: _invertedColors
@property (readonly, nonatomic) BOOL rotated; // ivar: _rotated
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) BOOL sixChannel; // ivar: _sixChannel
@property (readonly, nonatomic) CGRect strokeBounds; // ivar: _strokeBounds


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStrokeBounds:(struct CGRect )arg0 imageViewBounds:(struct CGRect )arg1 scale:(CGFloat)arg2 imageSize:(struct CGSize )arg3 invertedColors:(BOOL)arg4 rotated:(BOOL)arg5 sixChannel:(BOOL)arg6 highlighted:(BOOL)arg7 ;


@end


#endif