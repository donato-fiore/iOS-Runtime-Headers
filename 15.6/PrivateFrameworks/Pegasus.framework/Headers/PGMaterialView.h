// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMATERIALVIEW_H
#define PGMATERIALVIEW_H

@class UIView, UIColor;


#import "PGLayoutContainerView.h"
#import "PGCABackdropLayerView.h"

@interface PGMaterialView : PGLayoutContainerView {
    UIView *_contentView;
    PGCABackdropLayerView *_backdropLayerView;
    UIColor *_backgroundColor;
}


@property (nonatomic, getter=isBackdropHidden) BOOL backdropHidden;
@property (readonly, nonatomic) UIView *contentView;


-(BOOL)PG_preferredVisibilityForView:(id)arg0 ;
-(CGFloat)_continuousCornerRadius;
-(CGFloat)_cornerRadius;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)addSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif