// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTACKEDIMAGEVIEW_H
#define SKUISTACKEDIMAGEVIEW_H

@class MPUBorderConfiguration, MPUStackView, MPUBorderDrawingCache, NSString, UIView;
@protocol MPUStackViewDataSource;


#import "SKUIImageView.h"

@interface SKUIStackedImageView : SKUIImageView <MPUStackViewDataSource>

 {
    MPUBorderConfiguration *_borderConfiguration;
    NSInteger _stackDepth;
    MPUStackView *_stackView;
}


@property (retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache; // ivar: _borderDrawingCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *perspectiveTargetView;
@property (readonly) Class superclass;
@property (nonatomic) CGPoint vanishingPoint;


+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
+(struct SKUIStackedImageConfiguration )_configurationForSize:(struct CGSize )arg0 ;
-(NSInteger)numberOfItemsInStackView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)performCompressionAnimationWithCompletionHandler:(id)arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)stackView:(id)arg0 applyAttributesToItem:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)stackView:(id)arg0 didCreateItem:(id)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif