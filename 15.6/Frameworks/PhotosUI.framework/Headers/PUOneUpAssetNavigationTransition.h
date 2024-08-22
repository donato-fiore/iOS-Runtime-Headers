// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUONEUPASSETNAVIGATIONTRANSITION_H
#define PUONEUPASSETNAVIGATIONTRANSITION_H

@class NSString;
@protocol PUOneUpAssetTransition;


#import "PUNavigationTransition.h"

@interface PUOneUpAssetNavigationTransition : PUNavigationTransition <PUOneUpAssetTransition>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_animateTransitionWithOperation:(NSInteger)arg0 ;
-(void)_prepareViewForTransition;
-(void)animatePopTransition;
-(void)animatePushTransition;


@end


#endif