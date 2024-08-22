// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSCROLLABLESEGMENTEDPICKERCONTENTVIEW_H
#define MUSCROLLABLESEGMENTEDPICKERCONTENTVIEW_H

@class UIView, UIVisualEffectView, NSString, NSArray;
@protocol UIScrollViewDelegate, MUScrollableSegmentedPickerContentViewDelegate;


#import "MUScrollableStackView.h"
#import "MUGradientView.h"

@interface MUScrollableSegmentedPickerContentView : UIView <UIScrollViewDelegate>

 {
    MUScrollableStackView *_contentStackView;
    UIVisualEffectView *_backgroundBlurView;
    UIVisualEffectView *_selectedPillView;
    MUGradientView *_leadingGradientOverlayView;
    MUGradientView *_trailingGradientOverlayView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUScrollableSegmentedPickerContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(CGFloat)idealWidthForProposedSize:(struct CGSize )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleTapWithSegmentView:(id)arg0 ;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateGradientColors;
-(void)_updateGradientVisibility;
-(void)_updateSelectedIndexAnimated:(BOOL)arg0 invokeDelegate:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif