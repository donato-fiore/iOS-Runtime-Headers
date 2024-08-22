// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIACTIONVIEW_H
#define SBUIACTIONVIEW_H

@class UIView, UIImageView, NSArray, MTVisualStylingProvider;


#import "SBUIActionViewLabel.h"
#import "SBUIAction.h"

@interface SBUIActionView : UIView {
    BOOL _interfaceOrientationIsPortrait;
    UIImageView *_imageView;
    UIView *_textContainer;
    SBUIActionViewLabel *_titleLabel;
    SBUIActionViewLabel *_subtitleLabel;
    UIView *_highlightView;
    NSArray *_imageViewLayoutConstraints;
    MTVisualStylingProvider *_visualStylingProviderStroke;
    MTVisualStylingProvider *_visualStylingProviderFill;
}


@property (readonly, nonatomic) SBUIAction *action; // ivar: _action
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) NSInteger imagePosition; // ivar: _imagePosition
@property (readonly, nonatomic) CGFloat leadingContentMargin;
@property (readonly, nonatomic) CGFloat trailingContentMargin;


-(id)initWithAction:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateVisualStyling;
-(void)_setupSubviews;
-(void)_updateImageViewLayoutConstraints;
-(void)_updateVisualStylingIfNecessary;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif