// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMODALUIFLUIDDISMISSGESTUREMANAGER_H
#define SBMODALUIFLUIDDISMISSGESTUREMANAGER_H

@class NSString;
@protocol SBHomeGesturePanGestureRecognizerInterfaceDelegate, BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SBAssistantController.h"
#import "SBModalUIFluidDismissGestureWorkspaceTransaction.h"
#import "SBHomeGestureInteraction.h"
#import "SBHomeGestureSettings.h"
#import "SBTransientOverlayPresentationManager.h"

@interface SBModalUIFluidDismissGestureManager : NSObject <SBHomeGesturePanGestureRecognizerInterfaceDelegate, BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate>



@property (readonly, nonatomic) SBAssistantController *assistantController; // ivar: _assistantController
@property (retain, nonatomic) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction; // ivar: _currentTransaction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureInteraction *homeGestureInteraction; // ivar: _homeGestureInteraction
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // ivar: _homeGestureSettings
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBTransientOverlayPresentationManager *transientOverlayPresentationManager; // ivar: _transientOverlayPresentationManager


-(BOOL)homeGestureInteraction:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(NSInteger)_dismissalTypeForCurrentContext;
-(NSInteger)touchInterfaceOrientationForGestureRecognizer:(id)arg0 ;
-(NSUInteger)homeGestureInteraction:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg0 ;
-(id)initWithTransientOverlayPresentationManager:(id)arg0 assistantController:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)handleGestureBegan:(id)arg0 initiatedFromBottomEdge:(BOOL)arg1 ;
-(void)handleGestureBegan:(id)arg0 initiatedFromBottomEdge:(BOOL)arg1 dismissalThreshold:(CGFloat)arg2 initiatedFromIndirectEdge:(BOOL)arg3 ;
-(void)handleGestureChanged:(id)arg0 ;
-(void)handleGestureEnded:(id)arg0 ;
-(void)homeGestureInteractionBegan:(id)arg0 ;
-(void)homeGestureInteractionCancelled:(id)arg0 ;
-(void)homeGestureInteractionChanged:(id)arg0 ;
-(void)homeGestureInteractionEnded:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)transactionDidComplete:(id)arg0 ;


@end


#endif