// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSAMPLEITERATORQUERYSERVER_H
#define HDSAMPLEITERATORQUERYSERVER_H

@class HKSampleIteratorQueryCursor;


#import "HDBatchedQueryServer.h"

@interface HDSampleIteratorQueryServer : HDBatchedQueryServer {
    NSUInteger _deliveredResultCount;
    HKSampleIteratorQueryCursor *_queryCursor;
    NSUInteger _limit;
}




+(BOOL)supportsAnchorBasedAuthorization;
+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)objectTypes;
-(void)_queue_start;


@end


#endif