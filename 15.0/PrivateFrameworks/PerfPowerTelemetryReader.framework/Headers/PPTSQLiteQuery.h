// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTSQLITEQUERY_H
#define PPTSQLITEQUERY_H


#import <Foundation/Foundation.h>

#import "PPTSQLiteDatabase.h"
#import "PPTSQLiteQueryDescriptor.h"

@interface PPTSQLiteQuery : NSObject

@property (readonly) PPTSQLiteDatabase *database; // ivar: _database
@property (readonly, copy) PPTSQLiteQueryDescriptor *descriptor; // ivar: _descriptor


+(id)queryWithDatabase:(id)arg0 entity:(id)arg1 predicate:(id)arg2 ;
+(id)queryWithDatabase:(id)arg0 entity:(id)arg1 predicate:(id)arg2 groupByProperties:(id)arg3 orderByProperties:(id)arg4 orderByDirections:(id)arg5 limitCount:(NSUInteger)arg6 offsetCount:(NSUInteger)arg7 ;
-(BOOL)enumerateProperties:(id)arg0 error:(*id)arg1 enumerationHandler:(id)arg2 ;
-(id)columnNamesForProperties:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 descriptor:(id)arg1 ;
-(id)selectSQLWithProperties:(id)arg0 ;
-(void)bindToSelectStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif