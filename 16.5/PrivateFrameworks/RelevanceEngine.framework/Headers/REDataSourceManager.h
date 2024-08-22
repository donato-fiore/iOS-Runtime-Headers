// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REDATASOURCEMANAGER_H
#define REDATASOURCEMANAGER_H

@class NSMutableArray, NSSet, NSDictionary, NSArray;
@protocol REDataSourceManagerProperties, REDataSourceManagerObserver;


#import "RERelevanceEngineSubsystem.h"
#import "REConcurrentDictionary.h"
#import "REDataSourceLoader.h"

@interface REDataSourceManager : RERelevanceEngineSubsystem <REDataSourceManagerProperties>

 {
    NSMutableArray *_dataSourceControllers;
    NSUInteger _dataSourceState;
    BOOL _locationAllowed;
    NSSet *_disabledDataSources;
    NSDictionary *_identifierDataSourceMap;
    NSDictionary *_identifierApplicationIdentifierMap;
    NSDictionary *_identifierOperatingSystemVersionMap;
    NSDictionary *_unmanagedDataSourcesMap;
    NSSet *_elementGroupSupportingConfigurations;
    REConcurrentDictionary *_elementGroupMap;
    BOOL _ignoreAppInstallation;
    BOOL _disableAutomaticContentManagement;
}


@property (retain) NSSet *availableDataSourceIdentifiers; // ivar: _availableDataSourceIdentifiers
@property (readonly, nonatomic, getter=hasCompletedFirstElementLoad) BOOL completedFirstElementLoad; // ivar: _completedFirstElementLoad
@property (retain) NSSet *currentDataSourceIdentifiers; // ivar: _currentDataSourceIdentifiers
@property (retain) NSArray *currentDataSources; // ivar: _currentDataSources
@property (readonly, nonatomic) NSArray *dataSourceControllers;
@property (readonly, weak, nonatomic) NSObject<REDataSourceManagerObserver> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) REDataSourceLoader *loader; // ivar: _loader
@property (readonly, nonatomic) NSSet *unrestirctedDataSourceIdentifiers;


+(BOOL)_isPrioritizedDataSourceClass:(Class)arg0 ;
+(id)_prioritizedDataSourceClasses;
-(BOOL)_isApplicationRemovedOrRestrictedForIdentifier:(id)arg0 ;
-(Class)classForDataSourceIdentifier:(id)arg0 ;
-(id)elementGroupForIdentifier:(id)arg0 ;
-(id)initWithRelevanceEngine:(id)arg0 dataSourceLoader:(id)arg1 withDelegate:(id)arg2 ;
-(struct ? )minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg0 ;
-(void)_handleApplicationStateChange;
-(void)_queue_availableDataSourcesDidChange;
-(void)_queue_loadDataSourceWithIdentifier:(id)arg0 ;
-(void)_queue_unloadDataSourceWithIdentifier:(id)arg0 ;
-(void)_queue_updateAvailableDataSourceIdentifiers;
-(void)_updatePreferences;
-(void)dealloc;
-(void)enumerateElementDataSourceControllers:(id)arg0 ;
// -(void)enumerateElementDataSourceControllers:(id)arg0 completion:(unk)arg1  ;
-(void)pause;
-(void)resume;


@end


#endif