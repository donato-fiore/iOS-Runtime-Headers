// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCE10FOUNDATIONCSO16NSOPERATIONQUEUEP33_0ECEE0A75E2DD5EDFED9A6FEB26D5D3219DELAYREADYOPERATION_H
#define _TTCE10FOUNDATIONCSO16NSOPERATIONQUEUEP33_0ECEE0A75E2DD5EDFED9A6FEB26D5D3219DELAYREADYOPERATION_H



#import "NSOperation.h"

@interface _TtCE10FoundationCSo16NSOperationQueueP33_0ECEE0A75E2DD5EDFED9A6FEB26D5D3219DelayReadyOperation : NSOperation {
    ? action;
    ? readyFromAfter;
    ? queue;
    ? interval;
    ? context;
}


@property (nonatomic, readonly) BOOL ready;


-(BOOL)isReady;
-(id)init;
-(void)cancel;
-(void)main;


@end


#endif