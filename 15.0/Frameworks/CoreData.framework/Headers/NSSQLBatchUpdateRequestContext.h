// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLBATCHUPDATEREQUESTCONTEXT_H
#define NSSQLBATCHUPDATEREQUESTCONTEXT_H



#import "NSSQLStoreRequestContext.h"
#import "NSSQLiteStatement.h"
#import "NSFetchRequest.h"
#import "NSBatchUpdateRequest.h"

@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext {
    NSSQLiteStatement *_updateStatement;
    NSFetchRequest *_fetchRequest;
}


@property (readonly, nonatomic) NSBatchUpdateRequest *request;


-(BOOL)executeRequestCore:(*id)arg0 ;
-(BOOL)isWritingRequest;
-(id)createFetchRequestContextForObjectsToUpdate;
-(id)initWithRequest:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 ;
-(void)dealloc;
-(void)executePrologue;


@end


#endif