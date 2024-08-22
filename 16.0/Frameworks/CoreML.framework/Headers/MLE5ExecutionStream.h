// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLE5EXECUTIONSTREAM_H
#define MLE5EXECUTIONSTREAM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MLE5ExecutionStream : NSObject

@property (copy) NSArray *operations; // ivar: _operations
@property *e5rt_execution_stream streamHandle; // ivar: _streamHandle


-(BOOL)_executeStream:(struct e5rt_execution_stream *)arg0 error:(*id)arg1 ;
-(BOOL)executeAndReturnError:(*id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif