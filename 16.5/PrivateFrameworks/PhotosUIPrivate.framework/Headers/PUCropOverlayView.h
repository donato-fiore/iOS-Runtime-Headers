// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCROPOVERLAYVIEW_H
#define PUCROPOVERLAYVIEW_H

@class UIView, NSArray;


#import "PUCropMaskView.h"

@interface PUCropOverlayView : UIView

@property (retain, nonatomic) PUCropMaskView *bottomMask; // ivar: _bottomMask
@property (nonatomic, getter=isCropGridVisible) BOOL cropGridVisible; // ivar: _cropGridVisible
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (nonatomic) CGRect cropRectInLocalCoordinateSpace; // ivar: _cropRectInLocalCoordinateSpace
@property (retain, nonatomic) UIView *cropWindowView; // ivar: _cropWindowView
@property (readonly, nonatomic) UIView *layoutReferenceItem;
@property (retain, nonatomic) PUCropMaskView *leftMask; // ivar: _leftMask
@property (retain, nonatomic) NSArray *maskViews; // ivar: _maskViews
@property (nonatomic, getter=isMaskedContentVisible) BOOL maskedContentVisible; // ivar: _maskedContentVisible
@property (retain, nonatomic) NSArray *oneNinthCropLines; // ivar: _oneNinthCropLines
@property (retain, nonatomic) NSArray *oneThirdCropLines; // ivar: _oneThirdCropLines
@property (retain, nonatomic) PUCropMaskView *rightMask; // ivar: _rightMask
@property (nonatomic, getter=isStraightenGridVisible) BOOL straightenGridVisible; // ivar: _straightenGridVisible
@property (retain, nonatomic) PUCropMaskView *topMask; // ivar: _topMask


-(NSUInteger)_subviewIndexForLineForCount:(NSUInteger)arg0 ;
-(id)_addLinesSpacedForCount:(NSUInteger)arg0 drawFirstAndLast:(BOOL)arg1 visible:(BOOL)arg2 ;
-(id)_createConstraintsForLine:(id)arg0 centerMultiplier:(CGFloat)arg1 vertical:(BOOL)arg2 ;
-(id)_createLineViewForCount:(NSUInteger)arg0 ;
-(id)_createMaskView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setGridViews:(id)arg0 visible:(BOOL)arg1 iVarVisibilePtr:(*BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updateCropRectInLocalCoordinateSpace;
-(void)layoutSubviews;


@end


#endif