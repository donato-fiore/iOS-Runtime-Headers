// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIVIEWCONTROLLERFADETHROUGHCOLORTRANSITION_H
#define PXUIVIEWCONTROLLERFADETHROUGHCOLORTRANSITION_H

@class NSString, UIColor;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface PXUIViewControllerFadeThroughColorTransition : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIColor *midpointColor; // ivar: _midpointColor
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(id)initWithDuration:(CGFloat)arg0 midpointColor:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif