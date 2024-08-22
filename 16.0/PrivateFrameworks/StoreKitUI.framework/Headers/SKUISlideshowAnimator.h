// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISLIDESHOWANIMATOR_H
#define SKUISLIDESHOWANIMATOR_H

@class NSString, UIImageView;
@protocol UIViewControllerAnimatorTransitioning;

#import <Foundation/Foundation.h>


@interface SKUISlideshowAnimator : NSObject <UIViewControllerAnimatorTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;


@end


#endif