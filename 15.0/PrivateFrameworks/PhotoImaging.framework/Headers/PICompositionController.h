// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PICOMPOSITIONCONTROLLER_H
#define PICOMPOSITIONCONTROLLER_H

@class NUComposition, NSDictionary;
@protocol NSCopying, PICompositionControllerDelegate;

#import <Foundation/Foundation.h>

#import "PIAdjustmentConstants.h"

@interface PICompositionController : NSObject <NSCopying>

 {
    NUComposition *_composition;
    ? _delegateFlags;
    NSDictionary *_identifierMap;
}


@property (readonly, nonatomic) PIAdjustmentConstants *adjustmentConstants;
@property (weak, nonatomic) NSObject<PICompositionControllerDelegate> *changeDelegate; // ivar: _changeDelegate
@property (readonly, copy, nonatomic) NUComposition *composition;
@property (nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (nonatomic) NSInteger sourceSelection;


+(Class)adjustmentControllerClassForKey:(id)arg0 ;
+(id)_keyToIdentifierMap;
+(id)photosSchema;
+(id)schemaForKey:(id)arg0 ;
+(id)settingForAdjustmentKey:(id)arg0 settingKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 forKeys:(id)arg1 comparisonBlock:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 forKeys:(id)arg1 visualChangesOnly:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 visualChangesOnly:(BOOL)arg1 ;
-(Class)_adjustmentControllerClassForKey:(id)arg0 ;
-(NSInteger)userOrientation;
-(id)_adjustmentControllerForKey:(id)arg0 creatingIfNecessary:(BOOL)arg1 expectedClass:(Class)arg2 ;
-(id)adjustmentControllerForKey:(id)arg0 ;
-(id)adjustmentKeys;
-(id)autoLoopAdjustmentController;
-(id)autoLoopAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)availableKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cropAdjustmentController;
-(id)cropAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)debugDescription;
-(id)definitionAdjustmentController;
-(id)definitionAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)depthAdjustmentController;
-(id)depthAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)differingAdjustmentsWithComposition:(id)arg0 ;
-(id)effect3DAdjustmentController;
-(id)effect3DAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)effectAdjustmentController;
-(id)effectAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)highResFusionAdjustmentController;
-(id)highResFusionAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)livePhotoKeyFrameAdjustmentController;
-(id)livePhotoKeyFrameAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)noiseReductionAdjustmentController;
-(id)noiseReductionAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)orientationAdjustmentController;
-(id)orientationAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)overcaptureSource;
-(id)portraitAdjustmentController;
-(id)portraitAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)portraitVideoAdjustmentController;
-(id)portraitVideoAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)rawAdjustmentController;
-(id)rawAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)rawNoiseReductionAdjustmentController;
-(id)rawNoiseReductionAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)redEyeAdjustmentController;
-(id)redEyeAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)semanticEnhanceAdjustmentController;
-(id)semanticEnhanceAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)sharpenAdjustmentController;
-(id)sharpenAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)slomoAdjustmentController;
-(id)slomoAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)smartBWAdjustmentController;
-(id)smartBWAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)smartColorAdjustmentController;
-(id)smartColorAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)smartToneAdjustmentController;
-(id)smartToneAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)source;
-(id)sourceSelectAdjustmentController;
-(id)sourceSelectAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)trimAdjustmentController;
-(id)trimAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)videoCrossfadeLoopAdjustmentController;
-(id)videoCrossfadeLoopAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)videoPosterFrameAdjustmentController;
-(id)videoPosterFrameAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)videoReframeAdjustmentController;
-(id)videoReframeAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)videoStabilizeAdjustmentController;
-(id)videoStabilizeAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)vignetteAdjustmentController;
-(id)vignetteAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(id)whiteBalanceAdjustmentController;
-(id)whiteBalanceAdjustmentControllerCreatingIfNecessary:(BOOL)arg0 ;
-(void)addAdjustmentWithKey:(id)arg0 ;
-(void)applyChangesFromCompositionController:(id)arg0 ;
-(void)modifyAdjustmentWithKey:(id)arg0 modificationBlock:(id)arg1 ;
-(void)removeAdjustmentWithKey:(id)arg0 ;
-(void)replaceAdjustment:(id)arg0 withKey:(id)arg1 ;
-(void)setOvercaptureSource:(id)arg0 ;
-(void)setSource:(id)arg0 mediaType:(NSInteger)arg1 ;


@end


#endif