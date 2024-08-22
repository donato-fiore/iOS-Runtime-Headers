// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSQLITEREADTRANSACTION_H
#define SGSQLITEREADTRANSACTION_H


#import <Foundation/Foundation.h>

#import "SGSqliteDatabase.h"

@interface SGSqliteReadTransaction : NSObject

@property (readonly, nonatomic) SGSqliteDatabase *db; // ivar: _db


-(id)initWithHandle:(id)arg0 ;


@end


#endif