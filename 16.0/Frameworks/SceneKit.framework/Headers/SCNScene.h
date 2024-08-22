// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNSCENE_H
#define SCNSCENE_H

@class NSMutableDictionary, NSURL, NSString;
@protocol SCNTransactionCommandObject, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNSceneSource.h"
#import "SCNPhysicsWorld.h"
#import "SCNNode.h"
#import "SCNMaterialProperty.h"
#import "SCNAuthoringEnvironment.h"

@interface SCNScene : NSObject <SCNTransactionCommandObject, NSSecureCoding>

 {
    *__C3DScene _scene;
    SCNSceneSource *_sceneSource;
    SCNPhysicsWorld *_physicsWorld;
    SCNNode *_rootNode;
    SCNNode" _layerRootNode;
    SCNMaterialProperty *_background;
    SCNMaterialProperty *_environment;
    NSMutableDictionary *_userAttributes;
    CGFloat _fogStartDistance;
    CGFloat _fogEndDistance;
    CGFloat _fogDensityExponent;
    id *_fogColor;
    BOOL _wantsScreenSpaceReflection;
    NSInteger _screenSpaceReflectionSampleCount;
    CGFloat _screenSpaceReflectionMaxRayDistance;
    CGFloat _screenSpaceReflectionStride;
    BOOL _paused;
    NSURL *_sourceURL;
    BOOL _pausedForEditing;
    BOOL _allowsDefaultLightingEnvironmentFallback;
    SCNAuthoringEnvironment *_authoringEnvironment;
}


@property (readonly, nonatomic) SCNMaterialProperty *background;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *fogColor;
@property (nonatomic) CGFloat fogDensityExponent;
@property (nonatomic) CGFloat fogEndDistance;
@property (nonatomic) CGFloat fogStartDistance;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SCNMaterialProperty *lightingEnvironment;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
@property (readonly, nonatomic) SCNNode *rootNode;
@property (nonatomic) CGFloat screenSpaceReflectionMaximumDistance;
@property (nonatomic) NSInteger screenSpaceReflectionSampleCount;
@property (nonatomic) CGFloat screenSpaceReflectionStride;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsScreenSpaceReflection;


+(BOOL)canImportFileExtension:(id)arg0 ;
+(BOOL)canImportFileUTI:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(SEL)jsConstructor;
+(id)_indexPathForNode:(id)arg0 ;
+(id)scene;
+(id)sceneNamed:(id)arg0 ;
+(id)sceneNamed:(id)arg0 inDirectory:(id)arg1 options:(id)arg2 ;
+(id)sceneNamed:(id)arg0 options:(id)arg1 ;
+(id)sceneWithData:(id)arg0 atIndex:(NSInteger)arg1 options:(id)arg2 ;
+(id)sceneWithData:(id)arg0 options:(id)arg1 ;
+(id)sceneWithMDLAsset:(id)arg0 ;
+(id)sceneWithMDLAsset:(id)arg0 options:(id)arg1 ;
+(id)sceneWithSceneRef:(struct __C3DScene *)arg0 ;
+(id)sceneWithURL:(id)arg0 atIndex:(NSInteger)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg0 options:(id)arg1 ;
+(id)sceneWithURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)supportedFileUTIsForExport;
+(id)supportedFileUTIsForImport;
-(*void)__CFObject;
-(BOOL)_allowsDefaultLightingEnvironmentFallback;
-(BOOL)writeToURL:(id)arg0 options:(id)arg1 ;
-(BOOL)writeToURL:(id)arg0 options:(id)arg1 delegate:(id)arg2 progressHandler:(id)arg3 ;
-(BOOL)writeToURLWithUSDKit:(id)arg0 ;
-(CGFloat)endTime;
-(CGFloat)frameRate;
-(CGFloat)screenSpaceReflectionDepthThreshold;
-(CGFloat)startTime;
-(float)playbackSpeed;
-(id)_exportAsMovieOperationWithDestinationURL:(id)arg0 size:(struct CGSize )arg1 attributes:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 userInfo:(*void)arg5 ;
-(id)_nodeWithIndexPath:(id)arg0 ;
-(id)_physicsWorldCreateIfNeeded:(BOOL)arg0 ;
-(id)_scenes;
-(id)_subnodeFromIndexPath:(id)arg0 ;
-(id)attributeForKey:(id)arg0 ;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyAnimationChannelForKeyPath:(id)arg0 property:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)debugQuickLookObjectWithPointOfView:(id)arg0 ;
-(id)exportAsMovieOperationWithDestinationURL:(id)arg0 size:(struct CGSize )arg1 attributes:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 userInfo:(*void)arg5 ;
-(id)init;
-(id)initForJavascript:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSceneRef:(struct __C3DScene *)arg0 ;
-(id)particleSystems;
-(id)root;
-(id)rootNodeForLayer:(int)arg0 ;
-(id)scene;
-(id)sceneSource;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct SCNVector3 )upAxis;
-(struct __C3DScene *)sceneRef;
-(void)_clearSceneRef;
-(void)_customDecodingOfSCNScene:(id)arg0 ;
-(void)_customEncodingOfSCNScene:(id)arg0 ;
-(void)_didDecodeSCNScene:(id)arg0 ;
-(void)_didEncodeSCNScene:(id)arg0 ;
-(void)_dumpToDisk;
-(void)_prettifyForPreview;
-(void)_resetSceneTimeRange;
-(void)_scaleSceneBy:(CGFloat)arg0 ;
-(void)_setSourceURL:(id)arg0 ;
-(void)_syncObjCModel;
-(void)addParticleSystem:(id)arg0 withTransform:(struct SCNMatrix4 )arg1 ;
-(void)addSceneAnimation:(id)arg0 forKey:(id)arg1 target:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)lock;
-(void)removeAllParticleSystems;
-(void)removeParticleSystem:(id)arg0 ;
-(void)setAttribute:(id)arg0 forKey:(id)arg1 ;
-(void)setEndTime:(CGFloat)arg0 ;
-(void)setFrameRate:(CGFloat)arg0 ;
-(void)setPlaybackSpeed:(float)arg0 ;
-(void)setSceneSource:(id)arg0 ;
-(void)setScreenSpaceReflectionDepthThreshold:(CGFloat)arg0 ;
-(void)setStartTime:(CGFloat)arg0 ;
-(void)setUpAxis:(struct SCNVector3 )arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)set_allowsDefaultLightingEnvironmentFallback:(BOOL)arg0 ;
-(void)unlock;


@end


#endif