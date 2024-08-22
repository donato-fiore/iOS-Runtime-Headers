// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHINGESTPERSONAGECATEGORYPROCESSOR_H
#define PGGRAPHINGESTPERSONAGECATEGORYPROCESSOR_H

@class CLSSceneConfidenceThresholdHelper, NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
    CLSSceneConfidenceThresholdHelper *_babyScenesHelper;
    CLSSceneConfidenceThresholdHelper *_childScenesHelper;
    CLSSceneConfidenceThresholdHelper *_teenScenesHelper;
    CLSSceneConfidenceThresholdHelper *_adultScenesHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(NSUInteger)_ageCategoryFromAssetSamplingScenesForPersonNode:(id)arg0 photoLibrary:(id)arg1 curationSession:(id)arg2 ;
-(NSUInteger)_ageCategoryFromBirthdayDateForPersonNode:(id)arg0 ;
-(NSUInteger)_ageCategoryFromPHFaceAgeType:(unsigned short)arg0 ;
-(NSUInteger)_ageCategoryUsingFaceAttributesForPersonNode:(id)arg0 photoLibrary:(id)arg1 ;
-(NSUInteger)ageCategoryForPersonNode:(id)arg0 ageCategoryCountedSet:(id)arg1 ;
-(NSUInteger)ageCategoryFromBirthdayDateComponents:(id)arg0 currentDate:(id)arg1 ;
-(NSUInteger)ageCategoryFromScenesByAssetLocalIdentifier:(id)arg0 curationModelByAssetLocalIdentifier:(id)arg1 personNode:(id)arg2 ;
-(id)_ageDescriptionFromAge:(NSUInteger)arg0 ;
-(id)confidenceThresholdByAdultSceneIdentifierWithCurationModel:(id)arg0 ;
-(id)confidenceThresholdByBabySceneIdentifierWithCurationModel:(id)arg0 ;
-(id)confidenceThresholdByChildSceneIdentifierWithCurationModel:(id)arg0 ;
-(id)confidenceThresholdByTeenSceneIdentifierWithCurationModel:(id)arg0 ;
-(id)init;
-(unsigned short)_ageTypeFromAgeCategory:(NSUInteger)arg0 ;
-(void)_updatePhotoLibrary:(id)arg0 withAgeCategoryByPersonLocalIdentifier:(id)arg1 ;
-(void)processPersonAgeCategoryForPersonNodes:(id)arg0 photoLibrary:(id)arg1 withProgressBlock:(id)arg2 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif