// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDMODEL_H
#define AMDMODEL_H

@class NSManagedObject, NSString;



@interface AMDModel : NSManagedObject

@property (copy, nonatomic) NSString *compiledModelDir;
@property (nonatomic) NSInteger creationTimeSeconds;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;


+(id)deleteAllModelUrls:(*id)arg0 ;
+(id)deleteWithPredicate:(id)arg0 error:(*id)arg1 ;
+(id)fetchAll:(*id)arg0 ;
+(id)fetchRequest;
+(id)getCurrentModelInfoByModelId;
+(id)getModelInfo:(id)arg0 error:(*id)arg1 ;
+(id)getModelPath:(id)arg0 error:(*id)arg1 ;
+(id)getModelPathForUsecase:(id)arg0 inDomain:(id)arg1 forModelId:(id)arg2 withTreatmentId:(id)arg3 error:(*id)arg4 ;
+(void)deleteModels:(id)arg0 error:(*id)arg1 ;
+(void)saveModels:(id)arg0 error:(*id)arg1 ;


@end


#endif