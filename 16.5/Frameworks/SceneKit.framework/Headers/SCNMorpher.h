// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNMORPHER_H
#define SCNMORPHER_H

@class NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol SCNAnimatable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNOrderedDictionary.h"

@interface SCNMorpher : NSObject <SCNAnimatable, NSSecureCoding>

 {
    *__C3DMorph _morpher;
    BOOL _isPresentationInstance;
    NSInteger _calculationMode;
    os_unfair_lock_s _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSArray *_mainTargets;
    NSUInteger _weightCount;
    *float _weights;
    NSArray *_mainTargetsAndInBetweens;
    NSArray *_inBetweenCounts;
    NSArray *_inBetweenInfluenceWeights;
    NSArray *_correctivesAndInBetweens;
    NSArray *_correctiveDriverCounts;
    NSArray *_correctiveDriverIndices;
    NSArray *_correctiveInBetweenCounts;
    NSArray *_correctiveInBetweenInfluenceWeights;
    NSDictionary *_mainTargetNamesToIndexes;
    NSString *_name;
    BOOL _unifyNormal;
    BOOL _useSparseTargets;
}


@property (readonly) NSArray *animationKeys;
@property (nonatomic) NSInteger calculationMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *targets;
@property BOOL unifiesNormals;
@property (retain, nonatomic) NSArray *weights;


+(BOOL)supportsSecureCoding;
+(Class)SCNUID_classForElementOfArray:(id)arg0 ;
+(id)morpher;
+(id)morpherWithMorphRef:(struct __C3DMorph *)arg0 ;
+(id)weightIndexStringForIndex:(NSInteger)arg0 ;
-(*void)__CFObject;
-(BOOL)__removeAnimation:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_isUsingSparseTargets;
-(BOOL)isAnimationForKeyPaused:(id)arg0 ;
-(BOOL)isPausedOrPausedByInheritance;
-(BOOL)shouldClearCPUDataAfterUpload;
-(BOOL)shouldMorphNormals;
-(CGFloat)_presentationWeightForTargetAtIndex:(NSUInteger)arg0 token:(*void)arg1 ;
-(CGFloat)weightForTargetAtIndex:(NSUInteger)arg0 ;
-(CGFloat)weightForTargetNamed:(id)arg0 ;
-(NSInteger)_weightIndexForTargetNamed:(id)arg0 ;
-(NSUInteger)correctiveDriverCountForCorrectiveAtIndex:(NSUInteger)arg0 ;
-(float)weightIncrementalThreshold;
-(id)_scnAnimationForKey:(id)arg0 ;
-(id)_scnBindings;
-(id)animationForKey:(id)arg0 ;
-(id)animationPlayerForKey:(id)arg0 ;
-(id)copy;
-(id)copyAnimationChannelForKeyPath:(id)arg0 animation:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)correctiveDriverCounts;
-(id)correctiveDriverIndices;
-(id)correctiveDriverIndicesForCorrectiveAtIndex:(NSUInteger)arg0 ;
-(id)correctiveInBetweenCounts;
-(id)correctiveInBetweenWeights;
-(id)correctives;
-(id)correctivesAndInBetween;
-(id)identifier;
-(id)inBetweenCounts;
-(id)inBetweenTargetsForCorrectiveAtIndex:(NSUInteger)arg0 ;
-(id)inBetweenTargetsForTargetAtIndex:(NSUInteger)arg0 ;
-(id)inBetweenWeights;
-(id)inBetweenWeightsForCorrectiveAtIndex:(NSUInteger)arg0 ;
-(id)inBetweenWeightsForTargetAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initPresentationMorpherWithMorphRef:(struct __C3DMorph *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMorphRef:(struct __C3DMorph *)arg0 ;
-(id)name;
-(id)presentationInstance;
-(id)presentationMorpher;
-(id)scene;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct __C3DAnimationManager *)animationManager;
-(struct __C3DMorph *)morphRef;
-(struct __C3DScene *)sceneRef;
-(void)_copyAnimationsFrom:(id)arg0 ;
-(void)_customDecodingOfSCNMorpher:(id)arg0 ;
-(void)_customEncodingOfSCNMorpher:(id)arg0 ;
-(void)_didDecodeSCNMorpher:(id)arg0 ;
-(void)_pauseAnimation:(BOOL)arg0 forKey:(id)arg1 pausedByNode:(BOOL)arg2 ;
-(void)_syncEntityObjCModel;
-(void)_syncObjCAnimations;
-(void)_syncObjCModel;
-(void)_updateCorrectivesAndInBetween:(id)arg0 ;
-(void)_updateTargetsAndInBetween:(id)arg0 ;
-(void)addAnimation:(id)arg0 ;
-(void)addAnimation:(id)arg0 forKey:(id)arg1 ;
-(void)addAnimationPlayer:(id)arg0 forKey:(id)arg1 ;
-(void)bindAnimatablePath:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)clearCorrectives;
-(void)clearInBetweens;
-(void)convertToAdditiveWithBaseGeometry:(id)arg0 ;
-(void)convertToSparseWithBaseGeometry:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pauseAnimationForKey:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllAnimationsWithBlendOutDuration:(CGFloat)arg0 ;
-(void)removeAllBindings;
-(void)removeAnimationForKey:(id)arg0 ;
-(void)removeAnimationForKey:(id)arg0 blendOutDuration:(CGFloat)arg1 ;
-(void)removeAnimationForKey:(id)arg0 fadeOutDuration:(CGFloat)arg1 ;
-(void)resumeAnimationForKey:(id)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setShouldClearCPUDataAfterUpload:(BOOL)arg0 ;
-(void)setShouldMorphNormals:(BOOL)arg0 ;
-(void)setSpeed:(CGFloat)arg0 forAnimationKey:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)setWeight:(CGFloat)arg0 forTargetAtIndex:(NSUInteger)arg1 ;
-(void)setWeight:(CGFloat)arg0 forTargetNamed:(id)arg1 ;
-(void)setWeightIncrementalThreshold:(float)arg0 ;
-(void)unbindAnimatablePath:(id)arg0 ;


@end


#endif