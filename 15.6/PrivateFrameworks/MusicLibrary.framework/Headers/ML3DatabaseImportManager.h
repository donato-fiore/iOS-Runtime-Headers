// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DATABASEIMPORTMANAGER_H
#define ML3DATABASEIMPORTMANAGER_H

@class NSOperationQueue, NSMutableArray, NSError;

#import <Foundation/Foundation.h>


@interface ML3DatabaseImportManager : NSObject {
    NSOperationQueue *_importOperationQueue;
    NSMutableArray *_suspendedImportOperations;
}


@property (retain, nonatomic) NSError *lastImportError; // ivar: _lastImportError
@property (readonly, nonatomic) NSUInteger operationsCount;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) NSUInteger suspendedOperationsCount;


-(float)currentOperationProgressWithError:(*id)arg0 ;
-(id)_importOperations;
-(id)_suspendedImportOperations;
-(id)init;
-(void)_handleImportOperationCancelled:(id)arg0 ;
-(void)_handleImportOperationCompleted:(id)arg0 ;
-(void)cancelAllImportOperations;
-(void)cancelImportOperationsForSource:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)cancelImportOperationsOriginatingFromClient:(id)arg0 ;
// -(void)performImport:(id)arg0 fromSource:(NSUInteger)arg1 progressBlock:(id)arg2 withCompletionHandler:(unk)arg3  ;
-(void)resumeSuspendedImportOperations;
-(void)suspendImportOperations;


@end


#endif