// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLPERSISTENTHISTORYCHANGEREQUESTCONTEXT_H
#define NSSQLPERSISTENTHISTORYCHANGEREQUESTCONTEXT_H



#import "NSSQLStoreRequestContext.h"
#import "NSFetchRequest.h"
#import "NSPersistentHistoryChangeRequest.h"

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}


@property (readonly, nonatomic) NSPersistentHistoryChangeRequest *request;
@property (readonly, nonatomic) BOOL shouldUseBatches; // ivar: _shouldUseBatches


-(BOOL)executeRequestUsingConnection:(id)arg0 ;
-(BOOL)isWritingRequest;
-(id)createCountRequestContextForChanges;
-(id)createDeleteTransactionsRequestContext;
-(id)createRequestContextForChangesWithTransactionIDs:(id)arg0 ;
-(id)fetchRequestContextForChanges;
-(id)initWithRequest:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 ;
-(void)dealloc;
-(void)executePrologue;


@end


#endif