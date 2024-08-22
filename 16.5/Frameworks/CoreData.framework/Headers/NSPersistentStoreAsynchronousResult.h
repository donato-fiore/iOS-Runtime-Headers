// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSISTENTSTOREASYNCHRONOUSRESULT_H
#define NSPERSISTENTSTOREASYNCHRONOUSRESULT_H

@class NSProgress, NSError;


#import "NSPersistentStoreResult.h"
#import "NSManagedObjectContext.h"

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {
    NSProgress *_requestProgress;
    id *_requestCompletionBlock;
    int _flags;
}


@property (readonly) NSManagedObjectContext *managedObjectContext; // ivar: _requestContext
@property (retain) NSError *operationError; // ivar: _requestError
@property (readonly) NSProgress *progress;


-(BOOL)_isCancelled;
-(id)initWithContext:(id)arg0 andProgress:(id)arg1 completetionBlock:(id)arg2 ;
-(void)_cancelProgress;
-(void)cancel;
-(void)dealloc;


@end


#endif