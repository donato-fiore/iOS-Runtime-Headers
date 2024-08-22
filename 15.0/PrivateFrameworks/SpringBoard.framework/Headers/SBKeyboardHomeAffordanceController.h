// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKEYBOARDHOMEAFFORDANCECONTROLLER_H
#define SBKEYBOARDHOMEAFFORDANCECONTROLLER_H

@class NSHashTable, NSString;
@protocol SBHomeGrabberDelegate, SBSceneHandleObserver, SBUIActiveOrientationObserver, SBMainDisplaySceneManagerObserverPrivate;

#import <Foundation/Foundation.h>

#import "SBHomeGrabberRotationView.h"
#import "SBKeyboardHomeAffordanceAssertion.h"

@interface SBKeyboardHomeAffordanceController : NSObject <SBHomeGrabberDelegate, SBSceneHandleObserver, SBUIActiveOrientationObserver, SBMainDisplaySceneManagerObserverPrivate>

 {
    NSHashTable *_assertions;
    SBHomeGrabberRotationView *_homeGrabberView;
    BOOL _isHomeGrabberContainingViewAlwaysPortrait;
    BOOL _isKeyboardDocked;
    SBKeyboardHomeAffordanceAssertion *_topMostAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg0 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg0 ;
-(CGFloat)additionalEdgeSpacingForHomeGrabberView:(id)arg0 ;
-(id)init;
-(void)_didChangeAdditionalEdgeMarginForAssertion:(id)arg0 ;
-(void)_didChangeKeyboardDocked:(id)arg0 ;
-(void)_getHomeGrabberContainingView:(*id)arg0 isAlwaysPortrait:(*BOOL)arg1 ;
-(void)_updateHomeAffordance;
-(void)_updateTopMostAssertion;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)dealloc;
-(void)registerAssertion:(id)arg0 ;
-(void)sceneManagerUsingMedusaHostedKeyboardWindowDidChange:(id)arg0 ;
-(void)unregisterAssertion:(id)arg0 ;


@end


#endif