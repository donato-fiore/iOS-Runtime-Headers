// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKSIDECARCONTROLLER_H
#define AKSIDECARCONTROLLER_H

@class PKStroke, NSMutableSet;
@protocol OS_dispatch_source, AKSidecarControllerDelegate;

#import <Foundation/Foundation.h>

#import "AKInkOverlayView.h"
#import "AKAnnotation.h"
#import "AKController.h"

@interface AKSidecarController : NSObject {
    PKStroke *_currentStroke;
    AKInkOverlayView *_currentStrokeOverlay;
    NSObject<OS_dispatch_source> *_strokeTimer;
    BOOL _updatingModel;
    BOOL _ignoreKVOChanges;
    BOOL _handlingUndoRedo;
    BOOL _sendingCheckpoint;
    BOOL _needCheckpointSent;
    NSMutableSet *_coalescingAnnotationKeys;
    AKAnnotation *_coalescingAnnotationChange;
    NSObject<OS_dispatch_source> *_coalescingAnnotationSource;
}


@property (weak) AKController *controller; // ivar: _controller
@property (weak, nonatomic) NSObject<AKSidecarControllerDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableSet *observedAnnotations; // ivar: _observedAnnotations
@property (retain) NSMutableSet *observedPageModelControllers; // ivar: _observedPageModelControllers
@property (nonatomic) BOOL shouldObserveEdits; // ivar: _shouldObserveEdits


+(BOOL)validateInitialMessage:(id)arg0 applicationData:(id)arg1 ;
-(BOOL)_removeAnnotationUUID:(id)arg0 fromPageModelController:(id)arg1 ;
-(BOOL)_replaceAnnotation:(id)arg0 inPageModelController:(id)arg1 ;
-(BOOL)handleLiveStrokeBegan:(id)arg0 onInkOverlayView:(id)arg1 ;
-(NSUInteger)_indexOfAnnotationUUID:(id)arg0 annotations:(id)arg1 ;
-(id)_annotationWithUUID:(id)arg0 inPageModelController:(id)arg1 ;
-(id)_inkAnnotationFromPageModelController:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)_actuallySendAnnotationChange;
-(void)_annotation:(id)arg0 addedToPageController:(NSUInteger)arg1 selected:(BOOL)arg2 atIndex:(NSUInteger)arg3 ;
-(void)_annotation:(id)arg0 modifiedInPageController:(NSUInteger)arg1 properties:(id)arg2 ;
-(void)_annotation:(id)arg0 removedFromPageController:(NSUInteger)arg1 ;
-(void)_annotationsWereAdded:(id)arg0 onPageController:(id)arg1 isUndoingRedoing:(BOOL)arg2 ;
-(void)_annotationsWillBeRemoved:(id)arg0 onPageController:(id)arg1 isUndoingRedoing:(BOOL)arg2 ;
-(void)_coalesceAnnotationChange:(id)arg0 keyChange:(id)arg1 ;
-(void)_handleAnnotationAdd:(id)arg0 ;
-(void)_handleAnnotationModify:(id)arg0 ;
-(void)_handleAnnotationRemove:(id)arg0 ;
-(void)_handleInternalFailure;
-(void)_handleLiveStrokeUpdate;
-(void)_handleRedo:(id)arg0 ;
-(void)_handleSelectionChanged:(id)arg0 ;
-(void)_handleUndo:(id)arg0 ;
-(void)_handleUndoCheckpoint:(id)arg0 ;
-(void)_registerObservers;
-(void)_selectionChangedOnPageController:(id)arg0 ;
-(void)_sendDictionary:(id)arg0 ;
-(void)_startChangeUndoGroup;
-(void)_startObservingAnnotations:(id)arg0 ;
-(void)_stopObservingAnnotations:(id)arg0 ;
-(void)_unregisterObservers;
-(void)dealloc;
-(void)done;
-(void)handleIncomingOPACKObject:(id)arg0 ;
-(void)handleLiveStrokeComplete:(BOOL)arg0 ;
-(void)observePageControllerRequestsDisableRegistration:(id)arg0 ;
-(void)observePageControllerRequestsEnableRegistration:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObservingPageModelController:(id)arg0 ;
-(void)stopObservingPageModelController:(id)arg0 ;


@end


#endif