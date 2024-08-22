// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITESTATEMENT_H
#define HDSQLITESTATEMENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HDSQLiteDatabase.h"

@interface HDSQLiteStatement : NSObject {
    NSString *_sql;
}


@property (readonly, nonatomic) HDSQLiteDatabase *database; // ivar: _database


// -(BOOL)enumerateStatementWithError:(*id)arg0 bindingHandler:(id)arg1 block:(unk)arg2  ;
-(BOOL)performStatementWithError:(*id)arg0 bindingHandler:(id)arg1 ;
-(id)description;
-(id)initWithSQL:(id)arg0 database:(id)arg1 ;
-(void)finish;


@end


#endif