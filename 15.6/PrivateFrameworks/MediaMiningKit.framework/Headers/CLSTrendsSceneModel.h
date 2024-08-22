// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly) NSUInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)modelWithVersion:(NSUInteger)arg0 ;
+(id)name;
-(BOOL)isResponsibleForSignalIdentifier:(NSUInteger)arg0 ;
-(id)initWithVersion:(NSUInteger)arg0 ;
-(id)modelInfo;
-(id)nodeForSignalIdentifier:(NSUInteger)arg0 ;
-(void)processSignals:(id)arg0 intoProcessedSignals:(id)arg1 ;
-(void)setupVersion33;


@end


#endif