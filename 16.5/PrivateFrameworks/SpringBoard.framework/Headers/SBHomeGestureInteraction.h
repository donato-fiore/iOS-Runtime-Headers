// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEGESTUREINTERACTION_H
#define SBHOMEGESTUREINTERACTION_H

@class NSString, NSSet, UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, SBHomeGestureInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SBSystemGestureManager.h"
#import "SBIndirectPanGestureRecognizer.h"
#import "SBHomeGesturePanGestureRecognizer.h"
#import "SBFluidScrunchGestureRecognizer.h"

@interface SBHomeGestureInteraction : NSObject <UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHomeGestureInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) SBSystemGestureManager *gestureManager; // ivar: _gestureManager
@property (readonly, nonatomic) NSSet *gestureRecognizers;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectPanGestureRecognizer; // ivar: _indirectPanGestureRecognizer
@property (readonly, nonatomic) CGFloat indirectScreenEdgeGestureRecognitionDistance;
@property (readonly, nonatomic) UIGestureRecognizer *recognizedGestureRecognizer;
@property (nonatomic) NSInteger recognizedGestureType; // ivar: _recognizedGestureType
@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *screenEdgePanGestureRecognizer; // ivar: _screenEdgePanGestureRecognizer
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *scrunchGestureRecognizer; // ivar: _scrunchGestureRecognizer
@property (readonly) Class superclass;


-(BOOL)_isGestureRunning:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSInteger)typeOfGestureRecognizer:(id)arg0 ;
-(id)gestureRecognizerForType:(NSInteger)arg0 ;
-(id)initWithSystemGestureManager:(id)arg0 delegate:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )translationInView:(id)arg0 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(void)_configureGestureRecognizers;
-(void)_configureIndirectPanGestureRecognizer;
-(void)_configureScreenEdgePanGestureRecognizer;
-(void)_configureScrunchGestureRecognizer;
-(void)_handleGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif