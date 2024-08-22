// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHACURARESHADOWEVALUATIONRECIPEDECODER_H
#define PHACURARESHADOWEVALUATIONRECIPEDECODER_H


#import <Foundation/Foundation.h>


@interface PHACurareShadowEvaluationRecipeDecoder : NSObject



+(BOOL)isValidFiltersByDatasetName:(id)arg0 ;
+(id)allowedPredicates;
+(id)cameraPredicate;
+(id)castObject:(id)arg0 withName:(id)arg1 toClass:(Class)arg2 error:(*id)arg3 ;
+(id)decodeModelSpecificInfo:(id)arg0 models:(id)arg1 ;
+(id)decodeRecipeUserInfo:(id)arg0 models:(id)arg1 photoLibrary:(id)arg2 graphManager:(id)arg3 trialDeploymentID:(id)arg4 trialExperimentID:(id)arg5 trialTreatmentID:(id)arg6 decodingError:(*id)arg7 ;
+(id)decodingErrorWithMessage:(id)arg0 ;
+(id)objectOfClass:(Class)arg0 forKey:(id)arg1 inDictionary:(id)arg2 error:(*id)arg3 ;
+(id)optionalObjectOfClass:(Class)arg0 forKey:(id)arg1 inDictionary:(id)arg2 error:(*id)arg3 ;


@end


#endif