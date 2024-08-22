// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REPRIORITYRELEVANCEPROVIDERMANAGER_H
#define REPRIORITYRELEVANCEPROVIDERMANAGER_H



#import "RERelevanceProviderManager.h"

@interface REPriorityRelevanceProviderManager : RERelevanceProviderManager



+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_features;
-(float)_relevanceForProvider:(id)arg0 ;


@end


#endif