// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIFAMILYMEMBERDOWNTIMECONTACTDATASOURCE_H
#define CNUIFAMILYMEMBERDOWNTIMECONTACTDATASOURCE_H

@class NSArray, NSString, CNContact, NSMutableArray, CNContactStore;

#import <Foundation/Foundation.h>


@interface CNUIFamilyMemberDowntimeContactDataSource : NSObject

@property (retain, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (copy, nonatomic) NSString *filterString; // ivar: _filterString
@property (retain, nonatomic) NSArray *filteredSections; // ivar: _filteredSections
@property (nonatomic) BOOL isShowingFamilyMemberContacts; // ivar: _isShowingFamilyMemberContacts
@property (retain, nonatomic) CNContact *meContact; // ivar: _meContact
@property (nonatomic) BOOL meContactNeedsUpdate; // ivar: _meContactNeedsUpdate
@property (readonly, nonatomic) NSArray *requiredKeys; // ivar: _requiredKeys
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSMutableArray *selectedContactItems; // ivar: _selectedContactItems
@property (retain, nonatomic) CNContactStore *store; // ivar: _store


+(BOOL)isErrorPossiblyRelatedToExtraStores:(id)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)sortOrder;
-(id)completeContactFromContact:(id)arg0 fromMainStoreOnly:(BOOL)arg1 keysToFetch:(id)arg2 ;
-(id)contactItemForIndexPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStore:(id)arg0 familyMembers:(id)arg1 requiredKeys:(id)arg2 ;
-(id)labelForFamilyMember:(id)arg0 ;
-(id)preferredForNameMeContactIdentifier;
-(id)preferredForNameMeContactWithKeysToFetch:(id)arg0 ;
-(id)selectedContacts;
-(id)titleForSection:(NSInteger)arg0 ;
-(void)_loadAllContactsIfNeeded;
-(void)filterSectionsForString:(id)arg0 ;
-(void)postProcessForFamilyMembersWithContacts:(id)arg0 ;
-(void)setContactItemSelected:(BOOL)arg0 forIndexPath:(id)arg1 ;


@end


#endif