// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTASYNCDATASOURCE_H
#define CNCONTACTASYNCDATASOURCE_H

@class NSArray, CNContactFormatter, NSDictionary, NSString, CNPublishingSubject, NSMutableArray, CNContactStore;
@protocol CNContactDataSource, CNContactDataSourceDelegate, CNSchedulerProvider, CNCancelable;

#import <Foundation/Foundation.h>

#import "CNContactDataSourceSafeDelegate.h"
#import "CNContactFilter.h"
#import "CNContactStoreFilter.h"

@interface CNContactAsyncDataSource : NSObject <CNContactDataSource>

 {
    CNContactDataSourceSafeDelegate *_delegate;
}


@property (retain, nonatomic) NSArray *allKeysToFetchForTransientContacts; // ivar: _allKeysToFetchForTransientContacts
@property (readonly, nonatomic) BOOL canReload;
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (readonly, nonatomic) NSDictionary *contactMatchInfos;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CNContactFilter *effectiveFilter;
@property (copy, nonatomic) CNContactStoreFilter *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *indexSections;
@property (retain, nonatomic) NSObject<CNSchedulerProvider> *reloadSchedulerProvider; // ivar: _reloadSchedulerProvider
@property (retain, nonatomic) CNPublishingSubject *reloadStream; // ivar: _reloadStream
@property (retain, nonatomic) NSMutableArray *resultingContacts; // ivar: _resultingContacts
@property (retain, nonatomic) NSObject<CNCancelable> *searchCancelationToken; // ivar: _searchCancelationToken
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (retain, nonatomic) CNContactStore *store; // ivar: _store
@property (readonly) Class superclass;


-(id)completeContactFromContact:(id)arg0 fromMainStoreOnly:(BOOL)arg1 keysToFetch:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathForContact:(id)arg0 ;
-(id)initWithStore:(id)arg0 ;
-(id)preferredForNameMeContactIdentifier;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateResults;
-(void)invalidateSearch;
-(void)reload;
-(void)reloadWithRequest:(id)arg0 ;
-(void)setNetworkActivityIndicatorVisible:(BOOL)arg0 ;


@end


#endif