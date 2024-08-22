// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPMULTIPLEIMAGEVIEW_H
#define LPMULTIPLEIMAGEVIEW_H

@class NSArray, NSMutableArray;


#import "LPComponentView.h"
#import "LPImageViewStyle.h"

@interface LPMultipleImageView : LPComponentView {
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}




-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 images:(id)arg1 style:(id)arg2 ;
-(struct CGRect )_computeRectForImageAtIndex:(NSUInteger)arg0 fittingSize:(struct CGSize *)arg1 width:(*CGFloat)arg2 height:(*CGFloat)arg3 size:(struct CGSize )arg4 multipleImageLayout:(NSUInteger)arg5 ;
-(struct CGSize )_availableSizeForImageNumber:(NSUInteger)arg0 withLayout:(NSUInteger)arg1 withinSize:(struct CGSize )arg2 applyingLayout:(BOOL)arg3 ;
-(struct CGSize )layoutImagesForSize:(struct CGSize )arg0 applyingLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)ensureImageViews;
-(void)layoutComponentView;


@end


#endif