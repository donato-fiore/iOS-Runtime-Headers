// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNOANIMATIONSEARCHFIELDANIMATOR_H
#define CKNOANIMATIONSEARCHFIELDANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface CKNoAnimationSearchFieldAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (nonatomic, getter=isAppearing) BOOL appearing; // ivar: _appearing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithAppearing:(BOOL)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif