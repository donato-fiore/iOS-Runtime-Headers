// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPREROLLINDICATORVIEW_H
#define PGPREROLLINDICATORVIEW_H

@class UIView, UILabel, NSString;
@protocol PGButtonViewDelegate;


#import "PGDisplayLink.h"
#import "PGButtonView.h"
#import "PGControlsViewModel.h"

@interface PGPrerollIndicatorView : UIView <PGButtonViewDelegate>



@property (readonly, nonatomic) UILabel *contentTypeLabel; // ivar: _contentTypeLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PGDisplayLink *displayLink; // ivar: _displayLink
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize labelSize; // ivar: _labelSize
@property (copy, nonatomic) NSString *labelText;
@property (readonly, nonatomic) PGButtonView *skipPrerollButtonView; // ivar: _skipPrerollButtonView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *timeRemainingText;
@property (readonly, nonatomic) PGControlsViewModel *viewModel; // ivar: _viewModel


+(CGFloat)preferredHeight;
-(CGFloat)labelWidth;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 viewModel:(id)arg1 ;
-(struct CGAffineTransform )_subviewTransform;
-(struct CGRect )buttonView:(id)arg0 imageRectForContentRect:(struct CGRect )arg1 proposedRect:(struct CGRect )arg2 ;
-(struct CGRect )buttonView:(id)arg0 titleRectForContentRect:(struct CGRect )arg1 proposedRect:(struct CGRect )arg2 ;
-(struct UIEdgeInsets )buttonView:(id)arg0 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets )arg1 ;
-(void)_layoutContentTypeLabel;
-(void)_layoutSkipPrerollButton;
-(void)buttonViewDidReceiveTouchUpInside:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateValues;


@end


#endif