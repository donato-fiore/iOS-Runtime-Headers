// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (copy, nonatomic) id *processResultsBlock; // ivar: _processResultsBlock
@property (nonatomic) BOOL succeeded; // ivar: _succeeded


-(BOOL)processObjectsWithError:(*id)arg0 ;
// -(id)initWithName:(id)arg0 fetchRequest:(id)arg1 context:(id)arg2 pathManager:(id)arg3 concurrent:(BOOL)arg4 generateContextBlock:(id)arg5 processResultBlock:(unk)arg6  ;
-(void)_inq_runOperationWithObjectIDs:(id)arg0 onContext:(id)arg1 ;


@end


#endif