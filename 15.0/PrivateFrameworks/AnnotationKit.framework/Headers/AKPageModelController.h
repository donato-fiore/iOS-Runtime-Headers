// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKPAGEMODELCONTROLLER_H
#define AKPAGEMODELCONTROLLER_H

@class NSMutableOrderedSet, NSMutableSet, NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "AKCropAnnotation.h"
#import "AKInkAnnotation.h"
#import "AKStatistics.h"

@interface AKPageModelController : NSObject {
    NSMutableOrderedSet *_mutableAnnotations;
    NSMutableSet *_mutableSelectedAnnotations;
}


@property (readonly) NSArray *annotations;
@property CGRect appliedCropRect; // ivar: _appliedCropRect
@property (retain) AKCropAnnotation *cropAnnotation; // ivar: _cropAnnotation
@property (retain) AKInkAnnotation *inkCanvasAnnotation; // ivar: _inkCanvasAnnotation
@property (weak) id *representedObject; // ivar: _representedObject
@property (readonly) NSSet *selectedAnnotations;
@property (weak, nonatomic) AKStatistics *statisticsLogger; // ivar: _statisticsLogger


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)containsAnnotation:(id)arg0 ;
-(BOOL)hasMaskBorderAnnotation;
-(id)archivableRepresentation;
-(id)init;
-(id)initWithArchivableRepresentation:(id)arg0 ;
-(id)selectionStateForUndo;
-(void)_coalescedEnsureInkAnnotationIsInFront:(id)arg0 ;
-(void)_enableEditObservationForAnnotationIfNew:(id)arg0 ;
-(void)_ensureInkAnnotationIsInFrontWhenEditsAreDone;
-(void)_logAnnotationAdded:(id)arg0 ;
-(void)_postSelectedAnnotationsChangedNotification;
-(void)addCropToolAnnotation;
-(void)addSelectedAnnotations:(id)arg0 ;
-(void)addSelectedAnnotationsObject:(id)arg0 ;
-(void)bringSelectedAnnotationsForward;
-(void)bringSelectedAnnotationsToFront;
-(void)insertAnnotations:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertObject:(id)arg0 inAnnotationsAtIndex:(NSUInteger)arg1 ;
-(void)intersectSelectedAnnotations:(id)arg0 ;
-(void)removeAllAnnotations;
-(void)removeAnnotationsAtIndexes:(id)arg0 ;
-(void)removeCropToolAnnotation;
-(void)removeObjectFromAnnotationsAtIndex:(NSUInteger)arg0 ;
-(void)removeSelectedAnnotations:(id)arg0 ;
-(void)removeSelectedAnnotationsObject:(id)arg0 ;
-(void)replaceAnnotationsAtIndexes:(id)arg0 withAnnotations:(id)arg1 ;
-(void)replaceObjectInAnnotationsAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)restoreSelectionStateForUndo:(id)arg0 ;
-(void)selectAllAnnotations;
-(void)selectAnnotation:(id)arg0 byExtendingSelection:(BOOL)arg1 ;
-(void)selectAnnotationsAtIndexes:(id)arg0 byExtendingSelection:(BOOL)arg1 ;
-(void)sendSelectedAnnotationsBackward;
-(void)sendSelectedAnnotationsToBack;


@end


#endif