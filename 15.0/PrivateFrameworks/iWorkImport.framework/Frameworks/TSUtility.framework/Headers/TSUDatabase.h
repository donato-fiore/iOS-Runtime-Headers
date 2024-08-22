// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUDATABASE_H
#define TSUDATABASE_H


#import <Foundation/Foundation.h>


@interface TSUDatabase : NSObject {
    *sqlite3_stmt _beginTransactionStatement;
    *sqlite3_stmt _commitTransactionStatement;
    *sqlite3_stmt _rollbackTransactionStatement;
}


@property (readonly, nonatomic) *sqlite3 _sqliteDatabase; // ivar: _db
@property (readonly, nonatomic) BOOL readonly; // ivar: _readonly


-(?)prepareStatement:(?)arg0 sqlerror;
-(BOOL)_upgradeSchemaWithError:(*id)arg0 ;
-(BOOL)beginTransactionWithError:(*id)arg0 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)commitTransactionWithError:(*id)arg0 ;
-(BOOL)compactWithError:(*id)arg0 ;
-(BOOL)endSingleResultQuery:(struct sqlite3_stmt *)arg0 shouldFinalize:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)executeUpdate:(struct sqlite3_stmt *)arg0 shouldFinalize:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)executeUpdateWithSql:(char *)arg0 error:(*id)arg1 ;
-(BOOL)needsUpgradeFromSchemaVersion:(int)arg0 ;
-(BOOL)rollbackTransactionWithError:(*id)arg0 ;
-(BOOL)setSchemaVersion:(int)arg0 error:(*id)arg1 ;
-(BOOL)startSingleResultQuery:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(BOOL)startSingleResultQuery:(struct sqlite3_stmt *)arg0 shouldLogErrors:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)upgradeFromSchemaVersion:(int)arg0 error:(*id)arg1 ;
-(id)_initWithPath:(id)arg0 readonly:(BOOL)arg1 error:(*id)arg2 ;
-(id)initReadonlyWithPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithPath:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif