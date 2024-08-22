// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVSQLDATABASETRANSACTION_H
#define MSVSQLDATABASETRANSACTION_H

@class NSString;
@protocol MSVSQLExecutable;

#import <Foundation/Foundation.h>

#import "MSVSQLDatabase.h"

@interface MSVSQLDatabaseTransaction : NSObject <MSVSQLExecutable>

 {
    BOOL _invalid;
    MSVSQLDatabase *_database;
    *sqlite3 _databaseHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)_releaseSavepoint:(id)arg0 ;
-(BOOL)commit;
-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollback;
-(BOOL)rollbackToSavepoint:(id)arg0 ;
-(id)createSavepoint;
-(id)resultsForStatement:(id)arg0 ;
-(id)statementWithString:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif