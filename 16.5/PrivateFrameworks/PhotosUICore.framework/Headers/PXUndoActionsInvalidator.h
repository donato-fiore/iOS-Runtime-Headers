// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUNDOACTIONSINVALIDATOR_H
#define PXUNDOACTIONSINVALIDATOR_H

@class NSString, NSTimer, NSUndoManager;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "PXContentPrivacyController.h"

@interface PXUndoActionsInvalidator : NSObject <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isObservingApplicationState) BOOL observingApplicationState; // ivar: _observingApplicationState
@property (retain, nonatomic) PXContentPrivacyController *privacyController; // ivar: _privacyController
@property (readonly) Class superclass;
@property (nonatomic) BOOL timerDidClearUndoStack; // ivar: _timerDidClearUndoStack
@property (retain, nonatomic) NSTimer *undoClearingTimer; // ivar: _undoClearingTimer
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager


-(id)initWithUndoManager:(id)arg0 privacyController:(id)arg1 ;
-(void)beginObservingSystemEventsForAutomaticInvalidation;
-(void)clearUndoClearingTimer;
-(void)clearUndoStack;
-(void)dealloc;
-(void)invalidateUndoTimerIfNeeded;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)startUndoClearingTimer;
-(void)stopObservingSystemEventsForAutomaticInvalidation;


@end


#endif