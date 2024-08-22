// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONCIRCULARBASEVIEW_H
#define NTKRICHCOMPLICATIONCIRCULARBASEVIEW_H

@class UIView;


#import "NTKRichComplicationView.h"

@interface NTKRichComplicationCircularBaseView : NTKRichComplicationView {
    CGFloat _editingRotationInDegree;
}


@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIView *framingView; // ivar: _framingView
@property (nonatomic) NSInteger position; // ivar: _position


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(id)keylineImageWithFilled:(BOOL)arg0 forDevice:(id)arg1 ;
+(id)keylineImageWithFilled:(BOOL)arg0 wide:(BOOL)arg1 expanded:(BOOL)arg2 forDevice:(id)arg3 ;
+(id)keylineViewForDevice:(id)arg0 ;
+(id)keylineViewForDevice:(id)arg0 wide:(BOOL)arg1 expanded:(BOOL)arg2 ;
+(id)layoutRuleForState:(NSInteger)arg0 viewCenterInFaceBounds:(struct CGPoint )arg1 position:(NSInteger)arg2 editingAdjustment:(NSInteger)arg3 wide:(BOOL)arg4 forDevice:(id)arg5 ;
+(id)layoutRuleForState:(NSInteger)arg0 viewCenterInFaceBounds:(struct CGPoint )arg1 position:(NSInteger)arg2 forDevice:(id)arg3 ;
+(id)viewWithLegacyComplicationType:(NSUInteger)arg0 ;
+(struct CGAffineTransform )transformForState:(NSInteger)arg0 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg0 laterView:(id)arg1 isForward:(BOOL)arg2 animationType:(NSUInteger)arg3 animationDuration:(CGFloat)arg4 animationFraction:(float)arg5 ;
-(CGFloat)_contentDiameter;
-(NSUInteger)_adjustFontSizeForLabel:(id)arg0 fontWeight:(CGFloat)arg1 possibleMaxWidths:(id)arg2 possibleFontSizes:(id)arg3 ;
-(id)_createAndAddColoringLabel;
-(id)init;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)_setEditingTransitionFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 type:(NSInteger)arg3 ;
-(void)_setWhistlerAnalogEditingTransitonFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)makeBackgroundTransparent;


@end


#endif