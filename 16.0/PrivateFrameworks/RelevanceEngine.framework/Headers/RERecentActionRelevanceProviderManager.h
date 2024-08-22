// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERECENTACTIONRELEVANCEPROVIDERMANAGER_H
#define RERECENTACTIONRELEVANCEPROVIDERMANAGER_H

@class NSMutableDictionary, NSDate;


#import "RERelevanceProviderManager.h"

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {
    NSMutableDictionary *_relevanceProviderMap;
    NSDate *_lastDateUpdate;
}




+(BOOL)_supportsHistoricProviders;
+(Class)_relevanceProviderClass;
+(id)_features;
-(BOOL)_isHistoricProvider:(id)arg0 ;
-(float)_relevanceForHistoricProvider:(id)arg0 ;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_addedProvider:(id)arg0 ;
-(void)_handleActionPerformedNotifiction:(id)arg0 ;
-(void)_handleSignificantTimeChange;
-(void)_prepareForUpdate;
-(void)_removeProvider:(id)arg0 ;
-(void)_scheduleUpdatesForActionProvider:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)resume;


@end


#endif