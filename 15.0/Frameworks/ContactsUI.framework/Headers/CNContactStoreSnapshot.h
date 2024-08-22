// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTSTORESNAPSHOT_H
#define CNCONTACTSTORESNAPSHOT_H

@class NSMapTable, NSArray, CNContactMatchSummarizer, NSMutableAttributedString, NSMutableArray, NSMutableDictionary, CNManagedConfiguration, NSPointerArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "CNContactStoreDataSource.h"
#import "CNContactStoreFilter.h"
#import "CNContactDataSourceLIFOScheduler.h"

@interface CNContactStoreSnapshot : NSObject {
    NSUInteger _contactsCount;
    NSMapTable *_contactsCache;
    NSObject<OS_dispatch_semaphore> *_cacheAccessSemaphore;
    _NSRange _currentlyLoadingBackgroundRange;
    NSArray *_sections;
    NSArray *_indexSections;
    CNContactMatchSummarizer *_summarizer;
    NSMutableAttributedString *_emptyExcerptInstanceMarker;
    NSUInteger _lastRequestedIndex;
}


@property (readonly, nonatomic) NSMutableArray *batchContactIdentifiers; // ivar: _batchContactIdentifiers
@property (readonly, nonatomic) NSMutableDictionary *contactMatchInfos; // ivar: _contactMatchInfos
@property (readonly, nonatomic) NSArray *contacts;
@property (weak, nonatomic) CNContactStoreDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) CNContactStoreFilter *filter; // ivar: _filter
@property (readonly, nonatomic) NSMapTable *identifiersToIndexPath; // ivar: _identifiersToIndexPath
@property (readonly, nonatomic) NSArray *indexSections;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration; // ivar: _managedConfiguration
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSPointerArray *summarizationFutures; // ivar: _summarizationFutures
@property (readonly, nonatomic) CNContactDataSourceLIFOScheduler *summarizationQueue; // ivar: _summarizationQueue


-(id)_keysToFetch;
-(id)init;
-(id)objectIn_contactsAtIndex:(NSUInteger)arg0 ;
-(void)_generateExcerptsInRange:(struct _NSRange )arg0 ;
-(void)_loadAllContacts;
-(void)_loadContactsInRange:(struct _NSRange )arg0 inBackground:(BOOL)arg1 ;
-(void)dealloc;
-(void)prepareAllContacts;
-(void)prepareEnoughContacts;


@end


#endif