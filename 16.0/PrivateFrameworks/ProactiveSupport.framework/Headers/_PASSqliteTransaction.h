// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASSQLITETRANSACTION_H
#define _PASSQLITETRANSACTION_H


#import <Foundation/Foundation.h>


@interface _PASSqliteTransaction : NSObject



+(struct _PASDBTransactionCompletion_ )readTransactionWithHandle:(id)arg0 failableBlock:(id)arg1 ;
+(struct _PASDBTransactionCompletion_ )writeTransactionWithHandle:(id)arg0 failableBlock:(id)arg1 ;
+(void)readTransactionWithHandle:(id)arg0 block:(id)arg1 ;
+(void)writeTransactionWithHandle:(id)arg0 block:(id)arg1 ;
-(id)init;


@end


#endif