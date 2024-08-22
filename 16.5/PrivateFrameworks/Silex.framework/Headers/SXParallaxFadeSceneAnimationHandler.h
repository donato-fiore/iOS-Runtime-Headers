// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXPARALLAXFADESCENEANIMATIONHANDLER_H
#define SXPARALLAXFADESCENEANIMATIONHANDLER_H

@class UIView;


#import "SXSceneComponentAnimationHandler.h"
#import "SXComponentView.h"

@interface SXParallaxFadeSceneAnimationHandler : SXSceneComponentAnimationHandler

@property (nonatomic) CGFloat alphaDistance; // ivar: _alphaDistance
@property (nonatomic) NSUInteger attachmentType; // ivar: _attachmentType
@property (retain, nonatomic) SXComponentView *headerComponentView; // ivar: _headerComponentView
@property (retain, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (nonatomic) CGFloat scrollDistance; // ivar: _scrollDistance


-(BOOL)shouldFinishAtEndOfScrollView;
-(CGFloat)factorForVisibileBounds:(struct CGRect )arg0 andAbsoluteComponentRect:(struct CGRect )arg1 ;
-(id)componentViewToAnimate;
-(void)finishAnimation;
-(void)prepareAnimation;
-(void)startAnimation;
-(void)updateAnimationWithFactor:(CGFloat)arg0 ;


@end


#endif