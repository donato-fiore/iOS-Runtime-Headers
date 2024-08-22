// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPARTICIPANTUPDATER_H
#define ICPARTICIPANTUPDATER_H

@class NSManagedObjectContext;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICParticipantUpdater : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(id)initWithManagedObjectContext:(id)arg0 ;
-(id)missingNoteObjectsIDs;
-(void)deleteOrphanedParticipantsWithCompletion:(id)arg0 ;
-(void)insertMissingParticipantsWithCompletion:(id)arg0 ;
-(void)insertParticipantsForNoteObjectID:(id)arg0 ;
-(void)updateWithCompletion:(id)arg0 ;


@end


#endif