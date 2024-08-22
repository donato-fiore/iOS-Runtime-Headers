// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLENUMERATEANDSAVECONTROLLER_H
#define PLENUMERATEANDSAVECONTROLLER_H

@class NSError, NSString, NSOperationQueue, NSManagedObjectContext, NSFetchRequest, PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundle.h"

@interface PLEnumerateAndSaveController : NSObject {
    uint8_t _cancelled;
}


@property (nonatomic) BOOL concurrent; // ivar: _concurrent
@property (retain, nonatomic) NSError *firstError; // ivar: _firstError
@property (copy, nonatomic) id *generateContextBlock; // ivar: _generateContextBlock
@property (retain, nonatomic) PLPhotoLibraryBundle *libraryBundle; // ivar: _libraryBundle
@property (retain, nonatomic) NSString *operationName; // ivar: _operationName
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSManagedObjectContext *originalContext; // ivar: _originalContext
@property (retain, nonatomic) NSFetchRequest *originalFetchRequest; // ivar: _originalFetchRequest
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (copy, nonatomic) id *processResultBlock; // ivar: _processResultBlock
@property (copy, nonatomic) id *processResultsBlock; // ivar: _processResultsBlock
@property (nonatomic) BOOL refreshesAllAfterSave; // ivar: _refreshesAllAfterSave
@property (nonatomic) BOOL succeeded; // ivar: _succeeded


-(BOOL)processObjectsWithError:(*id)arg0 ;
// -(id)_initWithName:(id)arg0 fetchRequest:(id)arg1 context:(id)arg2 pathManager:(id)arg3 concurrent:(BOOL)arg4 refreshAllAfterSave:(BOOL)arg5 generateContextBlock:(id)arg6 processResultBlock:(unk)arg7 processResultsBlock:(id)arg8  ;
// -(id)initWithName:(id)arg0 fetchRequest:(id)arg1 context:(id)arg2 pathManager:(id)arg3 concurrent:(BOOL)arg4 refreshAllAfterSave:(BOOL)arg5 generateContextBlock:(id)arg6 processResultBlock:(unk)arg7  ;
// -(id)initWithName:(id)arg0 fetchRequest:(id)arg1 context:(id)arg2 pathManager:(id)arg3 concurrent:(BOOL)arg4 refreshAllAfterSave:(BOOL)arg5 generateContextBlock:(id)arg6 processResultsBlock:(unk)arg7  ;
-(void)_inq_runOperationWithObjectIDs:(id)arg0 onContext:(id)arg1 ;


@end


#endif