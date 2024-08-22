// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVORGANIZERVIEW_H
#define _TVORGANIZERVIEW_H

@class TVFocusRedirectView, UIView, UIColor, NSArray, NSString, NSDictionary;
@protocol TVAppTemplateImpressionable;



@interface _TVOrganizerView : TVFocusRedirectView <TVAppTemplateImpressionable>

 {
    UIView *_lastFocusedView;
    UIView *_rightColumnDivider;
    UIView *_leftColumnDivider;
    CGFloat _showcaseFactor;
}


@property (retain, nonatomic) UIView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) UIColor *columnDividerColor; // ivar: _columnDividerColor
@property (nonatomic) CGFloat columnDividerPadding; // ivar: _columnDividerPadding
@property (nonatomic) BOOL columnDividersEnabled; // ivar: _columnDividersEnabled
@property (copy, nonatomic) NSArray *components; // ivar: _components
@property (nonatomic) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *divSizesByPosition; // ivar: _divSizesByPosition
@property (copy, nonatomic) NSDictionary *divsByPosition; // ivar: _divsByPosition
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *preferredFocusedComponent;
@property (nonatomic) BOOL remembersLastFocusedItem; // ivar: _remembersLastFocusedItem
@property (readonly) Class superclass;


-(BOOL)canBecomeFocused;
-(NSInteger)_positionFromView:(id)arg0 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )_contentSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )tv_alignmentInsetsForExpectedWidth:(CGFloat)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;


@end


#endif