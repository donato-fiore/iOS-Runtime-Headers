// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDATABASECONNECTION_H
#define CKVDATABASECONNECTION_H

@class NSString;
@protocol CKVDatabaseReadOnlyAccess, CKVDatabaseReadWriteAccess, CKVDatabase;

#import <Foundation/Foundation.h>


@interface CKVDatabaseConnection : NSObject <CKVDatabaseReadOnlyAccess, CKVDatabaseReadWriteAccess>

 {
    NSObject<CKVDatabase> *_db;
    BOOL _inTransaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)connectionToDatabaseAtURL:(id)arg0 dataProtectionClass:(int)arg1 openMode:(NSInteger)arg2 ;
+(id)readOnlyConnectionToDatabaseAtURL:(id)arg0 ;
-(BOOL)_createTableWithRecordClass:(Class)arg0 error:(*id)arg1 ;
-(BOOL)_getRowResultsOfSelect:(id)arg0 outRows:(*id)arg1 error:(*id)arg2 ;
-(BOOL)beginTransactionWithError:(*id)arg0 ;
-(BOOL)cleanup:(*id)arg0 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)commitTransactionWithError:(*id)arg0 ;
-(BOOL)enumerateRecordResultsOfSelect:(id)arg0 recordClass:(Class)arg1 batchSize:(NSUInteger)arg2 offset:(NSUInteger)arg3 enumerateAll:(BOOL)arg4 error:(*id)arg5 usingBlock:(id)arg6 ;
-(BOOL)enumerateRecordResultsOfSelect:(id)arg0 recordClass:(Class)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateRowResultsOfSelect:(id)arg0 batchSize:(NSUInteger)arg1 offset:(NSUInteger)arg2 enumerateAll:(BOOL)arg3 error:(*id)arg4 usingBlock:(id)arg5 ;
-(BOOL)enumerateRowResultsOfSelect:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)executeCommand:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeCommand:(id)arg0 error:(*id)arg1 returningRow:(*id)arg2 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)prepareWithError:(*id)arg0 ;
-(BOOL)rollbackTransactionWithError:(*id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(void)dealloc;


@end


#endif