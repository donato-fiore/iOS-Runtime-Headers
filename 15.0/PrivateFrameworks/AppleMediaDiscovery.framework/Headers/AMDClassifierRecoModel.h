// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDCLASSIFIERRECOMODEL_H
#define AMDCLASSIFIERRECOMODEL_H



#import "AMDBaseRecoModel.h"

@interface AMDClassifierRecoModel : AMDBaseRecoModel



-(id)initWithId:(id)arg0 andVersion:(short)arg1 ;
-(id)topNPredictions:(NSUInteger)arg0 usingFeatureProvider:(id)arg1 andInputBuilder:(id)arg2 andOutputBuilder:(id)arg3 withColdstartModelId:(id)arg4 error:(*id)arg5 ;


@end


#endif