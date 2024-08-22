// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPHOTOGALLERYTRANSITIONANIMATOR_H
#define MKPHOTOGALLERYTRANSITIONANIMATOR_H

@class NSString, UIView;
@protocol UIViewControllerAnimatedTransitioning, MKPhotoGalleryTransitionAnimator;

#import <Foundation/Foundation.h>


@interface MKPhotoGalleryTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPhotoGalleryTransitionAnimator> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *transitionView; // ivar: _transitionView
@property (retain, nonatomic) UIView *view; // ivar: _view


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithView:(id)arg0 transitionView:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif