// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXEFFECT_H
#define JFXEFFECT_H

@class PVEffect, NSMutableDictionary, NSLock, NSString, NSDictionary, PVMatrix44Double, PVTransformAnimation;
@protocol JFXEffectAssetProviderProtocol, JFXEffectPreviewAssetProviderProtocol, JFXEffectRenderingAssetProviderProtocol, NSSecureCoding, NSCopying, JFXEffectContentDataSource;

#import <Foundation/Foundation.h>


@interface JFXEffect : NSObject <JFXEffectAssetProviderProtocol, JFXEffectPreviewAssetProviderProtocol, JFXEffectRenderingAssetProviderProtocol, NSSecureCoding, NSCopying>

 {
    int _type;
    PVEffect *_renderEffect;
    NSMutableDictionary *_effectParameters;
    NSMutableDictionary *_dirtyEffectParameters;
    NSLock *_paramLock;
}


@property (readonly, nonatomic) BOOL arePreviewingAssetsLocal;
@property (readonly, nonatomic) BOOL areRenderingAssetsLocal;
@property (readonly, nonatomic) NSUInteger contentAvailability;
@property (readonly, nonatomic) NSObject<JFXEffectContentDataSource> *contentDataSource; // ivar: _contentDataSource
@property (readonly, nonatomic) NSString *contentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *effectID; // ivar: _effectID
@property (copy, nonatomic) NSDictionary *effectParameters;
@property BOOL forceDisableLooping;
@property BOOL forceRenderAtPosterFrame;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isContentAvailable;
@property (readonly, nonatomic) BOOL isContentNew;
@property (readonly, nonatomic) BOOL isNone; // ivar: _isNone
@property (copy, nonatomic) NSString *motionDocumentFolderPath; // ivar: _motionDocumentFolderPath
@property (nonatomic) float opacity;
@property (nonatomic) CGFloat outputAspect;
@property (nonatomic) NSInteger playableAspectRatio;
@property (nonatomic) NSInteger playableAspectRatioPreservationMode;
@property (readonly, nonatomic) BOOL renderEffectResourcesAreReady;
@property (nonatomic) CGSize renderSize; // ivar: _renderSize
@property (readonly) Class superclass;
@property (nonatomic) ? topLevelTransform;
@property (retain, nonatomic) PVMatrix44Double *topLevelTransformObject;
@property (retain, nonatomic) PVTransformAnimation *transformAnimation;
@property (readonly, nonatomic) int type;


+(BOOL)effectIDIsNone:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)defaultPlayableAspectRatio;
+(NSInteger)defaultPlayableAspectRatioPreservationMode;
-(BOOL)buildInAnimation;
-(BOOL)enablePresentationState:(BOOL)arg0 ;
-(BOOL)isAppearanceEqual:(id)arg0 ;
-(BOOL)isAppearanceEqual:(id)arg0 forPurpose:(NSUInteger)arg1 ;
-(BOOL)isConfiguredForOutputAspect:(CGFloat)arg0 ;
-(BOOL)isConfiguredForOutputAspectMatchingSize:(struct CGSize )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)loadRenderEffect;
-(BOOL)loopedRangeRenderIsCacheable;
-(CGFloat)playableScaleInOutputSize:(struct CGSize )arg0 ;
-(id)JFX_defaultMotionDocumentFolderLocalURL;
-(id)accessibilityName;
-(id)availableAssetsWithFilteringOptions:(id)arg0 ;
-(id)availableAssetsWithFilteringOptionsArray:(id)arg0 ;
-(id)contentProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)describeRequest:(id)arg0 ;
-(id)displayName;
-(id)effectWillRenderPreviewWithOptions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEffectID:(id)arg0 ;
-(id)localAssetsWithFilteringOptions:(id)arg0 ;
-(id)parameterForKey:(id)arg0 ;
-(id)parametersClassWhitelist;
-(id)renderEffect;
// -(id)requestAllAssetsWithOptions:(id)arg0 progressAndCancellationHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)requestAllAssetsWithOptions:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)requestAssetWithOptions:(id)arg0 progressAndCancellationHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)requestAssetWithOptions:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)requestPreviewingAssetsWithPriority:(NSInteger)arg0 onlyThumbnailAssetWhenAvailable:(BOOL)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)requestRenderingAssetsWithPriority:(NSInteger)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(id)serializableEffectParameters;
-(struct ? )rangeForPresentationRange:(struct ? )arg0 ;
-(struct ? )topLevelTransformRelativeTo:(struct CGSize )arg0 basisOrigin:(int)arg1 ;
-(struct CGAffineTransform )_affineTransformFromEffectRect:(struct CGRect )arg0 toSize:(struct CGSize )arg1 basisOrigin:(int)arg2 ;
-(struct CGAffineTransform )addTransform:(struct CGAffineTransform )arg0 withComponentTime:(struct ? )arg1 relativeTo:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(struct CGAffineTransform )addTransform:(struct CGAffineTransform )arg0 withComponentTime:(struct ? )arg1 relativeTo:(struct CGRect )arg2 basisOrigin:(int)arg3 ignoreTranslation:(BOOL)arg4 ;
-(struct CGRect )playableRectInOutputSize:(struct CGSize )arg0 ;
-(struct PVCGPointQuad )_convertRenderEffectPoints:(struct PVCGPointQuad )arg0 toBasisRect:(struct CGRect )arg1 basisOrigin:(int)arg2 ;
-(void)_convertRenderEffectPoints:(struct CGPoint *)arg0 numPoints:(NSUInteger)arg1 fromBasisRect:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(struct CGPoint *)arg0 numPoints:(NSUInteger)arg1 toBasisRect:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(void)_createCachedRenderEffect_noLock;
-(void)addEffectParameters:(id)arg0 ;
-(void)cancelAssetRequest:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadRenderEffectInBackgroundWithCompletionOnMainQueue:(id)arg0 ;
-(void)loadRenderEffectOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)registerMotionDocumentWithinAssets:(id)arg0 ;
-(void)removeEffectParameters:(id)arg0 ;
-(void)removeTopLevelAdditionalScale;
-(void)renderEffectWillLoad;
-(void)setBuildInAnimation:(BOOL)arg0 ;
-(void)setHDR:(BOOL)arg0 ;
-(void)setParameter:(id)arg0 forKey:(id)arg1 ;
-(void)setParentTransformAnimation:(id)arg0 ;
-(void)setRenderStartOffset:(struct ? )arg0 ;
-(void)setTopLevelAdditionalScale:(struct CGPoint )arg0 ;
-(void)updatePriorityForAssetRequest:(id)arg0 newPriority:(NSInteger)arg1 ;


@end


#endif