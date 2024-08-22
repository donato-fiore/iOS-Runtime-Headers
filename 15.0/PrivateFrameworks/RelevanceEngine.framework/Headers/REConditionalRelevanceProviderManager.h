// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RECONDITIONALRELEVANCEPROVIDERMANAGER_H
#define RECONDITIONALRELEVANCEPROVIDERMANAGER_H



#import "RERelevanceProviderManager.h"

@interface REConditionalRelevanceProviderManager : RERelevanceProviderManager



+(BOOL)_wantsDelayedUpdate;
+(Class)_relevanceProviderClass;
+(id)_dependencyClasses;
+(id)_features;
-(float)_relevanceForProvider:(id)arg0 ;


@end


#endif