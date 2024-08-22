// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTRESERVESPACECONTROLLER_H
#define PKTEXTINPUTRESERVESPACECONTROLLER_H

@class NSTimer, NSString;
@protocol PKTextInputDebugStateReporting, PKTextInputReserveSpaceControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKTextInputElementContent.h"
#import "PKTextInputTextPlaceholder.h"
#import "PKTextInputFeedbackController.h"

@interface PKTextInputReserveSpaceController : NSObject <PKTextInputDebugStateReporting>



@property (nonatomic) BOOL _canvasControllerIsDrawing; // ivar: __canvasControllerIsDrawing
@property (retain, nonatomic) NSTimer *_dismissTimer; // ivar: __dismissTimer
@property (nonatomic) NSInteger _insertionCharacterLocation; // ivar: __insertionCharacterLocation
@property (nonatomic, setter=_setReserveSpaceState:) NSInteger _reserveSpaceState; // ivar: __reserveSpaceState
@property (retain, nonatomic, setter=_setTargetElementContent:) PKTextInputElementContent *_targetElementContent; // ivar: __targetElementContent
@property (nonatomic) CGPoint _targetPointInElement; // ivar: __targetPointInElement
@property (retain, nonatomic) PKTextInputTextPlaceholder *_textPlaceholder; // ivar: __textPlaceholder
@property (nonatomic) BOOL _wasAskedToReserveSpace; // ivar: __wasAskedToReserveSpace
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTextInputReserveSpaceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKTextInputFeedbackController *feedbackController; // ivar: _feedbackController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReserveSpaceActive;
@property (readonly, nonatomic) BOOL isReserveSpacePlaceholderVisible;
@property (readonly) Class superclass;


-(BOOL)tapPointIsInPlaceholder:(struct CGPoint )arg0 ;
-(NSInteger)_preferredInsertionLocation;
-(id)initWithFeedbackController:(id)arg0 ;
-(struct CGRect )placeholderFrameInCoordinateSpace:(id)arg0 ;
-(void)_finishAndResetStateInsertingWhitespace:(BOOL)arg0 ;
-(void)_handleAutodismissTimer;
-(void)_insertWhitespaceWithElement:(id)arg0 atReferencePoint:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)_moveToContentLoadedIfReady;
-(void)_moveToInsertingPlaceholderIfReady;
-(void)_moveToShowingIntroIfReady;
-(void)_moveToShowingPlaceholderIfReady;
-(void)_startDismissTimerWithDelay:(CGFloat)arg0 ;
-(void)_updateReserveSpaceState;
-(void)beginIfPossibleWithElement:(id)arg0 atLocation:(struct CGPoint )arg1 coordinateSpace:(id)arg2 ;
-(void)cancelReserveSpaceIntro;
-(void)finishReserveSpaceAndInsertWhitespace:(BOOL)arg0 ;
-(void)reportDebugStateDescription:(id)arg0 ;
-(void)reserveSpaceWhenReady;
-(void)setCanvasControllerIsDrawing:(BOOL)arg0 ;


@end


#endif