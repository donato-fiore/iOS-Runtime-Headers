// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDATABASE_H
#define AMDATABASE_H


#import <Foundation/Foundation.h>


@interface AMDatabase : NSObject



+(BOOL)checkDatabaseReadAccess:(*id)arg0 ;
+(BOOL)closeDatabase:(*id)arg0 ;
+(BOOL)openDatabase:(*id)arg0 ;
+(id)acousticParameters:(id)arg0 forMaterialName:(id)arg1 error:(*id)arg2 ;
+(id)acousticParameters:(id)arg0 forSemanticLabels:(id)arg1 error:(*id)arg2 ;
+(id)acousticParametersFromCache:(id)arg0 forMaterialName:(id)arg1 error:(*id)arg2 ;
+(id)acousticParametersFromCache:(id)arg0 forSemanticLabels:(id)arg1 error:(*id)arg2 ;
+(id)acousticParametersSQL:(id)arg0 forMaterialName:(id)arg1 error:(*id)arg2 ;
+(id)acousticParametersSQL:(id)arg0 forSemanticLabels:(id)arg1 error:(*id)arg2 ;
+(id)labelsForSemanticType:(id)arg0 error:(*id)arg1 ;
+(id)labelsForSemanticTypeFromCache:(id)arg0 error:(*id)arg1 ;
+(id)labelsForSemanticTypeSQL:(id)arg0 error:(*id)arg1 ;
+(id)materialNamesForAcousticParameterType:(id)arg0 error:(*id)arg1 ;
+(id)materialNamesForAcousticParameterTypeFromCache:(id)arg0 error:(*id)arg1 ;
+(id)materialNamesForAcousticParameterTypeSQL:(id)arg0 error:(*id)arg1 ;


@end


#endif