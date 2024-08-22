// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLOUDTABITEMVIEW_H
#define CLOUDTABITEMVIEW_H

@class UIButton, UIView, SFScrollingPanGestureRecognizer, WBSCloudTab, NSString;
@protocol UIGestureRecognizerDelegate, CloudTabItemViewDelegate;


#import "CloudTabItemDeleteConfirmationView.h"

@interface CloudTabItemView : UIButton <UIGestureRecognizerDelegate>

 {
    UIView *_separatorView;
    UIView *_highlightView;
    BOOL _editing;
    CGFloat _startingSwipeOffset;
    CGFloat _swipeOffset;
    SFScrollingPanGestureRecognizer *_panGestureRecognizer;
    CloudTabItemDeleteConfirmationView *_deleteConfirmationView;
    CGFloat _leftEdgeInset;
}


@property (retain, nonatomic) WBSCloudTab *cloudTab; // ivar: _cloudTab
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CloudTabItemViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsSeparator;
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(CGFloat)_defaultItemHeightForTraitCollection:(id)arg0 ;
+(CGFloat)defaultHeightForTraitCollection:(id)arg0 ;
+(NSInteger)_numberOfLinesForTraitCollection:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)_swipeOffsetFromPanGestureRecognizer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_deleteButtonTapped:(id)arg0 ;
-(void)_panRecognized:(id)arg0 ;
-(void)_setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setUpDeleteConfirmationViewIfNecessary;
-(void)_updateStyle;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif