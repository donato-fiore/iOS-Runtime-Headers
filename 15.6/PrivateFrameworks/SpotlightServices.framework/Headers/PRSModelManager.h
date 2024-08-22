// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSMODELMANAGER_H
#define PRSMODELMANAGER_H

@class NSString, NSMutableDictionary, NSUserDefaults;

#import <Foundation/Foundation.h>

#import "SSTrialManager.h"

@interface PRSModelManager : NSObject

@property (nonatomic) NSUInteger activeCount; // ivar: _activeCount
@property (nonatomic) BOOL disablePolicy; // ivar: _disablePolicy
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (retain, nonatomic) NSString *modelType; // ivar: _modelType
@property (retain, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (retain, nonatomic) NSMutableDictionary *models; // ivar: _models
@property (retain, nonatomic) NSMutableDictionary *otherModels; // ivar: _otherModels
@property (retain, nonatomic) NSString *otherModelsType; // ivar: _otherModelsType
@property (retain, nonatomic) SSTrialManager *trialModelManager; // ivar: _trialModelManager
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(BOOL)loadModelsWithDirectory:(id)arg0 intoModelDict:(id)arg1 ;
+(BOOL)loadOtherModelsWithDirectory:(id)arg0 intoModelDict:(id)arg1 ;
+(id)directivesFromFilePath:(id)arg0 ;
+(id)sharedModelManager;
+(void)cannedInfoForType:(NSUInteger)arg0 directivesPath:(*id)arg1 modelName:(*id)arg2 ;
+(void)loadModelWithURL:(id)arg0 type:(NSUInteger)arg1 directivesPath:(id)arg2 intoModelDict:(id)arg3 error:(*id)arg4 ;
+(void)pathsFor:(NSUInteger)arg0 withParentPath:(id)arg1 modelPath:(*id)arg2 directivesPath:(*id)arg3 ;
-(*float)computeL2ScoresForVectors:(id)arg0 secondVector:(id)arg1 withServerFeatures:(id)arg2 withBundleFeatures:(id)arg3 experimentalWeight1:(CGFloat)arg4 experimentalWeight2:(CGFloat)arg5 shouldCancel:(*BOOL)arg6 clientBundle:(id)arg7 hasMail:(BOOL)arg8 ;
-(*float)computeScoresForFeatures:(id)arg0 withBundleFeatures:(id)arg1 serverBundleFeatures:(id)arg2 usingModelContext:(id)arg3 qos:(unsigned int)arg4 shouldCancel:(*BOOL)arg5 filterBundle:(id)arg6 ;
-(BOOL)loadCannedModels;
-(BOOL)loadModels;
-(BOOL)loadModelsFromTrialWithCompletion:(id)arg0 ;
-(BOOL)loadOtherModels;
-(CGFloat)testL2WithData:(id)arg0 experimental:(BOOL)arg1 ;
-(float)computeSuggestionScoreForFeatures:(id)arg0 ;
-(id)getL2ModelVersionForClientBundle:(id)arg0 ;
-(id)init;
-(void)activate;
-(void)deactivate;
-(void)dealloc;
-(void)loadCannedModelWithType:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)triggerUpdate;
-(void)updateModelsAccordingToHierarchy;
-(void)updateModelsAccordingToHierarchy:(id)arg0 updateEnabled:(BOOL)arg1 disablePendingUpdates:(BOOL)arg2 ;


@end


#endif