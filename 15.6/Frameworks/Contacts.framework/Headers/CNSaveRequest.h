// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSAVEREQUEST_H
#define CNSAVEREQUEST_H

@class NSMutableDictionary, NSMutableArray, NSString, NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNSaveRequest : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_addedContactsByIdentifier;
    NSMutableArray *_updatedContacts;
    NSString *_meCardIdentifier;
    NSMutableDictionary *_addedGroupsByIdentifier;
    NSMutableArray *_updatedGroups;
    NSMutableDictionary *_deletedGroupsByIdentifier;
    NSMutableDictionary *_addedMembersByGroupIdentifier;
    NSMutableDictionary *_removedMembersByGroupIdentifier;
    NSMutableDictionary *_addedSubgroupsByGroupIdentifier;
    NSMutableDictionary *_removedSubgroupsByGroupIdentifier;
    NSMutableDictionary *_addedContainersByIdentifier;
    NSMutableArray *_updatedContainers;
    NSMutableDictionary *_deletedContainersByIdentifier;
    NSMutableDictionary *_movedContainersByIdentifier;
    NSMutableDictionary *_addedAccountContainersByIdentifier;
    NSMutableDictionary *_defaultAccountContainersByIdentifier;
    NSMutableArray *_contactChangeRequests;
    NSMutableArray *_linkRequests;
    NSMutableArray *_unlinkRequests;
    NSMutableArray *_preferredForNameRequests;
    NSMutableArray *_preferredForImageRequests;
    NSMutableDictionary *_parentRecordsByIdentifier;
}


@property (readonly, copy, nonatomic) NSDictionary *addedAccountContainersByParentContainerIdentifier;
@property (readonly, copy, nonatomic) NSArray *addedAccounts; // ivar: _addedAccounts
@property (readonly, copy, nonatomic) NSDictionary *addedContactsByContainerIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *addedContainersByParentContainerIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *addedGroupsByContainerIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *addedMembersByGroupIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *addedSubgroupsByGroupIdentifier;
@property (readonly, copy, nonatomic) NSArray *allAccountIdentifierStrings;
@property (readonly, copy, nonatomic) NSArray *allContactIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allContacts;
@property (readonly, copy, nonatomic) NSArray *allContainers;
@property (readonly, copy, nonatomic) NSArray *allGroupIdentifiers;
@property (readonly, copy, nonatomic) NSArray *allGroups;
@property (copy, nonatomic) NSString *changeHistoryClientIdentifier;
@property (readonly, copy, nonatomic) NSArray *contactChangeRequests;
@property (readonly, copy, nonatomic) NSDictionary *defaultAccountContainersByAccountIdentifier;
@property (readonly, copy, nonatomic) NSArray *deletedContacts;
@property (readonly, copy, nonatomic) NSDictionary *deletedContactsByIdentifier; // ivar: _deletedContactsByIdentifier
@property (readonly, copy, nonatomic) NSArray *deletedContainers;
@property (readonly, copy, nonatomic) NSArray *deletedGroups;
@property (nonatomic) BOOL ignoresGuardianRestrictions; // ivar: _ignoresGuardianRestrictions
@property (nonatomic) BOOL ignoresParentalRestrictions;
@property (readonly, copy, nonatomic) NSString *meCardIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *movedContainersByParentContainerIdentifier;
@property (readonly, copy, nonatomic) NSArray *removedAccounts; // ivar: _removedAccounts
@property (readonly, copy, nonatomic) NSDictionary *removedMembersByGroupIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *removedSubgroupsByGroupIdentifier;
@property (readonly, copy, nonatomic) NSString *saveRequestIdentifier; // ivar: _saveRequestIdentifier
@property (nonatomic) BOOL shouldRefetchContacts; // ivar: _shouldRefetchContacts
@property (readonly, copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *transactionAuthor; // ivar: _transactionAuthor
@property (nonatomic) BOOL unsafeApplyChangesOnly; // ivar: _unsafeApplyChangesOnly
@property (readonly, copy, nonatomic) NSArray *updatedContacts;
@property (readonly, copy, nonatomic) NSArray *updatedContainers;
@property (readonly, copy, nonatomic) NSArray *updatedGroups;


+(BOOL)supportsSecureCoding;
-(id)_dictionaryOfArraysFromDictionaryOfDictionaries:(id)arg0 ;
-(id)allAccountIdentifiers;
-(id)allContainerIdentifierStrings:(*BOOL)arg0 ;
-(id)allContainerIdentifiers:(*BOOL)arg0 ;
-(id)flattenedDictionaryForDictionaryOfTuples:(id)arg0 ;
-(id)groupWithAddedMemberForGroupIdentifier:(id)arg0 ;
-(id)groupWithAddedSubgroupForGroupIdentifier:(id)arg0 ;
-(id)groupWithRemovedMemberForGroupIdentifier:(id)arg0 ;
-(id)groupWithRemovedSubgroupForGroupIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_insertContact:(id)arg0 intoDictionary:(id)arg1 complementDictionary:(id)arg2 ;
-(void)acceptChangeHistoryEventVisitor:(id)arg0 ;
-(void)addAccount:(id)arg0 ;
-(void)addContact:(id)arg0 toContainerWithIdentifier:(id)arg1 ;
-(void)addContainer:(id)arg0 toAccountWithIdentifier:(id)arg1 ;
-(void)addContainer:(id)arg0 toContainerWithIdentifier:(id)arg1 ;
-(void)addGroup:(id)arg0 toContainerWithIdentifier:(id)arg1 ;
-(void)addMember:(id)arg0 toGroup:(id)arg1 ;
-(void)addSubgroup:(id)arg0 toGroup:(id)arg1 ;
-(void)deleteContact:(id)arg0 ;
-(void)deleteContainer:(id)arg0 ;
-(void)deleteGroup:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)linkContact:(id)arg0 toContact:(id)arg1 ;
-(void)moveContainer:(id)arg0 toContainerWithIdentifier:(id)arg1 ;
-(void)preferLinkedContactForImage:(id)arg0 inUnifiedContact:(id)arg1 ;
-(void)preferLinkedContactForName:(id)arg0 inUnifiedContact:(id)arg1 ;
-(void)queueUpdatedObject:(id)arg0 intoArray:(id)arg1 ;
-(void)removeAccount:(id)arg0 ;
-(void)removeMember:(id)arg0 fromGroup:(id)arg1 ;
-(void)removeSubgroup:(id)arg0 fromGroup:(id)arg1 ;
-(void)setContainer:(id)arg0 asDefaultContainerOfAccountWithIdentifier:(id)arg1 ;
-(void)setLinkIdentifier:(id)arg0 forContact:(id)arg1 ;
-(void)unlinkContact:(id)arg0 ;
-(void)updateContact:(id)arg0 ;
-(void)updateContainer:(id)arg0 ;
-(void)updateGroup:(id)arg0 ;
-(void)withDifferentMeCard:(id)arg0 ;
-(void)withEachAddedContact:(id)arg0 ;
-(void)withEachAddedGroup:(id)arg0 ;
-(void)withEachContactPreferredForImage:(id)arg0 ;
-(void)withEachContactPreferredForName:(id)arg0 ;
-(void)withEachDeletedContact:(id)arg0 ;
-(void)withEachDeletedGroup:(id)arg0 ;
-(void)withEachLinkedContact:(id)arg0 ;
-(void)withEachMemberAddedToGroup:(id)arg0 ;
-(void)withEachMemberRemovedFromGroup:(id)arg0 ;
-(void)withEachSubgroupAddedToGroup:(id)arg0 ;
-(void)withEachSubgroupRemovedFromGroup:(id)arg0 ;
-(void)withEachUnlinkedContact:(id)arg0 ;
-(void)withEachUpdatedContact:(id)arg0 ;
-(void)withEachUpdatedGroup:(id)arg0 ;


@end


#endif