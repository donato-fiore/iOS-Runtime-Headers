// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCCLICKINTERACTIONPRESENTEDVIEW_H
#define NCCLICKINTERACTIONPRESENTEDVIEW_H

@class UIView, UILabel, MTVisualStylingProvider, NSString, NSArray;
@protocol MTVisualStylingRequiring, PLContentSizeCategoryAdjusting;



@interface NCClickInteractionPresentedView : UIView <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>

 {
    UILabel *_titleLabel;
    CGSize _cachedSizeThatFits;
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithTitle:(id)arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureTitleLabelIfNecessaryWithTitle:(id)arg0 ;
-(void)_darkerSystemColorsStatusDidChange:(id)arg0 ;
-(void)_reduceTransparencyStatusDidChange:(id)arg0 ;
-(void)_updateTitleLabelAnchorPointAndPosition;
-(void)_updateTitleLabelTextAttributes;
-(void)_updateTitleLabelVisualStyling;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif