// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCROPHANDLEVIEW_H
#define PUCROPHANDLEVIEW_H

@class UIView, NSArray, NSLayoutConstraint;



@interface PUCropHandleView : UIView

@property (retain, nonatomic, setter=_setLayoutReferenceView:) UIView *_layoutReferenceView; // ivar: __layoutReferenceView
@property (retain, nonatomic, setter=_setLineViews:) NSArray *_lineViews; // ivar: __lineViews
@property (retain, nonatomic, setter=_setLineWidthConstraint:) NSLayoutConstraint *_lineWidthConstraint; // ivar: __lineWidthConstraint
@property (retain, nonatomic, setter=_setOverlayViews:) NSArray *_overlayViews; // ivar: __overlayViews
@property (readonly, nonatomic) NSArray *adjacentHandles;
@property (readonly, nonatomic, getter=isBottom) BOOL bottom;
@property (readonly, nonatomic, getter=isCorner) BOOL corner;
@property (readonly, nonatomic) NSUInteger handle; // ivar: _handle
@property (readonly, nonatomic, getter=isLateral) BOOL lateral;
@property (readonly, nonatomic) id *layoutReferenceItem;
@property (readonly, nonatomic, getter=isLeft) BOOL left;
@property (nonatomic, getter=isLineWeightHeavy) BOOL lineWeightHeavy; // ivar: _lineWeightHeavy
@property (readonly, nonatomic) NSUInteger oppositeHandle;
@property (nonatomic, getter=isOverlayHidden) BOOL overlayHidden; // ivar: _overlayHidden
@property (readonly, nonatomic, getter=isRight) BOOL right;
@property (readonly, nonatomic, getter=isTop) BOOL top;


+(id)allHandles;
-(id)_createCornerOverlayView;
-(id)_createLineView;
-(id)initForHandle:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLineWidth;


@end


#endif