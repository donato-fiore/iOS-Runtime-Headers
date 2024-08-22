// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESESSIONRELEVANCEPROVIDERMANAGER_H
#define RESESSIONRELEVANCEPROVIDERMANAGER_H

@class NSDate, NSString;
@protocol RESessionRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager <RESessionRelevanceProviderManagerProperties>

 {
    NSDate *_lastDateUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastUpdateDate;
@property (readonly) Class superclass;


+(BOOL)_supportsHistoricProviders;
+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_features;
-(BOOL)_isHistoricProvider:(id)arg0 ;
-(float)_relevanceForHistoricProvider:(id)arg0 ;
-(float)_relevanceForProvider:(id)arg0 ;
-(void)_addedProvider:(id)arg0 ;
-(void)_handleSignificantTimeChange;
-(void)_prepareForUpdate;
-(void)_scheduleUpdatesForSessionProvider:(id)arg0 ;
-(void)pause;
-(void)resume;


@end


#endif