// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCROSSFADEVIEWANIMATOR_H
#define NUCROSSFADEVIEWANIMATOR_H


#import <Foundation/Foundation.h>


@interface NUCrossFadeViewAnimator : NSObject

@property (nonatomic) CGFloat duration; // ivar: _duration


-(id)init;
-(void)animateView:(id)arg0 toEmptyStateWithCompletion:(id)arg1 ;
-(void)animateView:(id)arg0 toValue:(id)arg1 completion:(id)arg2 ;
-(void)crossFadeFromView:(id)arg0 toView:(id)arg1 value:(id)arg2 completion:(id)arg3 ;
-(void)resetView:(id)arg0 ;


@end


#endif