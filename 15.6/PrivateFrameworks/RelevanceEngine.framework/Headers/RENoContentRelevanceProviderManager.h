// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RENOCONTENTRELEVANCEPROVIDERMANAGER_H
#define RENOCONTENTRELEVANCEPROVIDERMANAGER_H



#import "RERelevanceProviderManager.h"

@interface RENoContentRelevanceProviderManager : RERelevanceProviderManager



+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_features;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;


@end


#endif