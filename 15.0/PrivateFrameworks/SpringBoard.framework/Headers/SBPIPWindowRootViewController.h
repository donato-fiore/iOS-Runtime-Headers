// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPWINDOWROOTVIEWCONTROLLER_H
#define SBPIPWINDOWROOTVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSHashTable, NSMapTable, NSArray, NSString;
@protocol SBPIPContainerViewControllerObserver, SBUIActiveOrientationObserver;


#import "SBPIPController.h"

@interface SBPIPWindowRootViewController : UIViewController <SBPIPContainerViewControllerObserver, SBUIActiveOrientationObserver>

 {
    SBPIPController *_pipController;
    NSMutableArray *_containerViewControllers;
    NSHashTable *_interfaceOrientationLockHashTable;
    NSMapTable *_containerViewControllerRequiredInterfaceOrientationMapTable;
    NSHashTable *_activeInterfaceOrientationObservers;
}


@property (nonatomic) NSInteger activeInterfaceOrientation; // ivar: _activeInterfaceOrientation
@property (readonly, nonatomic) NSArray *containerViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasOngoingMorphRestore;
-(BOOL)shouldAutorotate;
-(NSInteger)_interfaceOrientationForContainerViewController:(id)arg0 ;
-(NSInteger)_overrideInterfaceOrientationMechanics;
-(NSInteger)_overrideWindowActiveInterfaceOrientation;
-(NSInteger)_requiredInterfaceOrientationForContainerViewController:(id)arg0 ;
-(NSInteger)interfaceOrientationForContainerViewController:(id)arg0 ;
-(id)containerViewControllerForPictureInPictureContentViewController:(id)arg0 ;
-(id)initWithPIPController:(id)arg0 ;
-(void)_bringPGContentViewControllerWithContentTypeToFront:(NSInteger)arg0 ;
-(void)_layoutContainerViewControllers:(id)arg0 forceLayout:(BOOL)arg1 ;
-(void)_layoutInterfaceOrientationUnlockedContainerViewControllersAndForceLayout:(BOOL)arg0 ;
-(void)acquireInterfaceOrientationLockForContainerViewController:(id)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)addActiveOrientationObserver:(id)arg0 ;
-(void)addContainerViewController:(id)arg0 ;
-(void)bringTetheredChildViewControllersToFront;
-(void)containerViewControllerRequiredInterfaceOrientationDidChange:(id)arg0 ;
-(void)dealloc;
-(void)hideContainersExcludingContainerForContentViewControllerAndTetheredOnes:(id)arg0 animated:(BOOL)arg1 ;
-(void)layoutForActiveInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 forced:(BOOL)arg3 ;
-(void)relinquishInterfaceOrientationLockForContainerViewController:(id)arg0 ;
-(void)removeActiveOrientationObserver:(id)arg0 ;
-(void)removeContainerViewController:(id)arg0 ;
-(void)showAllContainersAnimated:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif