// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCFOLDERSFETCHEDRESULTSCONTROLLER_H
#define RCFOLDERSFETCHEDRESULTSCONTROLLER_H

@class NSManagedObjectContext, NSFetchedResultsController, NSDictionary, NSMutableDictionary, NSMutableArray, NSArray, NSHashTable, NSDiffableDataSourceSnapshot, NSString;
@protocol NSFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>

#import "__RCFolderContentsDelegate.h"

@interface RCFoldersFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate>

 {
    NSManagedObjectContext *_context;
    NSFetchedResultsController *_userFoldersController;
    NSDictionary *_builtInContentControllers;
    NSMutableDictionary *_userContentControllers;
    NSMutableArray *_pendingUpdates;
    __RCFolderContentsDelegate *_folderContentsDelegate;
    NSArray *_allBuiltinFolders;
    NSArray *_builtinFolders;
    NSHashTable *_observers;
    BOOL _hasPerformedUserControllerFetch;
}


@property (readonly, nonatomic) NSArray *allBuiltinFolders;
@property (readonly) NSMutableDictionary *builtInContentControllers;
@property (readonly, nonatomic) NSArray *builtinFolders;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *userContentControllers;
@property (readonly, nonatomic) NSArray *userFolders;


-(NSUInteger)playableCountForFolder:(id)arg0 ;
-(id)_contentControllerForId:(id)arg0 ;
-(id)folderAtIndexPath:(id)arg0 ;
-(id)folderWithIdentifier:(id)arg0 ;
-(id)indexPathForFolder:(id)arg0 ;
-(id)initWithFetchRequest:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)playableRecordingsInFolder:(id)arg0 ;
-(void)addContentObserver:(id)arg0 ;
-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)reloadBuiltinFolder:(id)arg0 ;
-(void)reloadUserFolder:(id)arg0 ;
-(void)removeContentObserver:(id)arg0 ;


@end


#endif