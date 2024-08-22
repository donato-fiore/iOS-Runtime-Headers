// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTPHOTOCELL_H
#define NTKUPNEXTPHOTOCELL_H



#import "NTKUpNextBaseCell.h"

@interface NTKUpNextPhotoCell : NTKUpNextBaseCell {
    CGSize _scaledImageSize;
    CGRect _facesRect;
    CGFloat _aspectRatio;
    BOOL _wantsFullCellPhoto;
}




-(id)transitionContextInView:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)configureWithContent:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif