// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEDETECTOR_H
#define PLDUPLICATEDETECTOR_H


#import <Foundation/Foundation.h>


@interface PLDuplicateDetector : NSObject



+(BOOL)duplicateDetectorCompletedDateBackgroundMigrationAction:(id)arg0 ;
+(BOOL)duplicateDetectorCompletedPerceptualHashProcessingWithManagedObjectContext:(id)arg0 pathManager:(id)arg1 ;
+(id)duplicateDetectorExcludeZeroByteFingerprintPredicateWithProperty:(id)arg0 ;
+(id)duplicateDetectorFilterProcessingStateWithPrefix:(id)arg0 processingType:(NSUInteger)arg1 ;
+(id)duplicateDetectorProcessingFilterAssetsPredicateWithPrefix:(id)arg0 processingType:(NSUInteger)arg1 pathManager:(id)arg2 ;
+(id)predicateFormatToPrependAssetAttributeSubstitutionWithPrefix:(id)arg0 ;
+(short)currentSceneAnalysisUmbrellaVersion;


@end


#endif