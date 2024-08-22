// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDATABASEEMPTYACCESS_H
#define CKVDATABASEEMPTYACCESS_H

@class NSString;
@protocol CKVDatabaseReadOnlyAccess;

#import <Foundation/Foundation.h>


@interface CKVDatabaseEmptyAccess : NSObject <CKVDatabaseReadOnlyAccess>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateRecordResultsOfSelect:(id)arg0 recordClass:(Class)arg1 batchSize:(NSUInteger)arg2 offset:(NSUInteger)arg3 enumerateAll:(BOOL)arg4 error:(*id)arg5 usingBlock:(id)arg6 ;
-(BOOL)enumerateRecordResultsOfSelect:(id)arg0 recordClass:(Class)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateRowResultsOfSelect:(id)arg0 batchSize:(NSUInteger)arg1 offset:(NSUInteger)arg2 enumerateAll:(BOOL)arg3 error:(*id)arg4 usingBlock:(id)arg5 ;
-(BOOL)enumerateRowResultsOfSelect:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateRowResultsOfSelect:(id)arg0 recordClass:(Class)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;


@end


#endif