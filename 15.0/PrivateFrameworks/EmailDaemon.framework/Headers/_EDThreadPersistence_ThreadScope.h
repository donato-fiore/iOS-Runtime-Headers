// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EDTHREADPERSISTENCE_THREADSCOPE_H
#define _EDTHREADPERSISTENCE_THREADSCOPE_H

@protocol EFSQLExpressable;

#import <Foundation/Foundation.h>

#import "EDMessagePersistence.h"
#import "_EDThreadPersistence_SQLHelper.h"

@interface _EDThreadPersistence_ThreadScope : NSObject {
    BOOL _didCreateTempScopeView;
}


@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) _EDThreadPersistence_SQLHelper *sqlHelper; // ivar: _sqlHelper
@property (readonly, nonatomic) NSInteger threadScopeDatabaseID; // ivar: _threadScopeDatabaseID
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *threadScopeExpression; // ivar: _threadScopeExpression


-(id)createMessagesWithThreadObjectID:(id)arg0 wrappedMessages:(id)arg1 ;
-(id)initWithCache:(id)arg0 messagePersistence:(id)arg1 threadScopeDatabaseID:(NSInteger)arg2 threadScopeExpression:(id)arg3 ;
-(void)_ensureTempScopeView;
-(void)dropTemporaryView;


@end


#endif