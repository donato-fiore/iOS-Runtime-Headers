// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REFORCEDRELEVANCEPROVIDERMANAGER_H
#define REFORCEDRELEVANCEPROVIDERMANAGER_H



#import "RERelevanceProviderManager.h"

@interface REForcedRelevanceProviderManager : RERelevanceProviderManager



+(BOOL)_supportsHistoricProviders;
+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_features;
-(BOOL)_isHistoricProvider:(id)arg0 ;
-(float)_relevanceForHistoricProvider:(id)arg0 ;
-(float)_relevanceForProvider:(id)arg0 ;


@end


#endif