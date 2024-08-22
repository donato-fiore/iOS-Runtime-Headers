// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRTRIALDEDISCOTASKRESULT_H
#define MLRTRIALDEDISCOTASKRESULT_H

@class NSString;


#import "MLRTrialTaskResult.h"

@interface MLRTrialDediscoTaskResult : MLRTrialTaskResult

@property (readonly, copy, nonatomic) NSString *namespaceName; // ivar: _namespaceName
@property (readonly, copy, nonatomic) NSString *recipeFactorName; // ivar: _recipeFactorName


+(id)baseKeyFromFormat:(id)arg0 variables:(id)arg1 ;
-(BOOL)record:(id)arg0 data:(id)arg1 encodingSchema:(id)arg2 metadata:(id)arg3 errorOut:(*id)arg4 ;
-(BOOL)submitForTask:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithJSONResult:(id)arg0 namespaceName:(id)arg1 factorName:(id)arg2 ;
-(id)variablesFromTrialClient:(id)arg0 ;


@end


#endif