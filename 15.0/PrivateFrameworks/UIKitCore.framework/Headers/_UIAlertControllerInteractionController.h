// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALERTCONTROLLERINTERACTIONCONTROLLER_H
#define _UIALERTCONTROLLERINTERACTIONCONTROLLER_H

@class NSString;
@protocol UIForceInteractionController, UIInteractionProgressObserver, UIViewControllerContextTransitioning;


#import "UIPercentDrivenInteractiveTransition.h"
#import "UIAlertController.h"

@interface _UIAlertControllerInteractionController : UIPercentDrivenInteractiveTransition <UIForceInteractionController, UIInteractionProgressObserver>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)startInteractiveTransition:(id)arg0 ;


@end


#endif