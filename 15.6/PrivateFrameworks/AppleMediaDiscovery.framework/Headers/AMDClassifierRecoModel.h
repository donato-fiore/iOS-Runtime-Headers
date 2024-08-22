// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDCLASSIFIERRECOMODEL_H
#define AMDCLASSIFIERRECOMODEL_H



#import "AMDBaseRecoModel.h"

@interface AMDClassifierRecoModel : AMDBaseRecoModel



-(id)getPredictions:(NSUInteger)arg0 andInputBuilder:(id)arg1 andOutputBuilder:(id)arg2 withColdstartModelId:(id)arg3 error:(*id)arg4 ;
-(id)initWithId:(id)arg0 andVersion:(short)arg1 ;


@end


#endif