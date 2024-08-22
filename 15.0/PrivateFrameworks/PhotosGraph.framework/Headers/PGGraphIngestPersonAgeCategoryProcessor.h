// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHINGESTPERSONAGECATEGORYPROCESSOR_H
#define PGGRAPHINGESTPERSONAGECATEGORYPROCESSOR_H

@class NSDictionary, NSString;
@protocol PGGraphIngestProcessor;

#import <Foundation/Foundation.h>

#import "PGGraphBuilder.h"

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor>

 {
    PGGraphBuilder *_graphBuilder;
}


@property (readonly, nonatomic) NSDictionary *confidenceThresholdByAdultSceneIdentifier; // ivar: _confidenceThresholdByAdultSceneIdentifier
@property (readonly, nonatomic) NSDictionary *confidenceThresholdByBabySceneIdentifier; // ivar: _confidenceThresholdByBabySceneIdentifier
@property (readonly, nonatomic) NSDictionary *confidenceThresholdByChildSceneIdentifier; // ivar: _confidenceThresholdByChildSceneIdentifier
@property (readonly, nonatomic) NSDictionary *confidenceThresholdByTeenSceneIdentifier; // ivar: _confidenceThresholdByTeenSceneIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldRunWithGraphUpdate:(id)arg0 ;
-(NSUInteger)_ageCategoryFromAssetSamplingScenesForPersonNode:(id)arg0 photoLibrary:(id)arg1 ;
-(NSUInteger)_ageCategoryFromBirthdayDateForPersonNode:(id)arg0 ;
-(NSUInteger)_ageCategoryFromPHFaceAgeType:(unsigned short)arg0 ;
-(NSUInteger)_ageCategoryUsingFaceAttributesForPersonNode:(id)arg0 photoLibrary:(id)arg1 ;
-(NSUInteger)ageCategoryForPersonNode:(id)arg0 ageCategoryCountedSet:(id)arg1 ;
-(NSUInteger)ageCategoryFromBirthdayDateComponents:(id)arg0 currentDate:(id)arg1 ;
-(NSUInteger)ageCategoryFromScenesByAssetLocalIdentifier:(id)arg0 personNode:(id)arg1 ;
-(id)_ageDescriptionFromAge:(NSUInteger)arg0 ;
-(void)processPersonAgeCategoryForPersonNodes:(id)arg0 photoLibrary:(id)arg1 withProgressBlock:(id)arg2 ;
-(void)runWithGraphUpdate:(id)arg0 progressBlock:(id)arg1 ;
-(void)setGraphBuilder:(id)arg0 ;


@end


#endif