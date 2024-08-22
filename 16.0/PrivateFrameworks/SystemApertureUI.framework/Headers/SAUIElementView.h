// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIELEMENTVIEW_H
#define SAUIELEMENTVIEW_H

@class UIView, NSString;
@protocol SAUIElementLayoutAxisObserving, SAUIElementViewDelegate, SAUIElementViewProviding;


#import "_SAUIProvidedViewContainerView.h"

@interface SAUIElementView : UIView <SAUIElementLayoutAxisObserving>



@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SAUIElementViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SAUIElementViewProviding> *elementViewProvider; // ivar: _elementViewProvider
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger layoutAxis; // ivar: _layoutAxis
@property (retain, nonatomic) _SAUIProvidedViewContainerView *leadingTransformView; // ivar: _leadingTransformView
@property (retain, nonatomic) _SAUIProvidedViewContainerView *minimalTransformView; // ivar: _minimalTransformView
@property (readonly) Class superclass;
@property (retain, nonatomic) _SAUIProvidedViewContainerView *trailingTransformView; // ivar: _trailingTransformView


-(CGFloat)_paddingForView:(id)arg0 fromProvider:(id)arg1 inLayoutMode:(NSInteger)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithElementViewProvider:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )suggestedOutsetsForLayoutMode:(NSInteger)arg0 maximumOutsets:(struct NSDirectionalEdgeInsets )arg1 ;
-(void)_configureTransformViewsWithInitialLayoutRequiredForMinimalView:(*BOOL)arg0 leadingView:(*BOOL)arg1 trailingView:(*BOOL)arg2 ;
-(void)layoutSubviews;


@end


#endif