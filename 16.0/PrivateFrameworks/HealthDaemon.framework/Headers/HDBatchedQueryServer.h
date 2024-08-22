// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDBATCHEDQUERYSERVER_H
#define HDBATCHEDQUERYSERVER_H



#import "HDQueryServer.h"

@interface HDBatchedQueryServer : HDQueryServer

@property (copy, nonatomic) id *unitTest_queryServerObjectEnumerationHandler; // ivar: _unitTest_queryServerObjectEnumerationHandler
@property (copy, nonatomic) id *unitTest_queryServerWillSendBatchHandler; // ivar: _unitTest_queryServerWillSendBatchHandler


-(NSInteger)batchObjectsWithEnumerator:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(NSInteger)batchObjectsWithEnumerator:(id)arg0 includeDeletedObjects:(BOOL)arg1 error:(*id)arg2 batchHandler:(id)arg3 ;
-(NSInteger)batchObjectsWithMultitypeQueryCursor:(id)arg0 includeDeletedObjects:(BOOL)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 batchHandler:(id)arg4 ;


@end


#endif