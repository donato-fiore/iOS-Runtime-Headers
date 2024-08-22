// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETSYSTEMGESTURESDELEGATE_H
#define SBCOVERSHEETSYSTEMGESTURESDELEGATE_H

@class NSString, UIGestureRecognizer, CSCoverSheetDismissGestureSettings, UIPanGestureRecognizer, UIViewController;
@protocol SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, SBIndirectPanGestureRecognizerOrientationProviding, SBCoverSheetSystemGestureDelegatePositionProviding;

#import <Foundation/Foundation.h>

#import "SBIndirectPanGestureRecognizer.h"
#import "SBFluidScrunchGestureRecognizer.h"

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, SBIndirectPanGestureRecognizerOrientationProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIGestureRecognizer *dismissAddendumGestureRecognizer; // ivar: _dismissAddendumGestureRecognizer
@property (weak, nonatomic) UIGestureRecognizer *dismissGestureRecognizer; // ivar: _dismissGestureRecognizer
@property (retain, nonatomic) CSCoverSheetDismissGestureSettings *dismissGestureSettings; // ivar: _dismissGestureSettings
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectDismissGestureRecognizer; // ivar: _indirectDismissGestureRecognizer
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectPresentGestureRecognizer; // ivar: _indirectPresentGestureRecognizer
@property (weak, nonatomic) NSObject<SBCoverSheetSystemGestureDelegatePositionProviding> *positionProvider; // ivar: _positionProvider
@property (weak, nonatomic) UIGestureRecognizer *preemptingGestureRecognizer; // ivar: _preemptingGestureRecognizer
@property (retain, nonatomic) UIPanGestureRecognizer *presentGestureRecognizer; // ivar: _presentGestureRecognizer
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *scrunchDismissGestureRecognizer; // ivar: _scrunchDismissGestureRecognizer
@property (readonly) Class superclass;
@property (nonatomic) int syntheticAppearState; // ivar: _syntheticAppearState
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_areAnyGesturesRecognizedInSet:(id)arg0 ;
-(BOOL)_canDismissGestureBegin;
-(BOOL)_canPresentGestureBegin;
-(BOOL)_isGestureActivelyRecognized:(id)arg0 ;
-(BOOL)_isGestureAllowedByTransientOverlaysOrTopmostApp;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAnyGestureActivelyRecognized;
-(BOOL)isDismissGestureActive;
-(BOOL)isDismissGestureAllowedToBegin;
-(BOOL)isPresentGestureActive;
-(BOOL)isPresentGestureAllowedToBegin;
-(NSInteger)indirectPanEffectiveInterfaceOrientation;
-(id)dismissGestures;
-(id)initWithViewController:(id)arg0 dismissGestureRecognizer:(id)arg1 dismissAddendumGestureRecognizer:(id)arg2 dismissalPreemptingGestureRecognizer:(id)arg3 ;
-(id)presentGestures;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)setPresentGestureFailureRequirements:(id)arg0 ;


@end


#endif