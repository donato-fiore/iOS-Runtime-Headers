// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCHANGEHISTORYEVENTCOALESCER_H
#define CNCHANGEHISTORYEVENTCOALESCER_H

@class NSMutableArray, CNMutableOrderedDictionary, NSString, NSArray;
@protocol CNChangeHistoryEventVisitorPrivate;

#import <Foundation/Foundation.h>


@interface CNChangeHistoryEventCoalescer : NSObject <CNChangeHistoryEventVisitorPrivate>

 {
    NSMutableArray *_controlEvents;
    CNMutableOrderedDictionary *_addedContacts;
    CNMutableOrderedDictionary *_updatedContacts;
    CNMutableOrderedDictionary *_deletedContacts;
    CNMutableOrderedDictionary *_addedGroups;
    CNMutableOrderedDictionary *_updatedGroups;
    CNMutableOrderedDictionary *_deletedGroups;
    NSMutableArray *_contactLinkingEvents;
    NSMutableArray *_groupMembershipEvents;
    NSMutableArray *_otherContactEvents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *events;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)coalesceEvents:(id)arg0 ;
+(id)coalescingLog;
-(id)init;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitAddGroupEvent:(id)arg0 ;
-(void)visitAddMemberToGroupEvent:(id)arg0 ;
-(void)visitAddSubgroupToGroupEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDeleteGroupEvent:(id)arg0 ;
-(void)visitDifferentMeCardEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitLinkContactsEvent:(id)arg0 ;
-(void)visitPreferredContactForImageEvent:(id)arg0 ;
-(void)visitPreferredContactForNameEvent:(id)arg0 ;
-(void)visitRemoveMemberFromGroupEvent:(id)arg0 ;
-(void)visitRemoveSubgroupFromGroupEvent:(id)arg0 ;
-(void)visitUnlinkContactEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;
-(void)visitUpdateGroupEvent:(id)arg0 ;


@end


#endif