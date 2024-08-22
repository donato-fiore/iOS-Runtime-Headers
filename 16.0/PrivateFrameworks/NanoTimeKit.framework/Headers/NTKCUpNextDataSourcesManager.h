// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCUPNEXTDATASOURCESMANAGER_H
#define NTKCUPNEXTDATASOURCESMANAGER_H

@class RERelevanceEngine, NSArray;
@protocol OS_dispatch_queue, NTKCUpNextDataSourcesManagerIdentifiersDelegate;

#import <Foundation/Foundation.h>


@interface NTKCUpNextDataSourcesManager : NSObject {
    RERelevanceEngine *_relevanceEngine;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // ivar: _fetchQueue
@property (copy) NSArray *firstPartyDataSourceEntries; // ivar: _firstPartyDataSourceEntries
@property (weak, nonatomic) NSObject<NTKCUpNextDataSourcesManagerIdentifiersDelegate> *firstPartyIdentifiersDelegate; // ivar: _firstPartyIdentifiersDelegate
@property (copy) NSArray *sportsDataSourceEntries; // ivar: _sportsDataSourceEntries
@property (weak, nonatomic) NSObject<NTKCUpNextDataSourcesManagerIdentifiersDelegate> *sportsIdentifiersDelegate; // ivar: _sportsIdentifiersDelegate
@property (copy) NSArray *thirdPartyDataSourceEntries; // ivar: _thirdPartyDataSourceEntries
@property (weak, nonatomic) NSObject<NTKCUpNextDataSourcesManagerIdentifiersDelegate> *thirdPartyIdentifiersDelegate; // ivar: _thirdPartyIdentifiersDelegate
@property (readonly, nonatomic) ? watchVersion; // ivar: _watchVersion


-(BOOL)_isNanoWeatherAppID:(id)arg0 ;
-(id)_dedupeAndSortFirstPartyDataSourcesFromIdentifiers:(id)arg0 ;
-(id)_preGraceThirdPartyBundleIdentifiers;
-(id)initWatchVersion:(struct ? )arg0 ;
-(void)_appsChangedNotification:(id)arg0 ;
-(void)_buildRows;
-(void)_buildRowsAfterPrewarming;
-(void)_dataSourcesChangedNotification:(id)arg0 ;
-(void)_dedupeAndSortThirdPartyDataSourcesFromIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)_fetchThirdPartyBundleIdentifiersWithCompletion:(id)arg0 ;
-(void)_phoneDedupeFromIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)_phoneDedupedDataSourcesFromIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)_prewarmRowBuildingWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fetchIdentifiers;


@end


#endif