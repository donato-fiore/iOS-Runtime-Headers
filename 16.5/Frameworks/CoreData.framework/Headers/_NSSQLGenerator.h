// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSSQLGENERATOR_H
#define _NSSQLGENERATOR_H

@class NSMutableString;

#import <Foundation/Foundation.h>

#import "NSSQLiteStatement.h"
#import "NSSQLiteAdapter.h"

@interface _NSSQLGenerator : NSObject {
    NSSQLiteStatement *_statement;
    NSSQLiteAdapter *_adapter;
    NSMutableString *_sqlString;
    NSMutableString *_whereClause;
    NSMutableString *_selectList;
}




+(void)initialize;
-(void)dealloc;


@end


#endif