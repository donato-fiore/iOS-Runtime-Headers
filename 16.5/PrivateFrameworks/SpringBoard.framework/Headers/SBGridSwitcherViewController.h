// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBGRIDSWITCHERVIEWCONTROLLER_H
#define SBGRIDSWITCHERVIEWCONTROLLER_H

@class NSString;
@protocol SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate;


#import "SBFluidSwitcherViewController.h"

@interface SBGridSwitcherViewController : SBFluidSwitcherViewController <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)targetItemForSpringLoadingInteractionInView:(id)arg0 atLocation:(struct CGPoint )arg1 forDropSession:(id)arg2 ;
-(id)targetViewForSpringLoadingEffectForView:(id)arg0 ;
-(void)_setupSpringLoadingSupport;
-(void)viewDidLoad;


@end


#endif