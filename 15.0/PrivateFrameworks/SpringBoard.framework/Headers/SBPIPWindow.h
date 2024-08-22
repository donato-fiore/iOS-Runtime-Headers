// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPWINDOW_H
#define SBPIPWINDOW_H

@class NSArray;


#import "SBWindow.h"

@interface SBPIPWindow : SBWindow

@property (readonly, nonatomic) NSArray *containerViewControllers;


-(BOOL)isActive;
-(NSInteger)interfaceOrientationForContainerViewController:(id)arg0 ;
-(id)_pipWindowRootVC;
-(id)containerViewControllerForPictureInPictureContentViewController:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithPIPController:(id)arg0 ;
-(void)acquireInterfaceOrientationLockForContainerViewController:(id)arg0 ;
-(void)addActiveOrientationObserver:(id)arg0 ;
-(void)addContainerViewController:(id)arg0 ;
-(void)bringTetheredChildViewControllersToFront;
-(void)hideContainersExcludingContainerForContentViewControllerAndTetheredOnes:(id)arg0 animated:(BOOL)arg1 ;
-(void)relinquishInterfaceOrientationLockForContainerViewController:(id)arg0 ;
-(void)removeActiveOrientationObserver:(id)arg0 ;
-(void)removeContainerViewController:(id)arg0 ;
-(void)setRootViewController:(id)arg0 ;
-(void)showAllContainersAnimated:(BOOL)arg0 ;
-(void)updateActiveInterfaceOrientationForManualPictureInPictureStart;


@end


#endif