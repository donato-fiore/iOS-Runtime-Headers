// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICORESYNCDATABASE_H
#define SIRICORESYNCDATABASE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SiriCoreSQLiteDatabase.h"

@interface SiriCoreSyncDatabase : NSObject {
    NSString *_path;
    SiriCoreSQLiteDatabase *_db;
}


@property (nonatomic) BOOL debugMode; // ivar: _debugMode
@property (nonatomic) BOOL inTransaction; // ivar: _inTransaction


+(id)currentSyncDatabase;
+(void)removeCurrentSyncDatabase;
// -(BOOL)_enumerateKey:(id)arg0 updatedAfter:(id)arg1 fromTable:(id)arg2 usingBlock:(id)arg3 error:(unk)arg4  ;
-(BOOL)_executeStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)_insertSyncRec:(id)arg0 intoTable:(id)arg1 error:(*id)arg2 ;
-(BOOL)beginTransactionWithError:(*id)arg0 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)commitTransactionWithError:(*id)arg0 ;
-(BOOL)donate:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateItemsOfKey:(id)arg0 updatedAfter:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateRemovalsOfKey:(id)arg0 updatedAfter:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateSentItemsOfKey:(id)arg0 updatedAfter:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)markAsSent:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)prepare;
-(BOOL)remove:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAllItemsOfKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollbackTransactionWithError:(*id)arg0 ;
-(BOOL)succeedOrRollbackOnFail:(id)arg0 error:(*id)arg1 whileExecuting:(id)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(int)_countKey:(id)arg0 fromTable:(id)arg1 updatedAfter:(id)arg2 error:(*id)arg3 ;
-(int)countItemsOfKey:(id)arg0 updatedAfter:(id)arg1 error:(*id)arg2 ;
-(int)countRemovalsOfKey:(id)arg0 updatedAfter:(id)arg1 error:(*id)arg2 ;
-(int)countSentItemsOfKey:(id)arg0 updatedAfter:(id)arg1 error:(*id)arg2 ;


@end


#endif