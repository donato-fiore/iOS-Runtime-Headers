// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSSCENEMODEL_H
#define CLSSCENEMODEL_H

@class NSMutableDictionary, PFSceneTaxonomy, NSString;
@protocol CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>


@interface CLSSceneModel : NSObject <CLSClassificationBasedSignalModel>

 {
    NSMutableDictionary *_signalNodeBySignalName;
    NSMutableDictionary *_signalNodeBySignalIdentifier;
    PFSceneTaxonomy *_sceneTaxonomy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)baseSceneAnalysisVersionWithSceneAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
+(void)dumpThresholdTypesBySceneName;
+(void)initialize;
-(*void)taxonomyNodeRefForSceneIdentifier:(unsigned int)arg0 ;
-(BOOL)isResponsibleForSignalIdentifier:(NSUInteger)arg0 ;
-(id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg0 withThresholdType:(NSUInteger)arg1 ;
-(id)initForTesting;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 ;
-(id)modelInfo;
-(id)nodeForSignalIdentifier:(NSUInteger)arg0 ;
-(id)sceneIdentifierBySceneNameForSceneNames:(id)arg0 ;
-(id)sceneIdentifiersForSceneNames:(id)arg0 includingChildScenes:(BOOL)arg1 ;
-(id)sceneIdentifiersFromSceneClassifications:(id)arg0 passingThresholdOfType:(NSUInteger)arg1 ;
-(id)sceneNamesFromSceneClassifications:(id)arg0 passingThresholdOfType:(NSUInteger)arg1 ;
-(id)taxonomyNodeForSceneIdentifier:(unsigned int)arg0 ;
-(void)processSignals:(id)arg0 intoProcessedSignals:(id)arg1 ;
-(void)setupVersion33;
-(void)setupVersion84;


@end


#endif