// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASPINGTASK_H
#define ASPINGTASK_H

@class NSSet;


#import "ASTask.h"

@interface ASPingTask : ASTask {
    NSSet *_folders;
    NSSet *_oldFolders;
    int _seconds;
    int _oldSeconds;
}




-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)processContext:(id)arg0 ;
-(BOOL)shouldHandleServerErrorRetryLater;
-(BOOL)shouldHoldPowerAssertion;
-(BOOL)shouldReportTimeInNetwork;
-(BOOL)shouldStallAfterConnectionLost;
-(CGFloat)timeoutInterval;
-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)folders;
-(id)initWithHeartbeat:(int)arg0 folders:(id)arg1 oldHeartbeat:(int)arg2 oldFolders:(id)arg3 ;
-(id)requestBody;
-(int)commandCode;
-(int)heartbeat;
-(int)interfaceBinding;
-(void)finishWithError:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;
-(void)requestCancelTaskWithReason:(int)arg0 ;


@end


#endif