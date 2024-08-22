// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMANIPULATOR_H
#define SCNMANIPULATOR_H

@class NSOrderedSet, NSMutableIndexSet;

#import <Foundation/Foundation.h>

#import "SCNAuthoringEnvironment.h"
#import "SCNNode.h"
#import "SCNBillboardConstraint.h"

@interface SCNManipulator : NSObject {
    SCNAuthoringEnvironment *_authoringEnvironment;
    NSOrderedSet *_targets;
    SCNNode *_node;
    ? _xAxisToZAxisTransform;
    ? _yAxisToZAxisTransform;
    ? _xyPlaneToYZPlaneTransform;
    ? _xyPlaneToXZPlaneTransform;
    unsigned short _selectedAxis;
    ? _actionData;
    BOOL _isMouseDown;
    unsigned short _action;
    CGPoint _originalMouseLocation;
    ? _originalData;
    unsigned int _originalDataCount;
    ? _worldInitialMatrix;
    ? _worldMatrix;
    NSInteger _snapToAlignCount;
    *? _snapToAlignOnX;
    *? _snapToAlignOnY;
    *? _snapToAlignOnZ;
    NSMutableIndexSet *_snapXIndexes;
    NSMutableIndexSet *_snapYIndexes;
    NSMutableIndexSet *_snapZIndexes;
    SCNNode *_planarTranslationHandleXY;
    SCNNode *_planarTranslationHandleYZ;
    SCNNode *_planarTranslationHandleXZ;
    SCNNode *_planarTranslationHandles;
    SCNNode *_axis;
    SCNNode *_arcHandleXY;
    SCNNode *_arcHandleYZ;
    SCNNode *_arcHandleXZ;
    SCNNode *_arcHandles;
    SCNNode *_scaleNode;
    SCNNode *_screenSpaceRotation;
    SCNNode *_highlightNode;
    ? _planarTranslationLayout;
    BOOL _layoutLocked;
    SCNNode *_zArrow;
    SCNNode *_rotationHandles;
    SCNNode *_occluder;
    SCNNode *_translateHandles;
    SCNBillboardConstraint *_billboard;
    NSOrderedSet *_cloneSet;
    BOOL _cloning;
    NSUInteger _features;
    BOOL _alternateMode;
}


@property (readonly) SCNAuthoringEnvironment *authoringEnvironment;
@property (nonatomic) NSUInteger features;
@property (readonly) SCNNode *manipulatorNode;
@property (nonatomic) BOOL readonly; // ivar: _readonly
@property (retain, nonatomic) SCNNode *target;
@property (retain, nonatomic) NSOrderedSet *targets;
@property (readonly) SCNMatrix4 transform;
@property (nonatomic) NSInteger xAlignment; // ivar: _xAlignment
@property (nonatomic) NSInteger yAlignment; // ivar: _yAlignment
@property (nonatomic) NSInteger zAlignment; // ivar: _zAlignment


-(BOOL)_applyWithEvent:(struct ? )arg0 ;
-(BOOL)isDragging;
-(BOOL)mouseDown:(struct ? )arg0 ;
-(BOOL)mouseDragged:(struct ? )arg0 ;
-(BOOL)mouseMoved:(struct ? )arg0 ;
-(BOOL)mouseUp:(struct ? )arg0 ;
-(NSInteger)effectiveEditingSpace;
-(NSUInteger)_effectiveFeatures;
-(id)_snapPositionToAlign:(CGFloat)arg0 original:(BOOL)arg1 unit:(*BOOL)arg2 axisMove:(*NSInteger)arg3 rayStartrayDirdidSnapsnapIndexes;
-(id)copy;
-(id)hitTest:(struct ? )arg0 ;
-(id)init;
-(id)scene;
-(id)setupClones;
-(id)snapGuideIndexesOnAxis:(NSUInteger)arg0 ;
-(struct ? *)snapInfoAtIndex:(NSUInteger)arg0 axis:(NSUInteger)arg1 ;
-(void)_deleteOriginalData;
-(void)_prepareSnapToAlignData:(unsigned short)arg0 minOffsetmaxOffset;
-(void)_saveOriginalData;
-(void)_updateActionWithEvent:(struct ? )arg0 ;
-(void)_updateCloneStateWithEvent:(struct ? )arg0 ;
-(void)addClonesToScene;
-(void)clearSnapIndexes;
-(void)dealloc;
-(void)editingSpaceChanged;
-(void)lockLayout;
-(void)prepareSnapToAlignData;
-(void)prepareSnapToAlignDataIfNeeded;
-(void)removeClonesFromScene;
-(void)setAlternateMode:(BOOL)arg0 ;
-(void)setupNode;
-(void)unhighlightSelectedNode;
-(void)unlockLayout;
-(void)updateItemsPosition;
-(void)updateItemsRotation;
-(void)updateItemsScale:(float)arg0 ;
-(void)updateManipulatorComponents;
-(void)updateManipulatorNode;
-(void)updateManipulatorPosition:(struct __C3DEngineContext *)arg0 ;
-(void)validateClones;


@end


#endif