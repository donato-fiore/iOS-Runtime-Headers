// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLMOMENTSHAREFEATURE_H
#define CPLMOMENTSHAREFEATURE_H



#import "CPLFeature.h"

@interface CPLMomentShareFeature : CPLFeature



-(BOOL)disableFeatureInStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)enableFeatureInStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)handleScopeWhenFeatureIsDisabled:(id)arg0 scopeType:(NSInteger)arg1 store:(id)arg2 error:(*id)arg3 ;


@end


#endif