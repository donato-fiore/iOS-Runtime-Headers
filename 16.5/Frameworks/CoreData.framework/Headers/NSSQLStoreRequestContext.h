// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLSTOREREQUESTCONTEXT_H
#define NSSQLSTOREREQUESTCONTEXT_H

@class NSError, NSException, NSNumber;

#import <Foundation/Foundation.h>

#import "NSSQLCore.h"
#import "NSSQLiteConnection.h"
#import "NSManagedObjectContext.h"
#import "NSQueryGenerationToken.h"
#import "NSPersistentStoreRequest.h"
#import "NSSQLRowCache.h"

@interface NSSQLStoreRequestContext : NSObject {
    NSSQLCore *_sqlCore;
    NSSQLiteConnection *_connection;
    NSManagedObjectContext *_context;
    NSError *_error;
    NSException *_exception;
    NSQueryGenerationToken *_queryGeneration;
    NSNumber *_transactionID;
    BOOL _useColoredLogging;
    BOOL _useConcurrentFetching;
    BOOL _hasHistoryTracking;
    BOOL _storeIsInMemory;
}


@property (readonly, nonatomic) BOOL isWritingRequest;
@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest; // ivar: _persistentStoreRequest
@property (retain, nonatomic) id *result; // ivar: _result
@property (readonly, nonatomic) NSSQLRowCache *rowCache;


-(BOOL)executeRequestCore:(*id)arg0 ;
-(BOOL)executeRequestUsingConnection:(id)arg0 ;
-(id)initWithRequest:(id)arg0 context:(id)arg1 sqlCore:(id)arg2 ;
-(void)dealloc;
-(void)executeEpilogue;
-(void)executePrologue;


@end


#endif