// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICUNIFIEDNOTECONTEXT_H
#define ICUNIFIEDNOTECONTEXT_H

@class NoteContext, NSPersistentStoreCoordinator, ICNoteContext;

#import <Foundation/Foundation.h>

#import "ICFolderCoreDataIndexer.h"

@interface ICUnifiedNoteContext : NSObject

@property (readonly, nonatomic) ICFolderCoreDataIndexer *allFoldersIndexer; // ivar: _allFoldersIndexer
@property (readonly, nonatomic) NoteContext *htmlNoteContext; // ivar: _htmlNoteContext
@property (readonly, nonatomic) NSPersistentStoreCoordinator *htmlStoreCoordinator;
@property (readonly, nonatomic) ICNoteContext *modernNoteContext; // ivar: _modernNoteContext
@property (readonly, nonatomic) NSPersistentStoreCoordinator *modernStoreCoordinator;
@property (readonly, nonatomic) ICFolderCoreDataIndexer *normalFoldersIndexer; // ivar: _normalFoldersIndexer


-(id)initWithModernNoteContext:(id)arg0 htmlNoteContext:(id)arg1 ;
-(id)managedObjectContextForObject:(id)arg0 error:(*id)arg1 ;
-(id)managedObjectContextForObjectID:(id)arg0 ;
-(id)managedObjectIDForURIRepresentation:(id)arg0 ;
-(id)managedObjectIDForURIString:(id)arg0 ;


@end


#endif