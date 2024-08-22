// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMZOOMBUTTONPLATTER_H
#define CAMZOOMBUTTONPLATTER_H

@class UIView, NSArray, UIImageView;


#import "CAMZoomButton.h"

@interface CAMZoomButtonPlatter : UIView

@property (readonly, nonatomic) NSArray *_allButtons; // ivar: __allButtons
@property (readonly, nonatomic) CAMZoomButton *_defaultZoomButton; // ivar: __defaultZoomButton
@property (readonly, nonatomic) UIImageView *_platterBackgroundView; // ivar: __platterBackgroundView
@property (readonly, nonatomic) CGFloat _zoomButtonPlatterMargin; // ivar: __zoomButtonPlatterMargin
@property (readonly, nonatomic) NSUInteger buttonCount; // ivar: _buttonCount
@property (nonatomic) NSInteger orientation;
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor
@property (readonly, nonatomic) CAMZoomButton *zoomFactorButton;
@property (copy, nonatomic) NSArray *zoomFactors; // ivar: _zoomFactors


-(CGFloat)baseZoomFactorForButton:(id)arg0 ;
-(id)_createPlatterImageForContentSize:(id)arg0 ;
-(id)initWithButtonCount:(NSUInteger)arg0 ;
-(id)nearestZoomButtonForTouch:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateButtonsAnimated:(BOOL)arg0 ;
-(void)_updateForContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif