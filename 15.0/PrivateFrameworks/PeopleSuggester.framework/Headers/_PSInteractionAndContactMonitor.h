// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSINTERACTIONANDCONTACTMONITOR_H
#define _PSINTERACTIONANDCONTACTMONITOR_H

@class NSSet, CNContactStore, _CDInteractionStore;

#import <Foundation/Foundation.h>


@interface _PSInteractionAndContactMonitor : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSSet *contactIdsInContactStore; // ivar: _contactIdsInContactStore
@property (copy, nonatomic) NSSet *contactIdsSeen; // ivar: _contactIdsSeen
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore


-(id)initWithInteractionStore:(id)arg0 contactStore:(id)arg1 ;
-(void)fetchAllContactIdsFromContactStore;
-(void)notifyWhenContactAddedToInteractionStore:(id)arg0 ;
-(void)notifyWhenContactStoreChanged;
-(void)populateContactIdCachesWithMessageCache:(id)arg0 shareCache:(id)arg1 ;


@end


#endif