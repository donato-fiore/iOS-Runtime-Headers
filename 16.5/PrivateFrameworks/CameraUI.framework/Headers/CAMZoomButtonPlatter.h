// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMZOOMBUTTONPLATTER_H
#define CAMZOOMBUTTONPLATTER_H

@class UIView, NSMutableArray, UIImageView, NSArray;


#import "CAMZoomButton.h"

@interface CAMZoomButtonPlatter : UIView

@property (readonly, nonatomic) NSMutableArray *_allButtons; // ivar: __allButtons
@property (readonly, nonatomic) UIImageView *_platterBackgroundView; // ivar: __platterBackgroundView
@property (nonatomic) NSInteger buttonAccessoryState; // ivar: _buttonAccessoryState
@property (readonly, nonatomic) NSUInteger buttonCount;
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor
@property (readonly, nonatomic) CAMZoomButton *zoomFactorButton;
@property (readonly, nonatomic) NSArray *zoomFactors; // ivar: _zoomFactors
@property (copy, nonatomic) NSArray *zoomPoints; // ivar: _zoomPoints


-(id)_createPlatterImageForContentSize:(id)arg0 ;
-(id)_createZoomButton;
-(id)_indexesForChanges:(id)arg0 ;
-(id)baseZoomPointForButton:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)nearestZoomButtonForTouch:(id)arg0 ;
-(struct CGSize )_intrinsicContentSizeForButtonCount:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateBackgroundAnimated:(BOOL)arg0 ;
-(void)_updateButtonAccessoryAnimated:(BOOL)arg0 ;
-(void)_updateButtonsAnimated:(BOOL)arg0 ;
-(void)_updateForContentSize;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif