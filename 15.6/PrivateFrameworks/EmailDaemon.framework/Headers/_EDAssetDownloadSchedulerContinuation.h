// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EDASSETDOWNLOADSCHEDULERCONTINUATION_H
#define _EDASSETDOWNLOADSCHEDULERCONTINUATION_H

@class NSString;
@protocol EDAssetDownloadSchedulerContinuation, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "EDAssetDownloadScheduler.h"

@interface _EDAssetDownloadSchedulerContinuation : NSObject <EDAssetDownloadSchedulerContinuation>



@property (retain, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) EDAssetDownloadScheduler *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(void)rescheduleAfterFailure;
-(void)rescheduleAfterSuccess;
-(void)stopScheduling;


@end


#endif