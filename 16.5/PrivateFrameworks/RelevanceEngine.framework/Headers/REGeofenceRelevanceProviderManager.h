// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REGEOFENCERELEVANCEPROVIDERMANAGER_H
#define REGEOFENCERELEVANCEPROVIDERMANAGER_H



#import "RESharedLocationRelevanceProviderManager.h"

@interface REGeofenceRelevanceProviderManager : RESharedLocationRelevanceProviderManager



+(Class)_relevanceProviderClass;
+(id)_dependencyClasses;
+(id)_features;
-(id)_valueForProvider:(id)arg0 context:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(int)_queryRevokableStatusForProvider:(id)arg0 ;


@end


#endif