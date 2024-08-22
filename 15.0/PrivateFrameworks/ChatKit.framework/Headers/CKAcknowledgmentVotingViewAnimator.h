// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKACKNOWLEDGMENTVOTINGVIEWANIMATOR_H
#define CKACKNOWLEDGMENTVOTINGVIEWANIMATOR_H

@class UIView, NSArray;
@protocol CKAcknowledgmentVotingViewAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface CKAcknowledgmentVotingViewAnimator : NSObject

@property (retain, nonatomic) UIView *animationContainerView; // ivar: _animationContainerView
@property (copy, nonatomic) NSArray *animatorModelItems; // ivar: _animatorModelItems
@property (weak, nonatomic) NSObject<CKAcknowledgmentVotingViewAnimatorDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *sectionAnimators; // ivar: _sectionAnimators


-(id)initWithCollectionView:(id)arg0 animatorModelItems:(id)arg1 acknowledgmentTypes:(id)arg2 ;
-(void)startAnimationWithDelay:(CGFloat)arg0 ;


@end


#endif