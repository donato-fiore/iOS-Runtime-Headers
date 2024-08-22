// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PNPDOUBLETAPVIEWCONTROLLER_H
#define PNPDOUBLETAPVIEWCONTROLLER_H

@class NSString, UIPencilInteraction;
@protocol UIPencilInteractionDelegate, PNPPencilInteractionEventDestination, PNPWizardScratchpadViewDelegate;


#import "PNPWelcomeController.h"
#import "PNPPencilView.h"
#import "PNPQuickSwapEventSource.h"
#import "PNPWizardScratchpadView.h"

@interface PNPDoubleTapViewController : PNPWelcomeController <UIPencilInteractionDelegate, PNPPencilInteractionEventDestination, PNPWizardScratchpadViewDelegate>



@property (nonatomic) BOOL animationsCancelled; // ivar: _animationsCancelled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPencilInteraction *pencilInteraction; // ivar: _pencilInteraction
@property (retain, nonatomic) PNPPencilView *pencilView; // ivar: _pencilView
@property (retain, nonatomic) PNPQuickSwapEventSource *quickSwapEventSource; // ivar: _quickSwapEventSource
@property (retain, nonatomic) PNPWizardScratchpadView *scratchPadView; // ivar: _scratchPadView
@property (readonly) Class superclass;


+(id)_controllerWithType:(NSInteger)arg0 buttonType:(NSInteger)arg1 deviceType:(NSInteger)arg2 delegate:(id)arg3 ;
-(BOOL)scratchPadViewIsPlayingAnimation:(id)arg0 ;
-(void)eventSource:(id)arg0 hadPencilDoubleTapped:(id)arg1 ;
-(void)pencilInteractionDidTap:(id)arg0 ;
-(void)scratchPadViewHadInteractionEvent:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif