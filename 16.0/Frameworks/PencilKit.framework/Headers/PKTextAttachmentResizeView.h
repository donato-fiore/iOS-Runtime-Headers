// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTATTACHMENTRESIZEVIEW_H
#define PKTEXTATTACHMENTRESIZEVIEW_H

@class UIView;
@protocol PKTextAttachmentResizeViewDelegate;


#import "PKDrawingAdjustmentKnob.h"

@interface PKTextAttachmentResizeView : UIView

@property (weak, nonatomic) NSObject<PKTextAttachmentResizeViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) PKDrawingAdjustmentKnob *knobView; // ivar: _knobView
@property (nonatomic) UIEdgeInsets originalContentInset; // ivar: _originalContentInset
@property (nonatomic) CGRect originalDrawingBounds; // ivar: _originalDrawingBounds
@property (nonatomic) CGRect originalViewBounds; // ivar: _originalViewBounds
@property (readonly, nonatomic) CGFloat resizeContentInset;
@property (retain, nonatomic) UIView *separatorHighlightedView; // ivar: _separatorHighlightedView
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly, nonatomic) BOOL shown;
@property (readonly, nonatomic) BOOL top; // ivar: _top


+(CGFloat)resizeHitSize;
-(id)initAtTop:(BOOL)arg0 delegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)drawingScrollViewDidScroll:(id)arg0 ;
-(void)handleGesture:(id)arg0 ;
-(void)layoutInsideSuperview;
-(void)layoutSubviews;
-(void)show:(BOOL)arg0 enabled:(BOOL)arg1 animated:(BOOL)arg2 ;


@end


#endif