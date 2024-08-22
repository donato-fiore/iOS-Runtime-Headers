// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKROUNDEDCORNERMASKVIEW_H
#define NTKROUNDEDCORNERMASKVIEW_H

@class UIView, CALayer;



@interface NTKRoundedCornerMaskView : UIView {
    CALayer *_maskLayer;
}




+(id)_maskForDevice:(id)arg0 ;
+(id)_maskWithSize:(struct CGSize )arg0 screenScale:(CGFloat)arg1 cornerRadius:(CGFloat)arg2 ;
-(id)_initWithFrame:(struct CGRect )arg0 mask:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 screenScale:(CGFloat)arg1 cornerRadius:(CGFloat)arg2 ;


@end


#endif