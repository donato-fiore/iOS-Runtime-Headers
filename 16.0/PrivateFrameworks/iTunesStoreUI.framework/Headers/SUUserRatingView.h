// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUUSERRATINGVIEW_H
#define SUUSERRATINGVIEW_H

@class UIView, UIImageView;



@interface SUUserRatingView : UIView {
    float _value;
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
}




+(CGFloat)reflectionHeight;
+(id)copyImageForRating:(float)arg0 backgroundColor:(id)arg1 style:(NSInteger)arg2 ;
-(float)heightWithoutReflection;
-(id)init;
-(id)initWithForeground:(id)arg0 background:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGRect )_foregroundImageClipBounds;
-(void)layoutSubviews;
-(void)setValue:(float)arg0 ;


@end


#endif