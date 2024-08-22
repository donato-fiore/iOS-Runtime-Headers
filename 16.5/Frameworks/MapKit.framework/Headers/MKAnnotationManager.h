// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKANNOTATIONMANAGER_H
#define MKANNOTATIONMANAGER_H

@class NSTimer, NSHashTable, NSMutableSet, NSMapTable, NSMutableDictionary, NSArray;
@protocol MKAnnotation, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKAnnotationRepresentation;

#import <Foundation/Foundation.h>

#import "MKQuadTrie.h"
#import "MKAnnotationView.h"

@interface MKAnnotationManager : NSObject {
    NSTimer *_updateVisibleTimer;
    MKQuadTrie *_annotations;
    NSHashTable *_visibleAnnotations;
    NSMutableSet *_pendingAnnotations;
    NSMutableSet *_disallowAnimationAnnotations;
    NSMutableSet *_invalidCoordinateAnnotations;
    id<MKAnnotation> *_selectedAnnotation;
    NSMapTable *_annotationsToRepresentations;
    NSMutableSet *_annotationRepresentations;
    NSMapTable *_reusableAnnotationRepresentations;
    NSMutableSet *_pendingRemovalAnnotationRepresentations;
    NSMutableDictionary *_registeredIdentifierToRepresentationClasses;
    NSHashTable *_allClusterAnnotations;
    BOOL _isChangingCoordinate;
    BOOL _isDeferringContainerSelection;
    BOOL _deferredContainerSelectionAnimated;
    MKAnnotationView *_userLocationView;
}


@property (readonly, nonatomic) NSArray *annotationRepresentations;
@property (nonatomic) BOOL annotationRepresentationsAreAddedImmediately; // ivar: _annotationRepresentationsAreAddedImmediately
@property (readonly, nonatomic) NSArray *annotations;
@property (weak, nonatomic) NSObject<MKAnnotationMarkerContainer> *container; // ivar: _container
@property (weak, nonatomic) NSObject<MKAnnotationManagerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<MKAnnotation> *draggedAnnotation; // ivar: _draggedAnnotation
@property (readonly, weak, nonatomic) NSObject<MKAnnotationRepresentation> *selectedAnnotationRepresentation;


-(BOOL)annotationIsInternal:(id)arg0 ;
-(BOOL)containsAnnotation:(id)arg0 ;
-(id)_addRepresentationForAnnotation:(id)arg0 ;
-(id)addRepresentationForAnnotation:(id)arg0 ;
-(id)annotationsInMapRect:(struct ? )arg0 ;
-(id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg0 ;
-(id)init;
-(id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg0 ;
-(id)representationForAnnotation:(id)arg0 ;
-(void)_addAnnotation:(id)arg0 updateVisible:(BOOL)arg1 ;
-(void)_annotationDidChangeState:(id)arg0 animated:(BOOL)arg1 ;
-(void)_removeAnnotation:(id)arg0 updateVisible:(BOOL)arg1 removeFromContainer:(BOOL)arg2 ;
-(void)_removeRepresentationForAnnotation:(id)arg0 fromCull:(BOOL)arg1 ;
-(void)_setupUpdateVisibleAnnotationsTimer;
-(void)addAnnotation:(id)arg0 ;
-(void)addAnnotation:(id)arg0 allowAnimation:(BOOL)arg1 ;
-(void)addAnnotations:(id)arg0 ;
-(void)addRepresentationsForAnnotations:(id)arg0 ;
-(void)cleanUpAnnotationRepresentationForRemoval:(id)arg0 ;
-(void)configureAnnotationRepresentation:(id)arg0 forAnnotation:(id)arg1 ;
-(void)configureDefaultAnnotationRepresentation:(id)arg0 forAnnotation:(id)arg1 ;
-(void)dealloc;
-(void)deselectAnnotation:(id)arg0 animated:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerClass:(Class)arg0 forRepresentationReuseIdentifier:(id)arg1 ;
-(void)removeAnnotation:(id)arg0 ;
-(void)removeAnnotation:(id)arg0 updateVisible:(BOOL)arg1 ;
-(void)removeAnnotations:(id)arg0 ;
-(void)replaceAnnotation:(id)arg0 withAnnotation:(id)arg1 ;
-(void)selectAnnotation:(id)arg0 animated:(BOOL)arg1 ;
-(void)showAnnotationsInMapRect:(struct ? )arg0 ;
-(void)updateVisibleAnnotations;


@end


#endif