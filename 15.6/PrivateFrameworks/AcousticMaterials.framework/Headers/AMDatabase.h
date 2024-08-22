// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDATABASE_H
#define AMDATABASE_H


#import <Foundation/Foundation.h>


@interface AMDatabase : NSObject



+(BOOL)checkDatabaseReadAccess:(*id)arg0 ;
+(BOOL)closeDatabase:(*id)arg0 ;
+(BOOL)openDatabase:(*id)arg0 ;
+(BOOL)validatedWithoutError:(*id)arg0 ;
+(id)absorptionCoefficientsForName:(id)arg0 error:(*id)arg1 ;
+(id)absorptionMaterialNames:(*id)arg0 ;
+(id)acousticParameters:(id)arg0 forMaterialName:(id)arg1 error:(*id)arg2 ;
+(id)acousticParameters:(id)arg0 forSemanticLabels:(id)arg1 error:(*id)arg2 ;
+(id)labelsForSemanticType:(id)arg0 error:(*id)arg1 ;
+(id)materialNamesForAcousticParameterType:(id)arg0 error:(*id)arg1 ;
+(id)scatteringCoefficientsForName:(id)arg0 error:(*id)arg1 ;
+(id)scatteringMaterialNames:(*id)arg0 ;
+(id)soundReductionIndexCoefficientsForName:(id)arg0 error:(*id)arg1 ;
+(id)soundReductionIndexMaterialNames:(*id)arg0 ;


@end


#endif