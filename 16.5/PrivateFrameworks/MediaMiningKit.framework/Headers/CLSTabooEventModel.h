// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSTABOOEVENTMODEL_H
#define CLSTABOOEVENTMODEL_H

@class NSString;
@protocol CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSTabooEventModel : NSObject <CLSClassificationBasedSignalModel>

 {
    CLSSignalNode *_bloodNode;
    CLSSignalNode *_demonstrationNode;
    CLSSignalNode *_destructionNode;
    CLSSignalNode *_fireDevastationNode;
    CLSSignalNode *_floodDevastationNode;
    CLSSignalNode *_funeralNode;
    CLSSignalNode *_hospitalNode;
    CLSSignalNode *_religiousSettingNode;
    CLSSignalNode *_vehicleCrashNode;
    CLSSignalNode *_warNode;
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
-(void)setupVersion32;
-(void)setupVersion33;
-(void)setupVersion50_4;
-(void)setupVersion85;


@end


#endif