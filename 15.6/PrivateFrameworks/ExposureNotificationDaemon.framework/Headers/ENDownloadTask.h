// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENDOWNLOADTASK_H
#define ENDOWNLOADTASK_H

@class NSBackgroundActivityScheduler, NSDate, NSString;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "ENDownloadEndpointState.h"

@interface ENDownloadTask : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSBackgroundActivityScheduler *_scheduler;
    BOOL _finished;
}


@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL didDefer; // ivar: _didDefer
@property (readonly, nonatomic) NSUInteger downloadCount; // ivar: _downloadCount
@property (readonly, nonatomic) ENDownloadEndpointState *endpointState; // ivar: _endpointState
@property (readonly, copy, nonatomic) NSString *shortIdentifier;
@property (readonly, nonatomic) BOOL shouldDefer;


+(id)taskWithEndpointState:(id)arg0 date:(id)arg1 group:(id)arg2 scheduler:(id)arg3 ;
-(void)finishDeferred:(BOOL)arg0 error:(id)arg1 ;
-(void)incrementDownloadCount;


@end


#endif