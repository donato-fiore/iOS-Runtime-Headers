// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFLOATINGCARDPRESENTATIONCONTROLLER_H
#define PXFLOATINGCARDPRESENTATIONCONTROLLER_H

@class UIViewController<PXFloatingCardContainer>, NSString;
@protocol PXFloatingCardGestureCoordinatorDelegate, PXFloatingCardViewControllerDelegate, PXFloatingCardPresentationControllerDelegate, PXFloatingCardLayout;

#import <Foundation/Foundation.h>

#import "PXFloatingCardViewController.h"
#import "PXFloatingCardGestureCoordinator.h"

@interface PXFloatingCardPresentationController : NSObject <PXFloatingCardGestureCoordinatorDelegate, PXFloatingCardViewControllerDelegate>



@property (weak, nonatomic) PXFloatingCardViewController *cardViewController; // ivar: _cardViewController
@property (weak, nonatomic) UIViewController<PXFloatingCardContainer> *containerViewController; // ivar: _containerViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXFloatingCardPresentationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFloatingCardGestureCoordinator *gestureCoordinator; // ivar: _gestureCoordinator
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPresenting; // ivar: _isPresenting
@property (retain, nonatomic) NSObject<PXFloatingCardLayout> *layout; // ivar: _layout
@property (readonly) Class superclass;


-(CGFloat)availableHeightForCardViewController:(id)arg0 ;
-(id)initWithContainerViewController:(id)arg0 ;
-(void)_addChildViewController:(id)arg0 toParentViewController:(id)arg1 ;
-(void)_applyLayout;
-(void)_removeChildViewControllerFromParent:(id)arg0 ;
-(void)cardViewController:(id)arg0 didUpdateHeight:(CGFloat)arg1 ;
-(void)cardViewController:(id)arg0 didUpdatePosition:(NSUInteger)arg1 ;
-(void)dimAnimated:(BOOL)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)floatingCardViewControllerDismissTapped:(id)arg0 ;
-(void)gestureCoordinatorDidBeginInteraction:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif