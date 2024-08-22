// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDUSECASEMANAGER_H
#define AMDUSECASEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AMDModelStore.h"

@interface AMDUseCaseManager : NSObject

@property (retain, nonatomic) AMDModelStore *modelStore; // ivar: _modelStore
@property (retain, nonatomic) NSMutableDictionary *useCaseWorkflows; // ivar: _useCaseWorkflows


+(id)getBusinessLogicJsFileURL;
+(id)sharedManager;
-(BOOL)checkAndUpdateWorkflowDefinitions:(id)arg0 ;
-(BOOL)refreshAMDConfigFromServiceForUser:(id)arg0 andStorefront:(id)arg1 ;
-(BOOL)refreshBusinessLogicJS;
-(id)fetchDataFromServerForUrl:(id)arg0 forApi:(id)arg1 ;
-(id)getAllActiveWorkflows;
-(id)getUseCaseWorkflowForId:(id)arg0 ;
-(id)getWorkflowJSONFileURL;
-(id)init;
-(id)pruneWorkflowsDefinitions:(id)arg0 usingTreatments:(id)arg1 ;
-(id)refreshUserTreatmentsFromServiceForUser:(id)arg0 forStorefront:(id)arg1 ;
-(void)loadAllModels;
-(void)loadWorkflowsFromStorage;
-(void)refreshModelWithId:(id)arg0 withDelegate:(id)arg1 ;


@end


#endif