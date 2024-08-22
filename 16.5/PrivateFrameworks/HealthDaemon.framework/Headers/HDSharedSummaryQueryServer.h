// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSHAREDSUMMARYQUERYSERVER_H
#define HDSHAREDSUMMARYQUERYSERVER_H

@class HKSharedSummaryTransaction, NSString;


#import "HDQueryServer.h"

@interface HDSharedSummaryQueryServer : HDQueryServer {
    HKSharedSummaryTransaction *_transaction;
    NSString *_package;
}




+(Class)queryClass;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif