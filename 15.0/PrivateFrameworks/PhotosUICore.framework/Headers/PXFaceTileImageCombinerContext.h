// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFACETILEIMAGECOMBINERCONTEXT_H
#define PXFACETILEIMAGECOMBINERCONTEXT_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface PXFaceTileImageCombinerContext : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (readonly, nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, nonatomic) CGFloat imageOffset; // ivar: _imageOffset
@property (readonly, nonatomic) CGFloat imageSize; // ivar: _imageSize
@property (readonly, nonatomic) BOOL isAscending; // ivar: _isAscending
@property (readonly, nonatomic) BOOL isRTL; // ivar: _isRTL


-(id)initWithDisplayScale:(CGFloat)arg0 isRTL:(BOOL)arg1 isAscending:(BOOL)arg2 imageSize:(CGFloat)arg3 imageOffset:(CGFloat)arg4 backgroundColor:(id)arg5 borderColor:(id)arg6 borderWidth:(CGFloat)arg7 ;


@end


#endif