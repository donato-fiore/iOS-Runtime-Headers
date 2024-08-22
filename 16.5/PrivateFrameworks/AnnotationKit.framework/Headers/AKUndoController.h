// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKUNDOCONTROLLER_H
#define AKUNDOCONTROLLER_H

@class NSMutableSet, NSMapTable, NSString, NSUndoManager;

#import <Foundation/Foundation.h>

#import "AKController.h"

@interface AKUndoController : NSObject

@property (weak) AKController *controller; // ivar: _controller
@property BOOL externalSourceTrackingChanged; // ivar: _externalSourceTrackingChanged
@property (retain) NSMutableSet *observedAnnotations; // ivar: _observedAnnotations
@property (retain) NSMutableSet *observedPageModelControllers; // ivar: _observedPageModelControllers
@property BOOL undoGroupHasChangesToMultipleProperties; // ivar: _undoGroupHasChangesToMultipleProperties
@property (retain) NSMapTable *undoGroupOldPropertiesPerAnnotation; // ivar: _undoGroupOldPropertiesPerAnnotation
@property (retain) NSString *undoGroupPresentablePropertyName; // ivar: _undoGroupPresentablePropertyName
@property (retain) NSUndoManager *undoManager; // ivar: _undoManager


-(id)initWithController:(id)arg0 ;
-(void)_addAnnotationsFromModel:(id)arg0 ;
-(void)_annotationsWereAdded:(id)arg0 onPageController:(id)arg1 ;
-(void)_annotationsWillBeRemoved:(id)arg0 onPageController:(id)arg1 ;
-(void)_deleteAnnotationsFromModel:(id)arg0 ;
-(void)_endEditingOfTextIfAnnotationsDeleted:(id)arg0 ;
-(void)_registerUndoForSelectionOnPageModelController:(id)arg0 ;
-(void)_setAnnotationProperties:(id)arg0 ;
-(void)_startObservingAnnotations:(id)arg0 ;
-(void)_stopObservingAnnotations:(id)arg0 ;
-(void)_undoActionForSelectionState:(id)arg0 ;
-(void)dealloc;
-(void)observePageControllerRequestsDisableRegistration:(id)arg0 ;
-(void)observePageControllerRequestsEnableRegistration:(id)arg0 ;
-(void)observeUndoManagerCheckpoint:(id)arg0 ;
-(void)observeUndoManagerDetectedEdit:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObservingPageModelController:(id)arg0 ;
-(void)stopObservingPageModelController:(id)arg0 ;


@end


#endif