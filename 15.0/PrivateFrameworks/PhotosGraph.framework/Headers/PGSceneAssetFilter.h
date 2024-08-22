// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSCENEASSETFILTER_H
#define PGSCENEASSETFILTER_H

@class NSDictionary, NSString, NSSet;
@protocol PGAssetFilter, CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>


@interface PGSceneAssetFilter : NSObject <PGAssetFilter>

 {
    *char _typeOfSceneClassification;
    *CGFloat _indexedConfidenceThresholdOfScenes;
    BOOL _requireDominantPositiveScenes;
    id<CLSClassificationBasedSignalModel> *_positiveSceneCustomSignalModel;
    id<CLSClassificationBasedSignalModel> *_positiveDominantSceneCustomSignalModel;
}


@property (retain, nonatomic) NSDictionary *confidenceThresholdByNegativeSceneIdentifiers; // ivar: _confidenceThresholdByNegativeSceneIdentifiers
@property (retain, nonatomic) NSDictionary *confidenceThresholdByPositiveDominantSceneIdentifiers; // ivar: _confidenceThresholdByPositiveDominantSceneIdentifiers
@property (retain, nonatomic) NSDictionary *confidenceThresholdByPositiveSceneIdentifiers; // ivar: _confidenceThresholdByPositiveSceneIdentifiers
@property (retain, nonatomic) NSDictionary *confidenceThresholdBySecondaryPositiveSceneIdentifiers; // ivar: _confidenceThresholdBySecondaryPositiveSceneIdentifiers
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
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)label:(id)arg0 isSemDevClassificationWithIdentifier:(*unsigned int)arg1 ;
-(BOOL)passesWithAsset:(id)arg0 ;
-(BOOL)validateSceneNames:(id)arg0 ;
-(id)_consolidatedConfidenceThresholdBySceneIdentifiers:(id)arg0 customSignalModel:(id)arg1 ;
-(id)filteredAssetsFromAssets:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPositiveScenes:(id)arg0 negativeScenes:(id)arg1 ;
-(id)initWithPositiveScenes:(id)arg0 positiveSceneCustomSignalModel:(id)arg1 secondaryPositiveScenes:(id)arg2 positiveDominantScenes:(id)arg3 positiveDominantSceneCustomSignalModel:(id)arg4 positiveSemDevScenes:(id)arg5 negativeScenes:(id)arg6 ;
-(void)_buildIndexWithConfidenceThresholds:(id)arg0 sceneClassificationType:(char)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif