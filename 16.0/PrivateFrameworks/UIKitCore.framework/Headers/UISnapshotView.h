// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISNAPSHOTVIEW_H
#define UISNAPSHOTVIEW_H

@class NSMutableArray;


#import "UIView.h"
#import "UIColor.h"

@interface UISnapshotView : UIView {
    UIEdgeInsets _contentBeyondBounds;
    NSMutableArray *_edgePaddingViews;
    CGRect _snapshotRect;
    BOOL _disableEdgeAntialiasing;
    BOOL _disableVerticalStretch;
}


@property (nonatomic, getter=_contentOffset, setter=_setContentOffset:) CGPoint contentOffset; // ivar: _contentOffset
@property (readonly, nonatomic, getter=_contentSize) CGSize contentSize; // ivar: _contentSize
@property (nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) UIEdgeInsets edgePadding; // ivar: _edgePadding
@property (retain, nonatomic) UIColor *edgePaddingColor; // ivar: _edgePaddingColor
@property (retain, nonatomic) UIView *shadowView; // ivar: _shadowView
@property (nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) CGRect snapshotRect;
@property (readonly, nonatomic, getter=_snapshotView) UIView *snapshotView; // ivar: _imageView
@property (nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_contentsCenterForEdgePadding:(struct UIEdgeInsets )arg0 withContentSize:(struct CGSize )arg1 ;
-(void)_addEdgePaddingViewInRect:(struct CGRect )arg0 ;
-(void)_drawEdges:(struct UIEdgeInsets )arg0 withContentSize:(struct CGSize )arg1 ;
-(void)_positionImageView;
-(void)_updateContentsRect;
-(void)captureSnapshotOfView:(id)arg0 withSnapshotType:(int)arg1 ;
-(void)captureSnapshotRect:(struct CGRect )arg0 fromView:(id)arg1 withSnapshotType:(int)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentStretch:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif