// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXBACKGROUNDPARALLAXIMAGECOMPONENTBEHAVIORHANDLER_H
#define SXBACKGROUNDPARALLAXIMAGECOMPONENTBEHAVIORHANDLER_H

@class UIView;


#import "SXComponentBehaviorHandler.h"

@interface SXBackgroundParallaxImageComponentBehaviorHandler : SXComponentBehaviorHandler

@property (readonly, nonatomic) CGFloat amplitude; // ivar: _amplitude
@property (retain, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (nonatomic) CGFloat originalYCenter; // ivar: _originalYCenter
@property (nonatomic) NSUInteger viewHierarchyIndex; // ivar: _viewHierarchyIndex
@property (retain, nonatomic) UIView *windowedScrollContentView; // ivar: _windowedScrollContentView


-(id)initWithComponentView:(id)arg0 withBehavior:(id)arg1 ;
-(void)destroyWindowedScroll;
-(void)destroyWithBehaviorController:(id)arg0 ;
-(void)setupWindowedScroll;
-(void)setupWithBehaviorController:(id)arg0 ;
-(void)updateWithBehaviorController:(id)arg0 ;


@end


#endif