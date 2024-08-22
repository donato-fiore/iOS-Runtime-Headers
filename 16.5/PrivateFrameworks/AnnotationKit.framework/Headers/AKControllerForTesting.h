// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKCONTROLLERFORTESTING_H
#define AKCONTROLLERFORTESTING_H

@class UIView;
@protocol AKControllerDelegateProtocol;


#import "AKController.h"
#import "AKActionController.h"
#import "AKAttributeController.h"
#import "AKLegacyDoodleController.h"
#import "AKMainEventHandler.h"
#import "AKModelController.h"
#import "AKSignatureModelController.h"
#import "AKToolController.h"
#import "AKUndoController.h"

@interface AKControllerForTesting : AKController

@property (retain) AKActionController *testingActionController; // ivar: _testingActionController
@property (retain) AKAttributeController *testingAttributeController; // ivar: _testingAttributeController
@property (retain) NSObject<AKControllerDelegateProtocol> *testingDelegate; // ivar: _testingDelegate
@property (retain) AKLegacyDoodleController *testingIntelligentSketchController; // ivar: _testingIntelligentSketchController
@property (retain) AKMainEventHandler *testingMainEventHandler; // ivar: _testingMainEventHandler
@property (retain) AKModelController *testingModelController; // ivar: _testingModelController
@property (retain) UIView *testingOverlayView; // ivar: _testingOverlayView
@property (retain) AKSignatureModelController *testingSignatureModelController; // ivar: _testingSignatureModelController
@property (retain) AKToolController *testingToolController; // ivar: _testingToolController
@property (retain) UIView *testingToolbarView; // ivar: _testingToolbarView
@property (retain) AKUndoController *testingUndoController; // ivar: _testingUndoController


+(void)renderAnnotation:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(BOOL)validateSender:(id)arg0 ;
-(id)actionController;
-(id)attributeController;
-(id)delegate;
-(id)init;
-(id)legacyDoodleController;
-(id)mainEventHandler;
-(id)modelController;
-(id)overlayView;
-(id)signatureModelController;
-(id)toolController;
-(id)toolbarView;
-(id)undoController;
-(void)performActionForSender:(id)arg0 ;
-(void)reloadVisibleToolbarItemIdentifiers;
-(void)setOverlayShouldPixelate:(BOOL)arg0 ;
-(void)updateOverlayViewAtIndex:(NSUInteger)arg0 ;


@end


#endif