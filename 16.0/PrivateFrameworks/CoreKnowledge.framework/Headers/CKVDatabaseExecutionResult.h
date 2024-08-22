// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVDATABASEEXECUTIONRESULT_H
#define CKVDATABASEEXECUTIONRESULT_H

@class NSError, NSArray;

#import <Foundation/Foundation.h>

#import "CKVDatabaseCommand.h"

@interface CKVDatabaseExecutionResult : NSObject

@property (readonly, nonatomic) NSUInteger beginMachTime; // ivar: _beginMachTime
@property (readonly, nonatomic) CKVDatabaseCommand *command; // ivar: _command
@property (readonly, nonatomic) NSUInteger endMachTime; // ivar: _endMachTime
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *rowValueTuples; // ivar: _rowValueTuples


-(id)description;
-(id)init;
-(id)initWithCommand:(id)arg0 beginMachTime:(NSUInteger)arg1 endMachTime:(NSUInteger)arg2 rowValueTuples:(id)arg3 error:(id)arg4 ;


@end


#endif