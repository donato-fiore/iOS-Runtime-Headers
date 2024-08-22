// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __RCFOLDERCONTENTSDELEGATE_H
#define __RCFOLDERCONTENTSDELEGATE_H

@class NSString;
@protocol NSFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>

#import "RCFoldersFetchedResultsController.h"

@interface __RCFolderContentsDelegate : NSObject <NSFetchedResultsControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) RCFoldersFetchedResultsController *foldersController; // ivar: _foldersController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)controllerWillChangeContent:(id)arg0 ;


@end


#endif