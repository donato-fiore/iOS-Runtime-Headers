// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROAUTOEDITPROJECTPOLISH_H
#define MIROAUTOEDITPROJECTPOLISH_H

@class NSMutableArray, NSDictionary, PHAsset;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"
#import "MiroAutoEditController.h"
#import "MiroAutoEditLogger.h"
#import "MiroAutoEditMultiUpController.h"
#import "MiroPickList.h"
#import "Project.h"
#import "MiroAutoEditTransitionController.h"

@interface MiroAutoEditProjectPolish : NSObject

@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (retain, nonatomic) NSMutableArray *conversionNeeded; // ivar: _conversionNeeded
@property (nonatomic) MiroAutoEditController *editController; // ivar: _editController
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges; // ivar: _featuredPersonsInMemoryAsFaceRanges
@property (retain, nonatomic) NSDictionary *freezeRanges; // ivar: _freezeRanges
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) NSMutableArray *layoutClips; // ivar: _layoutClips
@property (retain, nonatomic) MiroAutoEditLogger *logger; // ivar: _logger
@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (nonatomic) BOOL memoryFeaturesPeople; // ivar: _memoryFeaturesPeople
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset; // ivar: _memoryFeaturesPersonInAsset
@property (nonatomic) NSUInteger memorySubcategory; // ivar: _memorySubcategory
@property (nonatomic) BOOL memoryTypeDisablesCropping; // ivar: _memoryTypeDisablesCropping
@property (retain, nonatomic) MiroAutoEditMultiUpController *multiController; // ivar: _multiController
@property (weak, nonatomic) MiroPickList *picklist; // ivar: _picklist
@property (retain, nonatomic) Project *project; // ivar: _project
@property (nonatomic) BOOL titleIsSupported; // ivar: _titleIsSupported
@property (retain, nonatomic) MiroAutoEditTransitionController *transitionsController; // ivar: _transitionsController


-(BOOL)clipIsViableZoomToPersonCandidate:(id)arg0 ;
-(BOOL)extremeCropAllowed;
-(BOOL)isPortraitSquareVideo:(id)arg0 ;
-(BOOL)memoryFeaturesPersonInAsset:(id)arg0 ;
-(BOOL)multiUpSupportedForAspect:(int)arg0 ;
-(NSUInteger)allowedBurstStylesFromBlueprint:(id)arg0 ;
-(float)sideScaleOffsetForScaleFactor:(float)arg0 ;
-(id)_everyTitleDEBUG;
-(id)applyAudioPolish;
-(id)polishProject;
-(id)videoFramingRangesFor:(id)arg0 ;
-(void)_updateSpeedRampsForClip:(id)arg0 beginningRampDurationSeconds:(CGFloat)arg1 endingRampDurationSeconds:(CGFloat)arg2 ;
-(void)adjustSlowMotionSpeedRamps;
-(void)adjustVideoPositioningBasedOnMetadata;
-(void)applyAutomaticThemeTitleToClip:(id)arg0 forPoster:(BOOL)arg1 ;
-(void)applyBurstEffect;
-(void)applyClipPolish;
-(void)applyIrisEffect;
-(void)applyMultiUpTreatments;
-(void)applyTitleToFirstClip;
-(void)applyTransitions;
-(void)batchConvertCompoundClipsToKenBurnsClips;
-(void)cleanup;
-(void)clearAllStandardClipEffects;
-(void)convertSpecialClipTypeToKenBurnsClip:(id)arg0 ;
-(void)createLayoutClips;
-(void)createTransitionControllerAndPrepare;
-(void)removeIrisStylesFromFirstThreeClips;
-(void)setVideoScaleFactorXPostitionFor:(id)arg0 boundingRect:(struct CGRect )arg1 ;
-(void)setVideoScaleFactorYPostitionFor:(id)arg0 boundingRect:(struct CGRect )arg1 ;


@end


#endif