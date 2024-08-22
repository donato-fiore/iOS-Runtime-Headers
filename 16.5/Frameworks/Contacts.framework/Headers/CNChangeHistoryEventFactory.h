// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGEHISTORYEVENTFACTORY_H
#define CNCHANGEHISTORYEVENTFACTORY_H


#import <Foundation/Foundation.h>


@interface CNChangeHistoryEventFactory : NSObject



-(id)addContactEventWithContact:(id)arg0 containerIdentifier:(id)arg1 ;
-(id)addGroupEventWithGroup:(id)arg0 containerIdentifier:(id)arg1 ;
-(id)addMemberToGroupEventWithMember:(id)arg0 group:(id)arg1 ;
-(id)addSubgroupToGroupEventWithSubgroup:(id)arg0 group:(id)arg1 ;
-(id)deleteContactEventWithContactIdentifier:(id)arg0 ;
-(id)deleteContactEventWithContactIdentifier:(id)arg0 externalURI:(id)arg1 externalModificationTag:(id)arg2 ;
-(id)deleteGroupEventWithGroupIdentifier:(id)arg0 ;
-(id)deleteGroupEventWithGroupIdentifier:(id)arg0 externalURI:(id)arg1 externalModificationTag:(id)arg2 ;
-(id)differentMeCardEventWithContactIdentifier:(id)arg0 ;
-(id)dropEverythingEvent;
-(id)linkContactsEventWithFromContact:(id)arg0 toContact:(id)arg1 unifiedContact:(id)arg2 ;
-(id)preferredContactForImageEventWithPreferredContact:(id)arg0 unifiedContact:(id)arg1 ;
-(id)preferredContactForNameEventWithPreferredContact:(id)arg0 unifiedContact:(id)arg1 ;
-(id)removeMemberFromGroupEventWithMember:(id)arg0 group:(id)arg1 ;
-(id)removeSubgroupFromGroupEventWithSubgroup:(id)arg0 group:(id)arg1 ;
-(id)unlinkContactEventWithContact:(id)arg0 ;
-(id)updateContactEventWithContact:(id)arg0 ;
-(id)updateContactEventWithContact:(id)arg0 imagesChanged:(BOOL)arg1 ;
-(id)updateGroupEventWithGroup:(id)arg0 ;


@end


#endif