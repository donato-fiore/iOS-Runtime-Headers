// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSQLITETRANSACTION_H
#define SGSQLITETRANSACTION_H


#import <Foundation/Foundation.h>


@interface SGSqliteTransaction : NSObject



+(void)readTransactionWithHandle:(id)arg0 block:(id)arg1 ;
+(void)writeTransactionWithHandle:(id)arg0 block:(id)arg1 ;


@end


#endif