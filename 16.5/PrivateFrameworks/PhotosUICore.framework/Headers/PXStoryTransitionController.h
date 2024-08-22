// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTRANSITIONCONTROLLER_H
#define PXSTORYTRANSITIONCONTROLLER_H

@class NSMutableArray, NSError, NSString, NSArray;
@protocol PXChangeObserver, PXStoryMutableTransitionController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider, PXStoryTransitionSource;


#import "PXStoryController.h"
#import "PXStoryTransitionProducer.h"
#import "PXGEntityManager.h"
#import "PXStoryModel.h"
#import "PXStoryTransitionModel.h"

@interface PXStoryTransitionController : PXStoryController <PXChangeObserver, PXStoryMutableTransitionController, PXStoryDiagnosticHUDContentProvider, PXTapToRadarDiagnosticProvider>

 {
    NSMutableArray *_activeClipTransitions;
    PXStoryTransitionProducer *_transitionProducer;
}


@property (readonly, nonatomic) ? activeTransition; // ivar: _activeTransition
@property (retain, nonatomic) NSError *currentError; // ivar: _currentError
@property (nonatomic) NSInteger currentSegmentIdentifier; // ivar: _currentSegmentIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PXGEntityManager *entityManager; // ivar: _entityManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *interruptedTransitionErrorDescriptions; // ivar: _interruptedTransitionErrorDescriptions
@property (readonly, weak, nonatomic) PXStoryModel *model; // ivar: _model
@property (readonly, nonatomic) PXStoryTransitionModel *pendingTransitionModel; // ivar: _pendingTransitionModel
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<PXStoryTransitionSource> *transitionSource; // ivar: _transitionSource


+(BOOL)_isSupportedTransitionWithKind:(char)arg0 forClipWithResourceKind:(NSInteger)arg1 ;
-(BOOL)_canStartTransitionWithKind:(char)arg0 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)initWithModel:(id)arg0 transitionSource:(id)arg1 ;
-(void)_handleTransitionCompleted:(id)arg0 ;
-(void)_interruptActiveTransitions;
-(void)_reportInterruptedTransitionForNewTransitionBetweenSegmentWithIdentifier:(NSInteger)arg0 andSegmentWithIdentifier:(NSInteger)arg1 ;
-(void)_startTransition:(id)arg0 ;
-(void)_updateCurrentSegmentIdentifierIfNeeded;
-(void)_updatePendingTransitionModelWithSegmentTransitionInfo:(struct ? )arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)enumerateClipIdentifiersForActiveTransitionsUsingBlock:(id)arg0 ;
-(void)enumerateClipIdentifiersForPendingTransitionUsingBlock:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)startPendingTransitionIfNeeded;


@end


#endif