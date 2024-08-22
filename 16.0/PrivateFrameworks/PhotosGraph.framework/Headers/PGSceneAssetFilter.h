// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSCENEASSETFILTER_H
#define PGSCENEASSETFILTER_H

@class CLSSceneConfidenceThresholdHelper, NSMutableDictionary, NSString, NSSet;
@protocol PGAssetFilter;

#import <Foundation/Foundation.h>


@interface PGSceneAssetFilter : NSObject <PGAssetFilter>

 {
    CLSSceneConfidenceThresholdHelper *_positiveScenesHelper;
    CLSSceneConfidenceThresholdHelper *_secondaryPositiveScenesHelper;
    CLSSceneConfidenceThresholdHelper *_negativeScenesHelper;
    CLSSceneConfidenceThresholdHelper *_positiveDominantScenesHelper;
    NSMutableDictionary *_confidenceThresholdByPositiveSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary *_confidenceThresholdBySecondaryPositiveSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary *_confidenceThresholdByNegativeSceneIdentifierBySceneModelIdentifier;
    NSMutableDictionary *_confidenceThresholdByPositiveDominantSceneIdentifierBySceneModelIdentifier;
    *char _typeOfSceneClassification;
    NSMutableDictionary *_indexedConfidenceThresholdOfScenesBySceneModelIdentifier;
    BOOL _requireDominantPositiveScenes;
    id *_positiveSceneCustomSignalModelBlock;
    id *_positiveDominantSceneCustomSignalModelBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *negativeScenes; // ivar: _negativeScenes
@property (readonly, nonatomic) NSSet *positiveDominantScenes; // ivar: _positiveDominantScenes
@property (readonly, nonatomic) NSSet *positiveScenes; // ivar: _positiveScenes
@property (retain, nonatomic) NSSet *positiveSemDevSceneIdentifiers; // ivar: _positiveSemDevSceneIdentifiers
@property (readonly, nonatomic) NSSet *positiveSemDevScenes; // ivar: _positiveSemDevScenes
@property (readonly, nonatomic) NSSet *secondaryPositiveScenes; // ivar: _secondaryPositiveScenes
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)name;
-(BOOL)_validateSceneNames:(id)arg0 withSceneTaxonomy:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)label:(id)arg0 isSemDevClassificationWithIdentifier:(*unsigned int)arg1 ;
-(BOOL)passesWithAsset:(id)arg0 ;
-(id)_consolidatedConfidenceThresholdBySceneIdentifiers:(id)arg0 customSignalModel:(id)arg1 ;
-(id)confidenceThresholdByNegativeSceneIdentifierWithCurationModel:(id)arg0 ;
-(id)confidenceThresholdByPositiveDominantSceneIdentifierWithCurationModel:(id)arg0 ;
-(id)confidenceThresholdByPositiveSceneIdentifierWithCurationModel:(id)arg0 ;
-(id)confidenceThresholdBySecondaryPositiveSceneIdentifierWithCurationModel:(id)arg0 ;
-(id)filteredAssetsFromAssets:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPositiveScenes:(id)arg0 negativeScenes:(id)arg1 sceneTaxonomy:(id)arg2 ;
// -(id)initWithPositiveScenes:(id)arg0 positiveSceneCustomSignalModelBlock:(id)arg1 secondaryPositiveScenes:(unk)arg2 positiveDominantScenes:(id)arg3 positiveDominantSceneCustomSignalModelBlock:(id)arg4 positiveSemDevScenes:(id)arg5 negativeScenes:(unk)arg6 sceneTaxonomy:(id)arg7  ;
-(void)_buildIndexWithConfidenceThresholds:(id)arg0 sceneClassificationType:(char)arg1 curationModel:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif