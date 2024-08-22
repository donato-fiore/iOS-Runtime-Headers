// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLFILESTORAGE_H
#define PFLFILESTORAGE_H


#import <Foundation/Foundation.h>


@interface PFLFileStorage : NSObject



+(BOOL)compiledModelExistsForModelId:(id)arg0 ;
+(BOOL)compiledModelRemoveForModelId:(id)arg0 ;
+(BOOL)fileExistsAtPath:(id)arg0 ;
+(BOOL)modelExistsForModelId:(id)arg0 ;
+(BOOL)removeFileAtPath:(id)arg0 ;
+(BOOL)savedStateExistsForTaskId:(id)arg0 ;
+(BOOL)savedStateRemoveForTaskId:(id)arg0 ;
+(BOOL)uploadResultsExistsForTaskId:(id)arg0 ;
+(BOOL)uploadResultsRemoveForTaskId:(id)arg0 ;
+(id)_compiledModelFileName:(id)arg0 ;
+(id)_fileManager;
+(id)_listFilesAtPath:(id)arg0 ;
+(id)_localCacheModelsPath;
+(id)_localCacheSavedStatesPath;
+(id)_localCacheUploadResultsPath;
+(id)_modelFileName:(id)arg0 ;
+(id)_modelsFolder;
+(id)_savedStateFileName:(id)arg0 ;
+(id)_savedStatesFolder;
+(id)_uploadResultsFileName:(id)arg0 ;
+(id)_uploadResultsFolder;
+(id)compiledModelMoveToLocalCache:(id)arg0 from:(id)arg1 ;
+(id)compiledModelRetrieveForModelId:(id)arg0 ;
+(id)modelMoveToLocalCache:(id)arg0 from:(id)arg1 ;
+(id)modelRetrieveForModelId:(id)arg0 ;
+(id)savedStateRetrieveForTaskId:(id)arg0 ;
+(id)savedStateSave:(id)arg0 forTaskId:(id)arg1 ;
+(id)uploadResultsRetrieveForTaskId:(id)arg0 ;
+(id)uploadResultsSave:(id)arg0 forTaskId:(id)arg1 ;
+(void)cleanUnusedResourcesExceptActiveModels:(id)arg0 activeTasks:(id)arg1 ;
+(void)initialize;


@end


#endif