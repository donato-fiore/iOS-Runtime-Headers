// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACTIONVIEW_H
#define CNACTIONVIEW_H

@class UIControl, NUIContainerStackView, NSString, UIImage, UIImageView, NUIContainerBoxView, UIView, UIFont, UILabel, TLKProminenceView;
@protocol UIGestureRecognizerDelegate, NUIContainerViewDelegate, CNActionViewDelegate;


#import "CNActionMenuHelper.h"

@interface CNActionView : UIControl <UIGestureRecognizerDelegate, NUIContainerViewDelegate>



@property (weak, nonatomic) NSObject<CNActionViewDelegate> *actionDelegate; // ivar: _actionDelegate
@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper; // ivar: _actionMenuHelper
@property (retain, nonatomic) NUIContainerStackView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NUIContainerStackView *horizontalContentView; // ivar: _horizontalContentView
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NUIContainerBoxView *platterBoxView; // ivar: _platterBoxView
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (retain, nonatomic) TLKProminenceView *vibrantBackgroundView; // ivar: _vibrantBackgroundView
@property (retain, nonatomic) TLKProminenceView *vibrantPlatterView; // ivar: _vibrantPlatterView


+(CGFloat)minimumPillDimension;
+(id)borderColorForDisabledBoldState;
+(id)colorByIncreasingBrightnessComponentByPercentage:(CGFloat)arg0 ofColor:(id)arg1 ;
+(id)contentColorForDisabledBoldState;
+(id)contentColorForDisabledVibrantDarkState;
+(id)defaultTitleFont;
+(id)titleFontForStyle:(NSInteger)arg0 ;
+(struct CGSize )minimumSizeForStyle:(NSInteger)arg0 ;
+(void)fadeInView:(id)arg0 ;
-(BOOL)shouldShowDisambiguation;
-(id)colorByAdjustingColorToHighlightState:(id)arg0 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)sourceViewForContextMenuPreview;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )platterViewMinimumLayoutSizeForStyle:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)applyDefaultLabelContainerMetrics;
-(void)applyRoundedRectMargins;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)didMoveToWindow;
-(void)handleTapGesture;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(void)updateBackground;
-(void)updateImage;
-(void)updateImageViewStateAnimated:(BOOL)arg0 ;
-(void)updateLabelArrangedSubviews;
-(void)updateLabelStateAnimated:(BOOL)arg0 ;
-(void)updatePlatterViewStateAnimated:(BOOL)arg0 ;
-(void)updateTitleLabelFont;
-(void)updateWithMenuItems:(id)arg0 ;


@end


#endif