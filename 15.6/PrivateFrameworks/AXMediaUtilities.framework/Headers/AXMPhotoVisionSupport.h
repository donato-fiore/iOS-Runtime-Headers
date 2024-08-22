// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMPHOTOVISIONSUPPORT_H
#define AXMPHOTOVISIONSUPPORT_H


#import <Foundation/Foundation.h>


@interface AXMPhotoVisionSupport : NSObject



+(BOOL)_validatePhotosFormatSoftLinkSymbols;
+(BOOL)axmIsSceneClassId:(unsigned int)arg0 childOfSceneClassId:(unsigned int)arg1 ;
+(id)_collectLabelsIncludingLeafNodes:(BOOL)arg0 nonLeafNodes:(BOOL)arg1 ;
+(id)_deniedVoiceOverObjectClassificationLabels;
+(id)_deniedVoiceOverSceneClassificationLabels;
+(id)axmTaxonomyNodeForObjectObservation:(id)arg0 ;
+(id)axmTaxonomyNodeForSceneTaxonomyNode:(id)arg0 ;
+(id)buildGraphStatisticsDescription;
+(id)buildParentChainDescriptionForAllNodes;
+(id)buildTaxonomyDescription;
+(id)findLeastCommonAncestorForSceneClassIds:(id)arg0 withKnownAncestorSceneClassId:(unsigned int)arg1 ;
+(id)leafNodeLabels;
+(id)localizedLabelForClassificationObservation:(id)arg0 ;
+(id)nonLeafNodeLabels;
+(id)processSceneClassifications:(id)arg0 withOptions:(unsigned int)arg1 ;
+(void)_addNode:(id)arg0 toDescription:(id)arg1 atLevel:(NSInteger)arg2 ;


@end


#endif