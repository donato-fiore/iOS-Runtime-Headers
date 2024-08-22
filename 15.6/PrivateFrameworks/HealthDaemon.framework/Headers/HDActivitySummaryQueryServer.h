// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDACTIVITYSUMMARYQUERYSERVER_H
#define HDACTIVITYSUMMARYQUERYSERVER_H



#import "HDQueryServer.h"
#import "HDSQLitePredicate.h"
#import "HDActivitySummaryQueryHelper.h"

@interface HDActivitySummaryQueryServer : HDQueryServer {
    BOOL _deliversUpdates;
    NSInteger _lastProcessedAnchor;
    HDSQLitePredicate *_filterPredicate;
    HDActivitySummaryQueryHelper *_queryHelper;
    BOOL _hasSentInitialResults;
}




+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)_queue_stop;


@end


#endif