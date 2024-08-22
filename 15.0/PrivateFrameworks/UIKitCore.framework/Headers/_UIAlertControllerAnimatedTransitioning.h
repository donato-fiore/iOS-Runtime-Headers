// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALERTCONTROLLERANIMATEDTRANSITIONING_H
#define _UIALERTCONTROLLERANIMATEDTRANSITIONING_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "UIAlertController.h"
#import "UIInteractionProgress.h"

@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIInteractionProgress *interactionProgress; // ivar: _interactionProgress
@property (getter=isPresentation) BOOL presentation; // ivar: _presentation
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_alertControllerForContext:(id)arg0 ;
-(id)initWithInteractionProgress:(id)arg0 ;
-(void)_animateTransition:(id)arg0 completionBlock:(id)arg1 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif