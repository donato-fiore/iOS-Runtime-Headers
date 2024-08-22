// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3BULKSTATEMENTEXECUTIONOPERATION_H
#define ML3BULKSTATEMENTEXECUTIONOPERATION_H



#import "ML3DatabaseOperation.h"

@interface ML3BulkStatementExecutionOperation : ML3DatabaseOperation



-(BOOL)_execute:(*id)arg0 ;
-(BOOL)_executeStatements:(id)arg0 onConnection:(id)arg1 withError:(*id)arg2 ;
-(NSUInteger)type;


@end


#endif