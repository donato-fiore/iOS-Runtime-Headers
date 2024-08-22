// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMVIDEOCONFIGURATIONSTATUSINDICATOR_H
#define CAMVIDEOCONFIGURATIONSTATUSINDICATOR_H

@class UIImageView, UILabel;
@protocol CAMVideoConfigurationStatusIndicatorDelegate;


#import "CAMControlStatusIndicator.h"

@interface CAMVideoConfigurationStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) UIImageView *_borderImageView; // ivar: __borderImageView
@property (readonly, nonatomic) UILabel *_framerateLabel; // ivar: __framerateLabel
@property (nonatomic) CGSize _framerateSize; // ivar: __framerateSize
@property (readonly, nonatomic) UILabel *_resolutionLabel; // ivar: __resolutionLabel
@property (nonatomic) CGSize _resolutionSize; // ivar: __resolutionSize
@property (readonly, nonatomic) UILabel *_separatorLabel; // ivar: __separatorLabel
@property (nonatomic) CGSize _separatorSize; // ivar: __separatorSize
@property (nonatomic) NSInteger framerate; // ivar: _framerate
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger resolution; // ivar: _resolution
@property (weak, nonatomic) NSObject<CAMVideoConfigurationStatusIndicatorDelegate> *touchDelegate; // ivar: _touchDelegate


-(BOOL)_togglesFramerateForTouchAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_togglesResolutionForTouchAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_togglesResolutionOrFramerateForTouchAtLocation:(struct CGPoint )arg0 ;
-(BOOL)shouldUseOutline;
-(id)_separatorString;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)imageNameForCurrentState;
-(id)init;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct ? )_labelGeometryForSize:(struct CGSize )arg0 originX:(CGFloat)arg1 originY:(CGFloat)arg2 ;
-(struct CGSize )_sizingForLabel:(id)arg0 minWidth:(CGFloat)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_handleTouchAtLocation:(struct CGPoint )arg0 ;
-(void)_updateAppearance;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;
-(void)setOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif