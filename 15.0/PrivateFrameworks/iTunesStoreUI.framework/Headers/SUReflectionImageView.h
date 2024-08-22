// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUREFLECTIONIMAGEVIEW_H
#define SUREFLECTIONIMAGEVIEW_H

@class UIView, UIImageView;


#import "SUReflectionView.h"

@interface SUReflectionImageView : UIView {
    CGFloat _reflectionHeight;
    CGFloat _reflectionAlpha;
    BOOL _useImageSize;
    BOOL _nonSquareImage;
    UIImageView *_imageView;
    SUReflectionView *_reflection;
}


@property (nonatomic) BOOL nonSquareImage;
@property (nonatomic) CGFloat reflectionSpacing; // ivar: _spacing


-(id)init;
-(id)initWithReflectionHeight:(CGFloat)arg0 spacing:(CGFloat)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg0 ;
-(void)setReflectionAlphaWhenVisible:(CGFloat)arg0 ;
-(void)setReflectionVisible:(BOOL)arg0 ;
-(void)setUseImageSize:(BOOL)arg0 ;


@end


#endif