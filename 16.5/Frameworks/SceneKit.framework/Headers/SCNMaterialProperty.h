// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNMATERIALPROPERTY_H
#define SCNMATERIALPROPERTY_H

@class NSString, NSMutableDictionary, UIColor, NSArray;
@protocol SCNAnimatable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding>

 {
    BOOL _isPresentationInstance;
    BOOL _isCommonProfileProperty;
    BOOL _sRGB;
    BOOL _preventWarmup;
    char _propertyType;
    id *_parent;
    NSString *_customSlotName;
    os_unfair_lock_s _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    UIColor *_borderColor;
    id *_contents;
    unsigned char _contentType;
    NSInteger _mappingChannel;
    unsigned char _minificationFilter;
    unsigned char _magnificationFilter;
    unsigned char _mipFilter;
    unsigned char _wrapS;
    unsigned char _wrapT;
    unsigned char _textureComponents;
    float _intensity;
    float _maxAnisotropy;
    ? _customSlot;
    *__C3DImage _c3dImage;
    *SCNMatrix4 _contentTransform;
    id *_runtimeResolvedPath;
}


@property (readonly) NSArray *animationKeys;
@property (retain, nonatomic) id *contents;
@property (nonatomic) SCNMatrix4 contentsTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat intensity;
@property (nonatomic) NSInteger magnificationFilter;
@property (nonatomic) NSInteger mappingChannel;
@property (nonatomic) CGFloat maxAnisotropy;
@property (nonatomic) NSInteger minificationFilter;
@property (nonatomic) NSInteger mipFilter;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textureComponents;
@property (nonatomic) NSInteger wrapS;
@property (nonatomic) NSInteger wrapT;


+(BOOL)supportsSecureCoding;
+(id)_copyImageFromC3DImage:(struct __C3DImage *)arg0 ;
+(id)captureDeviceOutputConsumer;
+(id)captureDeviceOutputConsumerWithOptions:(id)arg0 ;
+(id)copyImageFromC3DImage:(struct __C3DImage *)arg0 ;
+(id)dvt_supportedTypesForPropertyContents;
+(id)materialPropertyWithContents:(id)arg0 ;
+(id)precomputedLightingEnvironmentContentsWithData:(id)arg0 error:(*id)arg1 ;
+(id)precomputedLightingEnvironmentContentsWithURL:(id)arg0 error:(*id)arg1 ;
+(id)precomputedLightingEnvironmentDataForContents:(id)arg0 device:(id)arg1 error:(*id)arg2 ;
+(struct __C3DImage *)_copyC3DImageFromImageData:(id)arg0 typeID:(NSUInteger)arg1 ;
+(struct __C3DImage *)copyC3DImageFromImage:(id)arg0 ;
+(struct __C3DImage *)copyC3DImageFromImage:(id)arg0 textureOptions:(int)arg1 ;
+(struct __C3DImage *)copyC3DImageFromImage:(id)arg0 textureOptions:(int)arg1 wasCached:(*BOOL)arg2 ;
-(*void)__CFObject;
-(*void)getC3DImageRef;
-(?)effectSlot;
-(?)effectSlotCreateIfNeeded;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_hasDefaultValues;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)isPausedOrPausedByInheritance;
-(BOOL)sRGBTexture;
-(NSInteger)_presentationMappingChannel;
-(char)propertyType;
-(id)UIView;
-(id)__runtimeResolvedPath;
-(id)_animationPathForKey:(id)arg0 ;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)attachment;
-(id)avPlayer;
-(id)borderColor;
-(id)captureDevice;
-(id)captureDeviceOutputConsumerSource;
-(id)color;
-(id)content;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)floatValue;
-(id)image;
-(id)init;
-(id)initPresentationMaterialPropertyWithModelProperty:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParent:(id)arg0 andCustomName:(id)arg1 ;
-(id)initWithParent:(id)arg0 propertyType:(char)arg1 ;
-(id)layer;
-(id)mtlTexture;
-(id)parent;
-(id)precomputedLightingEnvironment;
-(id)presentationInstance;
-(id)presentationMaterialProperty;
-(id)proceduralContents;
-(id)propertyName;
-(id)pvrtcData;
-(id)skScene;
-(id)skTexture;
-(id)slotName;
-(id)textureProvider;
-(int)_textureOptions;
-(struct C3DColor4 )borderColor4;
-(struct C3DColor4 )color4;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DEffectCommonProfile *)commonProfile;
-(struct __C3DScene *)sceneRef;
-(struct __C3DTextureSampler *)textureSampler;
-(void)__allocateContentTransformIfNeeded;
-(void)_clearContents;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_customDecodingOfSCNMaterialProperty:(id)arg0 ;
-(void)_customEncodingOfSCNMaterialProperty:(id)arg0 ;
-(void)_didDecodeSCNMaterialProperty:(id)arg0 ;
-(void)_layerDidChange:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_setC3DImageRef:(struct __C3DImage *)arg0 ;
-(void)_setColor:(id)arg0 ;
-(void)_setImagePath:(id)arg0 withResolvedPath:(id)arg1 ;
-(void)_setParent:(id)arg0 ;
-(void)_setupContentsFromC3DImage;
-(void)_skSceneDidChange:(id)arg0 ;
-(void)_syncObjCAnimations;
-(void)_syncObjCModel;
-(void)_updateC3DImageWithContents:(id)arg0 ;
-(void)_updateMaterialAVPlayer:(id)arg0 ;
-(void)_updateMaterialAttachment:(id)arg0 ;
-(void)_updateMaterialBorderColor:(id)arg0 ;
-(void)_updateMaterialCaptureDevice:(id)arg0 ;
-(void)_updateMaterialCaptureDeviceOutputConsumerSource:(id)arg0 ;
-(void)_updateMaterialColor:(id)arg0 ;
-(void)_updateMaterialFilters;
-(void)_updateMaterialImage:(id)arg0 ;
-(void)_updateMaterialLayer:(id)arg0 ;
-(void)_updateMaterialMTLTexture:(id)arg0 ;
-(void)_updateMaterialNumber:(id)arg0 ;
-(void)_updateMaterialProceduralContents:(id)arg0 ;
-(void)_updateMaterialPropertyTransform:(unsigned char)arg0 ;
-(void)_updateMaterialSKScene:(id)arg0 ;
-(void)_updateMaterialSKTexture:(id)arg0 ;
-(void)_updateMaterialTextureProvider:(id)arg0 ;
-(void)_updateMaterialUIComponent:(id)arg0 ;
-(void)_updatePrecomputedLightingEnvironment:(id)arg0 ;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)copyPropertiesFrom:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)linkCustomPropertyWithParent:(id)arg0 andCustomName:(id)arg1 ;
-(void)parentWillDie:(id)arg0 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setAttachment:(id)arg0 ;
-(void)setAvPlayer:(id)arg0 ;
-(void)setBorderColor:(id)arg0 ;
-(void)setCaptureDevice:(id)arg0 ;
-(void)setCaptureDeviceOutputConsumerSource:(id)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setContent:(id)arg0 ;
-(void)setFloatValue:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setLayer:(id)arg0 ;
-(void)setMtlTexture:(id)arg0 ;
-(void)setPrecomputedLightingEnvironment:(id)arg0 ;
-(void)setProceduralContents:(id)arg0 ;
-(void)setSRGBTexture:(BOOL)arg0 ;
-(void)setSkScene:(id)arg0 ;
-(void)setSkTexture:(id)arg0 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)setTextureProvider:(id)arg0 ;
-(void)setUIView:(id)arg0 ;
-(void)setUIWindow:(id)arg0 ;
-(void)unbindAnimatablePath:(id)arg0 ;
-(void)unlinkCustomPropertyWithParent:(id)arg0 ;


@end


#endif