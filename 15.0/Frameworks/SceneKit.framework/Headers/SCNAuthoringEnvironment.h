// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNAUTHORINGENVIRONMENT_H
#define SCNAUTHORINGENVIRONMENT_H

@class NSSet, NSMutableOrderedSet, NSArray, NSMutableArray;
@protocol SCNSceneRenderer, SCNAuthoringEnvironmentDelegate;

#import <Foundation/Foundation.h>

#import "SCNAuthoringEnvironment2.h"
#import "SCNNode.h"
#import "SCNManipulator.h"

@interface SCNAuthoringEnvironment : NSObject {
    *__C3DEngineContext _engineContext;
    id<SCNSceneRenderer> *_sceneRenderer;
    BOOL _sceneRendererIsSCNView;
    ? _noColorProgram;
    ? _colorOnlyProgram;
    ? _colorAndTextureProgram;
    ? _lightProbesProgram;
    ? _wireframeProgram;
    ? _logsInfo;
    ? _boldLogsInfo;
    ? _dynamicLinesInfo;
    ? _dynamicLinesNoDepthTestInfo;
    ? _dynamicTrianglesInfo;
    ? _overlayDynamicLinesInfo;
    ? _overlayDynamicTriangleInfo;
    ? _textInfo;
    ? _lightProbesInfo;
    ? _normalTextInfo;
    ? _boldTextInfo;
    *__C3DRasterizerStates _depthOnCullOnStates;
    *__C3DRasterizerStates _depthOffCullOnStates;
    *__C3DRasterizerStates _depthOnCullOffStates;
    *__C3DRasterizerStates _depthOffCullOffStates;
    *void _arrowIndicesOffset;
    unsigned short _arrowIndicesCount;
    *void _quadrantIndicesOffset;
    unsigned short _quadrantIndicesCount;
    *void _quadrantRingIndicesOffset;
    unsigned short _quadrantRingIndicesCount;
    CGFloat _timedRecordingExpirationTime;
    unsigned char _timedRecordingBuffer;
    unsigned int _timedRecordingBufferStart;
    unsigned int _timedRecordingBufferEnd;
    NSInteger _authoringDisplayMask;
    BOOL _hasLighting;
    BOOL _selectionIsReadonly;
    ? _selectionP0;
    ? _selectionP1;
    BOOL _selecting;
    NSSet *_initialSelection;
    NSMutableOrderedSet *_selection;
    NSArray *_selectedNodes;
    BOOL _isOrbiting;
    float _lastGridDistance;
    NSMutableArray *_visibleManipulableItems;
    *void _wireframeRenderer;
    unsigned int _consoleLineCount;
    ? _statisticsInfo;
    float _drawScale;
    SCNAuthoringEnvironment2 *_authEnv2;
}


@property (nonatomic) NSInteger authoringDisplayMask;
@property (readonly, nonatomic) SCNNode *authoringOverlayLayer;
@property (nonatomic) NSObject<SCNAuthoringEnvironmentDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger editingSpace; // ivar: _editingSpace
@property (nonatomic) BOOL graphicalSelectionEnabled; // ivar: _graphicalSelectionEnabled
@property (readonly, nonatomic) CGFloat gridUnit; // ivar: _gridUnit
@property (readonly, nonatomic) SCNManipulator *manipulator;
@property (readonly) NSObject<SCNSceneRenderer> *sceneRenderer;
@property (readonly, nonatomic) NSArray *selectedNodes;
@property (nonatomic) BOOL selectionIsReadonly;
@property (nonatomic) BOOL shouldSnapOnGrid; // ivar: _shouldSnapOnGrid
@property (nonatomic) BOOL shouldSnapToAlign; // ivar: _shouldSnapToAlign
@property (nonatomic) BOOL surroundToSelect; // ivar: _surroundToSelect
@property (readonly, nonatomic) SCNMatrix4 viewMatrix;


+(NSInteger)defaultAuthoringDisplayMask;
+(id)authoringEnvironmentForSceneRenderer:(id)arg0 ;
+(id)authoringEnvironmentForSceneRenderer:(id)arg0 createIfNeeded:(BOOL)arg1 ;
+(id)rendererForSceneRenderer:(id)arg0 ;
-(BOOL)didTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isEditingSubComponent;
-(id)_initWithEngineContext:(struct __C3DEngineContext *)arg0 ;
-(id)authoringEnvironment2;
-(id)init;
-(id)renderer;
-(id)selectedItems;
-(void)_setupAuthoringEnv2:(id)arg0 ;
-(void)beginEditingNode:(id)arg0 ;
-(void)beginEditingNodes:(id)arg0 ;
-(void)beginOrbiting;
-(void)cancelEdition;
-(void)dealloc;
-(void)drawLineFromPoint:(struct SCNVector3 )arg0 toPoint:(struct SCNVector3 )arg1 color:(id)arg2 ;
-(void)drawString:(id)arg0 atPoint:(struct CGPoint )arg1 color:(id)arg2 ;
-(void)endOrbiting;
-(void)saveInitialSelection;
-(void)sceneDidChange:(id)arg0 ;
-(void)setupAuthoringEnv2;
-(void)update;


@end


#endif