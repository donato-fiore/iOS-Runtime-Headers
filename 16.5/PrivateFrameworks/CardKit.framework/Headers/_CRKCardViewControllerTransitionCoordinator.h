// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CRKCARDVIEWCONTROLLERTRANSITIONCOORDINATOR_H
#define _CRKCARDVIEWCONTROLLERTRANSITIONCOORDINATOR_H

@class UIView, NSString;
@protocol CRKAnimationCoordinating;

#import <Foundation/Foundation.h>


@interface _CRKCardViewControllerTransitionCoordinator : NSObject <CRKAnimationCoordinating>



@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (copy, nonatomic) id *animations; // ivar: _animations
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (copy, nonatomic) id *finalSetup; // ivar: _finalSetup
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *initialSetup; // ivar: _initialSetup
@property (readonly) Class superclass;


-(id)init;


@end


#endif