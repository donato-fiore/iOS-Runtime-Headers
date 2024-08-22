// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSTRETCHABLEIMAGE_H
#define _HKSTRETCHABLEIMAGE_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface _HKStretchableImage : NSObject

@property (retain, nonatomic) UIImage *bottomImage; // ivar: _bottomImage
@property (retain, nonatomic) UIImage *centerImage; // ivar: _centerImage
@property (retain, nonatomic) UIImage *singlePointImage; // ivar: _singlePointImage
@property (retain, nonatomic) UIImage *topImage; // ivar: _topImage


-(CGFloat)_desiredWidth;
-(void)_renderSingleImageInContext:(struct CGContext *)arg0 point:(struct CGPoint )arg1 contextBounds:(struct CGRect )arg2 alpha:(CGFloat)arg3 ;
-(void)_renderStretchedInContext:(struct CGContext *)arg0 frame:(struct CGRect )arg1 contextBounds:(struct CGRect )arg2 alpha:(CGFloat)arg3 ;
-(void)renderInContext:(struct CGContext *)arg0 topCenter:(struct CGPoint )arg1 bottomCenter:(struct CGPoint )arg2 contextBounds:(struct CGRect )arg3 alpha:(CGFloat)arg4 ;


@end


#endif