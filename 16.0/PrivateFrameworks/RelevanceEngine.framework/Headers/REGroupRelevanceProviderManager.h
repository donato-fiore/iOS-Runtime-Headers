// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REGROUPRELEVANCEPROVIDERMANAGER_H
#define REGROUPRELEVANCEPROVIDERMANAGER_H



#import "RERelevanceProviderManager.h"

@interface REGroupRelevanceProviderManager : RERelevanceProviderManager



+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_features;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;


@end


#endif