// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDATERELEVANCEPROVIDERMANAGER_H
#define REDATERELEVANCEPROVIDERMANAGER_H

@class NSDate, NSDateInterval;
@protocol REDateRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties>

 {
    NSDate *_lastDateUpdate;
    NSDateInterval *_todayInterval;
}


@property (readonly, nonatomic) NSDate *lastDateUpdate;
@property (readonly, nonatomic) NSDate *todayEnd;
@property (readonly, nonatomic) NSDate *todayStart;


+(BOOL)_supportsHistoricProviders;
+(BOOL)_wantsSeperateRelevanceQueue;
+(Class)_relevanceProviderClass;
+(id)_dependencyClasses;
+(id)_features;
-(BOOL)_isHistoricProvider:(id)arg0 ;
-(id)_valueForHistoricProvider:(id)arg0 feature:(id)arg1 ;
-(id)_valueForProvider:(id)arg0 context:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(void)_addedProvider:(id)arg0 ;
-(void)_handleSignificantTimeChange;
-(void)_prepareForUpdate;
-(void)_scheduleUpdateForDate:(id)arg0 ;
-(void)_scheduleUpdatesForDateProvider:(id)arg0 ;
-(void)pause;
-(void)resume;


@end


#endif