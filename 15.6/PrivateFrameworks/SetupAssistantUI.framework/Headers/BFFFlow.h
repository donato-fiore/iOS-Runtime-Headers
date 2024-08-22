// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BFFFLOW_H
#define BFFFLOW_H

@class NSArray, NSMutableArray, NSString, UIViewController<BFFFlowItem>;
@protocol BFFFlowItemDelegate, BFFNavigationControllerDelegate, BFFFlowItem, BFFFlowDelegate, BFFNavigationFlowDelegate;

#import <Foundation/Foundation.h>

#import "BFFNavigationController.h"
#import "BFFFlowStarter.h"

@interface BFFFlow : NSObject <BFFFlowItemDelegate, BFFNavigationControllerDelegate, BFFFlowItem>



@property (retain, nonatomic) NSArray *classList; // ivar: _classList
@property (retain, nonatomic) NSMutableArray *controllers; // ivar: _controllers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BFFFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIViewController<BFFFlowItem> *firstController; // ivar: _firstController
@property (weak, nonatomic) NSObject<BFFFlowItemDelegate> *flowItemDelegate; // ivar: _flowItemDelegate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *injector; // ivar: _injector
@property (readonly, weak, nonatomic) BFFNavigationController *navigationController; // ivar: _navigationController
@property (readonly, weak, nonatomic) NSObject<BFFNavigationFlowDelegate> *navigationFlowDelegate; // ivar: _navigationFlowDelegate
@property (readonly, weak, nonatomic) BFFFlowStarter *starter; // ivar: _starter
@property (readonly) Class superclass;


+(id)cloudConfigSkipKey;
+(id)internalSkipKey;
-(BOOL)controllerNeedsToRunForClass:(Class)arg0 ;
-(BOOL)isFlowItemOnTop:(id)arg0 ;
-(id)_viewControllerForBuddyController:(id)arg0 ;
-(id)controllerFollowingControllerClass:(Class)arg0 requestedNext:(Class)arg1 ;
-(id)createFlowItem:(Class)arg0 ;
-(id)firstItem;
-(id)initWithNavigationController:(id)arg0 flowDelegate:(id)arg1 flowStarter:(id)arg2 dependencyInjector:(id)arg3 ;
-(id)popToBuddyControllerWithClass:(Class)arg0 animated:(BOOL)arg1 ;
-(id)popToBuddyControllerWithClass:(Class)arg0 withOffset:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(id)precedingItems;
-(id)precedingItemsClasses;
-(void)configureFlowItem:(id)arg0 ;
-(void)dealloc;
-(void)flowItemCancelled:(id)arg0 ;
-(void)flowItemDone:(id)arg0 ;
-(void)flowItemDone:(id)arg0 nextItem:(id)arg1 ;
-(void)flowItemDone:(id)arg0 nextItemClass:(Class)arg1 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushFlowItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushFlowItem:(id)arg0 inFlow:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushFlowItem:(id)arg0 inFlow:(id)arg1 withExtendedInitialization:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)removeViewControllersOnNextPush:(id)arg0 ;
-(void)startFlowAnimated:(BOOL)arg0 ;


@end


#endif