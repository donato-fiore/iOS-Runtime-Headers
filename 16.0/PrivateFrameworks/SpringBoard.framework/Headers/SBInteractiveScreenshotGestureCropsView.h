// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINTERACTIVESCREENSHOTGESTURECROPSVIEW_H
#define SBINTERACTIVESCREENSHOTGESTURECROPSVIEW_H

@class UIView, NSArray, UIColor;
@protocol OS_dispatch_queue;



@interface SBInteractiveScreenshotGestureCropsView : UIView {
    UIView *_bottomLeftCornerHorizontalView;
    UIView *_bottomLeftCornerVerticalView;
    UIView *_bottomRightCornerHorizontalView;
    UIView *_bottomRightCornerVerticalView;
    UIView *_topLeftCornerHorizontalView;
    UIView *_topLeftCornerVerticalView;
    UIView *_topRightCornerHorizontalView;
    UIView *_topRightCornerVerticalView;
    UIView *_bottomLineView;
    UIView *_bottomLineGrabberView;
    UIView *_leftLineView;
    UIView *_leftLineGrabberView;
    UIView *_rightLineView;
    UIView *_rightLineGrabberView;
    UIView *_topLineView;
    UIView *_topLineGrabberView;
    NSArray *_cornerViews;
    NSArray *_lineViews;
    NSArray *_lineGrabberViews;
    NSObject<OS_dispatch_queue> *_accessQueue;
    CGFloat _queue_displayScale;
}


@property (nonatomic) CGFloat cornerAlpha; // ivar: _cornerAlpha
@property (retain, nonatomic) UIColor *cornerColor; // ivar: _cornerColor
@property (nonatomic) CGFloat cornerEdgeLength; // ivar: _cornerEdgeLength
@property (retain, nonatomic) id *cropsCompositingFilter; // ivar: _cropsCompositingFilter
@property (nonatomic) CGFloat grabberLineWidth; // ivar: _grabberLineWidth
@property (nonatomic) CGFloat lineAlpha; // ivar: _lineAlpha
@property (retain, nonatomic) UIColor *lineColor; // ivar: _lineColor
@property (nonatomic) CGFloat lineGrabberAlpha; // ivar: _lineGrabberAlpha
@property (retain, nonatomic) UIColor *lineGrabberColor; // ivar: _lineGrabberColor
@property (nonatomic) CGFloat lineGrabberEdgeLength; // ivar: _lineGrabberEdgeLength
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setPresentationValue:(id)arg0 forKey:(id)arg1 ;
-(void)_updateGeometryForBounds:(struct CGRect )arg0 shouldUsePresentationValues:(BOOL)arg1 ;
-(void)_updateGeometryOrDeferLayoutUsingModelBounds;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif