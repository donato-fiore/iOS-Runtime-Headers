// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIFOCUSBANNERVIEW_H
#define EKUIFOCUSBANNERVIEW_H

@class UIView, NSArray, NSString, UILabel, UIButton, NSLayoutConstraint;
@protocol UILargeContentViewerInteractionDelegate, EKUIFocusBannerViewDelegate;



@interface EKUIFocusBannerView : UIView <UILargeContentViewerInteractionDelegate>

 {
    NSArray *_activeConstraints;
    NSArray *_horizontalLayoutConstraints;
    NSArray *_verticalLayoutConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKUIFocusBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disallowAccessibilityTextSizes; // ivar: _disallowAccessibilityTextSizes
@property (retain, nonatomic) UILabel *focusFilterStateDescriptionLabel; // ivar: _focusFilterStateDescriptionLabel
@property (retain, nonatomic) UIButton *focusFilterToggleButton; // ivar: _focusFilterToggleButton
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layout; // ivar: _layout
@property (nonatomic) BOOL on; // ivar: _on
@property (nonatomic) BOOL showDividers; // ivar: _showDividers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topKeylineHeightConstraint; // ivar: _topKeylineHeightConstraint
@property (retain, nonatomic) UIView *topKeylineView; // ivar: _topKeylineView


-(NSUInteger)_effectiveLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_tapped;
-(void)_updateView;
-(void)largeContentViewerInteraction:(id)arg0 didEndOnItem:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif