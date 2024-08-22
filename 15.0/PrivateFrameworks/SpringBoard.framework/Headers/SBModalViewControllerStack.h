// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMODALVIEWCONTROLLERSTACK_H
#define SBMODALVIEWCONTROLLERSTACK_H

@class UIViewController, NSMutableArray, NSArray;
@protocol SBModalViewControllerStackDelegate;

#import <Foundation/Foundation.h>

#import "_SBModalViewControllerStackTransition.h"

@interface SBModalViewControllerStack : NSObject {
    UIViewController *_presentingViewController;
    NSMutableArray *_viewControllerStack;
    _SBModalViewControllerStackTransition *_currentTransition;
    NSMutableArray *_pendingTransitions;
}


@property (weak, nonatomic) NSObject<SBModalViewControllerStackDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIViewController *topViewController;
@property (readonly, nonatomic) NSArray *viewControllers;


-(id)_popNextPendingTransition;
-(id)initWithPresentingViewController:(id)arg0 ;
-(void)_addPendingTransition:(id)arg0 ;
-(void)_addViewController:(id)arg0 completion:(id)arg1 ;
-(void)_noteDidDismissViewController:(id)arg0 ;
-(void)_noteDidPresentViewController:(id)arg0 ;
-(void)_noteWillDismissViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)_noteWillPresentViewController:(id)arg0 ;
-(void)_performPendingTransitionIfNecessary;
-(void)_queuePendingTransition:(id)arg0 ;
-(void)_removePendingTransition:(id)arg0 forSuccess:(BOOL)arg1 ;
-(void)_removeViewController:(id)arg0 completion:(id)arg1 ;
-(void)_setCurrentTransition:(id)arg0 ;
-(void)addViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif