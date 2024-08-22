// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMCRREMINDERIDLIST_H
#define REMCRREMINDERIDLIST_H

@class NSString, NSMutableOrderedSet, NSUUID;
@protocol CRUndoDelegate, REMObjectIDProviding, REMCRReminderIDListDelegate;

#import <Foundation/Foundation.h>

#import "CRTombstoneOrderedSet.h"
#import "CRDocument.h"
#import "REMObjectID.h"

@interface REMCRReminderIDList : NSObject <CRUndoDelegate, REMObjectIDProviding>

 {
    CRTombstoneOrderedSet *_reminderIDsStorage;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<REMCRReminderIDListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CRDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) REMObjectID *remObjectID; // ivar: _remObjectID
@property (readonly, nonatomic) NSMutableOrderedSet *reminderIDsProxy;
@property (readonly, nonatomic) NSUUID *replica; // ivar: _replica
@property (readonly) Class superclass;


+(id)cdEntityName;
+(id)listFromSerializedData:(id)arg0 replica:(id)arg1 ;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)wantsUndoCommands;
-(NSUInteger)countOfReminderIDs;
-(NSUInteger)indexInReminderIDsOfObject:(id)arg0 ;
-(id)_orderedSet;
-(id)copyForReplica:(id)arg0 ;
-(id)init;
-(id)initWithDocument:(id)arg0 objectID:(id)arg1 ;
-(id)objectInReminderIDsAtIndex:(NSUInteger)arg0 ;
-(void)addReminder:(id)arg0 ;
-(void)addUndoCommandsForObject:(id)arg0 block:(id)arg1 ;
-(void)insertObject:(id)arg0 inReminderIDsAtIndex:(NSUInteger)arg1 ;
-(void)mergeWith:(id)arg0 ;
-(void)removeObjectFromReminderIDsAtIndex:(NSUInteger)arg0 ;


@end


#endif