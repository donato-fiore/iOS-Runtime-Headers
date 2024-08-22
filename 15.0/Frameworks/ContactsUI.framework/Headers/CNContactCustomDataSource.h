// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTCUSTOMDATASOURCE_H
#define CNCONTACTCUSTOMDATASOURCE_H

@class NSMutableArray, CNContactFormatter, NSDictionary, NSArray, NSString, NSMapTable, CNContactStore;
@protocol CNContactChangesObserver, CNContactDataSource, CNContactDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "CNContactFilter.h"

@interface CNContactCustomDataSource : NSObject <CNContactChangesObserver, CNContactDataSource>



@property (retain, nonatomic) NSMutableArray *allContacts; // ivar: _allContacts
@property (nonatomic) BOOL autoUpdateContacts; // ivar: _autoUpdateContacts
@property (readonly, nonatomic) BOOL canReload;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNContactFormatter *contactFormatterImpl; // ivar: _contactFormatterImpl
@property (readonly, nonatomic) NSDictionary *contactMatchInfos;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactDataSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CNContactFilter *effectiveFilter;
@property (copy, nonatomic) CNContactFilter *filter; // ivar: _filter
@property (retain, nonatomic) NSArray *filteredContacts; // ivar: _filteredContacts
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *identifiersToIndexes; // ivar: _identifiersToIndexes
@property (readonly, nonatomic) NSArray *indexSections;
@property (retain, nonatomic) NSArray *keysToFetch; // ivar: _keysToFetch
@property (nonatomic) BOOL observingContacts; // ivar: _observingContacts
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (readonly, nonatomic) CNContactStore *store;
@property (readonly) Class superclass;


-(id)completeContactFromContact:(id)arg0 fromMainStoreOnly:(BOOL)arg1 keysToFetch:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathForContact:(id)arg0 ;
-(id)initWithContacts:(id)arg0 ;
-(id)initWithContacts:(id)arg0 keysToFetch:(id)arg1 ;
-(id)initWithContacts:(id)arg0 keysToFetch:(id)arg1 filter:(id)arg2 ;
-(id)preferredForNameMeContactIdentifier;
-(void)_sendDataSourceDidChange;
-(void)_startObservingContacts;
-(void)_stopObservingContacts;
-(void)_updateContactsObserving;
-(void)_updateFilter;
-(void)contactDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif