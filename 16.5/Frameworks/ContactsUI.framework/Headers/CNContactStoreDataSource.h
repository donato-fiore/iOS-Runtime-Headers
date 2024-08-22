// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTSTOREDATASOURCE_H
#define CNCONTACTSTOREDATASOURCE_H

@class NSDictionary, CNContactFormatter, NSArray, NSString, CNContainer, CNGroup, CNManagedConfiguration, CNContact, CNContactStore, CNCoalescingTimer;
@protocol CNContactDataSource, OS_dispatch_queue, CNScheduler, CNContactDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "CNContactStoreSnapshot.h"
#import "CNContactFilter.h"
#import "CNContactStoreFilter.h"

@interface CNContactStoreDataSource : NSObject <CNContactDataSource>

 {
    CNContactStoreSnapshot *_currentSnapshot;
    NSDictionary *_sectionHeadersDictionary;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadingSnapshot;
    id<CNScheduler> *_mainThreadScheduler;
}


@property (readonly, nonatomic) BOOL canReload;
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: contactFormatter
@property (readonly, nonatomic) NSDictionary *contactMatchInfos;
@property (readonly, nonatomic) NSArray *contacts;
@property (retain, nonatomic) CNContactStoreSnapshot *currentSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactDataSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CNContactFilter *effectiveFilter;
@property (nonatomic) BOOL fetchUnified; // ivar: _fetchUnified
@property (copy, nonatomic) CNContactStoreFilter *filter; // ivar: _filter
@property (readonly, nonatomic) BOOL filterShowsSingleExchangeFolder;
@property (readonly, nonatomic) BOOL filterShowsSingleGroup;
@property (retain, nonatomic) CNContainer *filteredContainer; // ivar: _filteredContainer
@property (retain, nonatomic) CNGroup *filteredGroup; // ivar: _filteredGroup
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *indexSections;
@property (readonly, nonatomic) NSArray *indexSectionsArray;
@property (retain, nonatomic) NSArray *keysToFetch; // ivar: _keysToFetch
@property (readonly, nonatomic) NSDictionary *localizedSectionHeaders;
@property (readonly, nonatomic) NSDictionary *localizedSectionIndices; // ivar: _localizedSectionIndices
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (copy, nonatomic) CNContact *meContact; // ivar: _meContact
@property (nonatomic) BOOL meContactNeedsUpdate; // ivar: _meContactNeedsUpdate
@property (readonly, nonatomic) NSDictionary *sectionHeadersDictionary;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (nonatomic) BOOL shouldRevalidateFilterOnStoreChange; // ivar: _shouldRevalidateFilterOnStoreChange
@property (readonly, nonatomic) NSInteger sortOrder;
@property (retain, nonatomic) CNContactStore *store; // ivar: _store
@property (readonly) Class superclass;
@property (retain, nonatomic) CNCoalescingTimer *timer; // ivar: _timer


+(BOOL)isErrorPossiblyRelatedToExtraStores:(id)arg0 ;
+(id)keyPathsForValuesAffectingEffectiveFilter;
-(BOOL)canUseTitleForAccount:(id)arg0 ;
-(BOOL)doesFilterShowAllContainersForAccount:(id)arg0 ;
-(BOOL)isLoading;
-(id)accountForContainerIdentifier:(id)arg0 ;
-(id)completeContactFromContact:(id)arg0 fromMainStoreOnly:(BOOL)arg1 keysToFetch:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathForContact:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)preferredForNameMeContactIdentifier;
-(id)preferredForNameMeContactWithKeysToFetch:(id)arg0 ;
-(id)titleForContainer:(id)arg0 ;
-(void)_reloadSynchronously:(BOOL)arg0 ;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)contactStoreDidChangeHandler;
-(void)contactStoreMeContactDidChange:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerForRelevantChangeNotifications;
-(void)reload;
-(void)reloadAsynchronously;
-(void)reset;
-(void)validateFilter;


@end


#endif