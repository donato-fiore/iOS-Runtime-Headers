// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISLIDESHOWDISMISSALANIMATOR_H
#define SKUISLIDESHOWDISMISSALANIMATOR_H

@class NSString, UIImageView;
@protocol UIViewControllerAnimatorTransitioning;

#import <Foundation/Foundation.h>


@interface SKUISlideshowDismissalAnimator : NSObject <UIViewControllerAnimatorTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect imageRect; // ivar: _imageRect
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;


@end


#endif