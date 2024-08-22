// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSTRENDSSCENEMODEL_H
#define CLSTRENDSSCENEMODEL_H

@class NSString;
@protocol CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSTrendsSceneModel : NSObject <CLSClassificationBasedSignalModel>

 {
    CLSSignalNode *_aircraftNode;
    CLSSignalNode *_airplaneNode;
    CLSSignalNode *_birdNode;
    CLSSignalNode *_flowerNode;
    CLSSignalNode *_forestNode;
    CLSSignalNode *_rainbowNode;
    CLSSignalNode *_skateboardingNode;
    CLSSignalNode *_skyscraperNode;
    CLSSignalNode *_snowNode;
    CLSSignalNode *_sunsetSunriseNode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)baseSceneAnalysisVersionWithSceneAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
-(BOOL)isResponsibleForSignalIdentifier:(NSUInteger)arg0 ;
-(id)initForTesting;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 ;
-(id)modelInfo;
-(id)nodeForSignalIdentifier:(NSUInteger)arg0 ;
-(void)processSignals:(id)arg0 intoProcessedSignals:(id)arg1 ;
-(void)setupVersion33;
-(void)setupVersion80;
-(void)setupVersion84;


@end


#endif