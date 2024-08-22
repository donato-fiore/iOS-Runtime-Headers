// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMRETAKETRANSITIONANIMATOR_H
#define ICDOCCAMRETAKETRANSITIONANIMATOR_H

@class NSString, NSIndexPath, UIImage;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface ICDocCamRetakeTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (nonatomic) BOOL presenting; // ivar: _presenting
@property (retain, nonatomic) UIImage *retakeImage; // ivar: _retakeImage
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithImage:(id)arg0 indexPath:(id)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(id)makeUIImageFromCIImage:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif