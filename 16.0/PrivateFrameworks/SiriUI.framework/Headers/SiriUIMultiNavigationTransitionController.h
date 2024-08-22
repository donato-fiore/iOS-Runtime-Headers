// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIMULTINAVIGATIONTRANSITIONCONTROLLER_H
#define SIRIUIMULTINAVIGATIONTRANSITIONCONTROLLER_H

@class NSArray, NSString, NSMutableArray, UINavigationController;
@protocol SiriUINavigationTransitioning, UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface SiriUIMultiNavigationTransitionController : NSObject <SiriUINavigationTransitioning>



@property (readonly, copy, nonatomic) NSArray *additionalCoordinationControllers;
@property (readonly, nonatomic) NSObject<UIViewControllerAnimatedTransitioning> *animationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_mutableAdditionalCoordinationControllers) NSMutableArray *mutableAdditionalCoordinationControllers; // ivar: _mutableAdditionalCoordinationControllers
@property (weak, nonatomic, getter=_navigationController, setter=_setNavigationController:) UINavigationController *navigationController; // ivar: _navigationController
@property (nonatomic) NSInteger operation; // ivar: _operation
@property (readonly, nonatomic) NSObject<SiriUINavigationTransitioning> *primaryTransitionController; // ivar: _primaryTransitionController
@property (readonly) Class superclass;


-(id)initWithPrimaryTransitionController:(id)arg0 ;
-(id)interactionControllerForAnimationController:(id)arg0 ;
-(void)addAdditionalCoordinationController:(id)arg0 ;
-(void)configureWithNavigationController:(id)arg0 ;
-(void)coordinateAdditionalTransitionsWithTransitionCoordinator:(id)arg0 ;


@end


#endif