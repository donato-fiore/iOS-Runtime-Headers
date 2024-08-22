// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLITESTATEMENT_H
#define NSSQLITESTATEMENT_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "NSSQLEntity.h"
#import "NSCachedFetchRequestInfo.h"

@interface NSSQLiteStatement : NSObject {
    NSSQLEntity *_entity;
    NSMutableArray *_bindVariables;
    NSMutableArray *_bindIntarrays;
    NSString *_sqlString;
    BOOL _isImpossibleCondition;
    BOOL _trackChangedRowCount;
    NSSQLEntity *_fakeEntityForFetch;
    NSCachedFetchRequestInfo *_cachedStatementInfo;
    *sqlite3_stmt _cachedSQLiteStatement;
    *void _owner;
}




-(id)bindIntarrays;
-(id)bindVariables;
-(id)description;
-(id)entity;
-(id)initWithEntity:(id)arg0 ;
-(id)initWithEntity:(id)arg0 sqlString:(id)arg1 ;
-(id)sqlString;
-(void)dealloc;


@end


#endif