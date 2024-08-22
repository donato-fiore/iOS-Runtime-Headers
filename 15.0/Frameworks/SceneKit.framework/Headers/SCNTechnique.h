// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNTECHNIQUE_H
#define SCNTECHNIQUE_H

@class NSMutableDictionary, NSArray, NSString, NSDictionary;
@protocol SCNAnimatable, NSCopying, NSSecureCoding, MTLLibrary;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>

 {
    BOOL _isPresentationInstance;
    ? _technique;
    NSMutableDictionary *_valueForSymbol;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    id<MTLLibrary> *_library;
    NSArray *_passes;
}


@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLLibrary> *library;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)techniqueBySequencingTechniques:(id)arg0 ;
+(id)techniqueWithDictionary:(id)arg0 ;
+(id)techniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg0 ;
-(*void)__CFObject;
-(?)techniqueRef;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)_symbolsAssignedValues;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTechniqueRef:(struct __C3DFXTechnique *)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)passAtIndex:(NSUInteger)arg0 ;
-(id)presentationInstance;
-(id)scene;
-(id)valueForSymbolNamed:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DScene *)sceneRef;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_customDecodingOfSCNTechnique:(id)arg0 ;
-(void)_customEncodingOfSCNTechnique:(id)arg0 ;
-(void)_didInstallInEngineContext:(struct __C3DEngineContext *)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_setupPasses;
-(void)_syncObjCAnimations;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleBindingOfSymbol:(id)arg0 usingBlock:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)setValue:(id)arg0 forSymbolNamed:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif