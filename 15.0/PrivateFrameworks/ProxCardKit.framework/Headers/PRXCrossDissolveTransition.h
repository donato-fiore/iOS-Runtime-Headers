// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXCROSSDISSOLVETRANSITION_H
#define PRXCROSSDISSOLVETRANSITION_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface PRXCrossDissolveTransition : NSObject <UIViewControllerAnimatedTransitioning>



@property (copy, nonatomic) id *additionalAnimations; // ivar: _additionalAnimations
@property (nonatomic) NSInteger cardStyle; // ivar: _cardStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize maxSize; // ivar: _maxSize
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif