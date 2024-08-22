// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSPEAKFINGERMANAGER_H
#define AXSPEAKFINGERMANAGER_H

@class AXUIClient, AXElement, NSString, NSArray, UIImpactFeedbackGenerator, AXOrator, NSMutableArray;
@protocol AXOratorDelegate, AXUIClientDelegate, AXUIService;

#import <Foundation/Foundation.h>


@interface AXSpeakFingerManager : NSObject <AXOratorDelegate, AXUIClientDelegate, AXUIService>

 {
    AXUIClient *_voiceOverDisplayManagerClient;
}


@property (retain, nonatomic) AXElement *currentSpeakFingerElement; // ivar: _currentSpeakFingerElement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *elementsForUnitTests; // ivar: _elementsForUnitTests
@property (retain, nonatomic) UIImpactFeedbackGenerator *hapticGenerator; // ivar: _hapticGenerator
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inUnitTestMode; // ivar: _inUnitTestMode
@property (nonatomic) CGPoint lastTouchPoint; // ivar: _lastTouchPoint
@property (retain, nonatomic) AXOrator *orator; // ivar: _orator
@property (nonatomic) NSUInteger speakFingerState; // ivar: _speakFingerState
@property (retain, nonatomic) NSString *springBoardActionHandlerId; // ivar: _springBoardActionHandlerId
@property (retain, nonatomic) NSMutableArray *stateUpdateBlocks; // ivar: _stateUpdateBlocks
@property (readonly) Class superclass;
@property (nonatomic) BOOL unitTestSpeaking; // ivar: _unitTestSpeaking


+(id)sharedInstance;
-(CGFloat)desiredWindowLevelForContentViewController:(id)arg0 userInteractionEnabled:(BOOL)arg1 ;
-(id)init;
-(id)processMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 fromClientWithIdentifier:(id)arg2 error:(*id)arg3 ;
-(void)_removeFocusRingForElement:(id)arg0 ;
-(void)_updateFocusRingForWebElement:(id)arg0 remove:(BOOL)arg1 ;
-(void)dealloc;
-(void)fingerWasLiftedInSpeakUnderFingerMode;
-(void)oratorDidFinishSpeaking:(id)arg0 ;
-(void)registerBlockForStateChange:(id)arg0 ;
-(void)setCursorFrame:(struct CGRect )arg0 withPath:(struct CGPath *)arg1 withContextId:(unsigned int)arg2 element:(id)arg3 forceRefresh:(BOOL)arg4 animated:(BOOL)arg5 ;
-(void)speakElementAtLocation:(struct CGPoint )arg0 ;
-(void)speakUnderFingerModeFinishedTalking;
-(void)speakUnderFingerModeStarted;
-(void)userManuallyExitedSpeakUnderFingerMode;


@end


#endif