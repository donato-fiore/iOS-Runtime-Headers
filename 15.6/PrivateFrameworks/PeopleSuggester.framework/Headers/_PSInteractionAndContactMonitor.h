// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSINTERACTIONANDCONTACTMONITOR_H
#define _PSINTERACTIONANDCONTACTMONITOR_H

@class NSData, NSMutableSet, NSSet, CNContactStore, NSString, _CDInteractionStore;
@protocol CNChangeHistoryEventVisitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PSInteractionAndContactMonitor : NSObject <CNChangeHistoryEventVisitor>

 {
    os_unfair_lock_s _lock;
    NSData *_changeHistoryToken;
    NSMutableSet *_historyChangesQueuedToAdd;
    NSMutableSet *_historyChangesQueuedToDelete;
    id *_processContactChanges;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}


@property (copy, nonatomic) NSSet *contactIdsInContactStore; // ivar: _contactIdsInContactStore
@property (copy, nonatomic) NSSet *contactIdsSeen; // ivar: _contactIdsSeen
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (readonly) Class superclass;


-(id)initWithInteractionStore:(id)arg0 contactStore:(id)arg1 ;
-(void)fetchAllContactIdsFromContactStore;
-(void)fetchChangedContactIdsFromContactStore;
-(void)notifyWhenContactAddedToInteractionStore:(id)arg0 ;
-(void)notifyWhenContactStoreChanged;
-(void)populateContactIdCachesWithMessageCache:(id)arg0 shareCache:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif