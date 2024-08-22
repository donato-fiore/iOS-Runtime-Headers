// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVRMALERTCONTROLLERTRANSITIONING_H
#define _TVRMALERTCONTROLLERTRANSITIONING_H

@class UIView, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface _TVRMAlertControllerTransitioning : NSObject <UIViewControllerAnimatedTransitioning>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPresentation; // ivar: _isPresentation
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif