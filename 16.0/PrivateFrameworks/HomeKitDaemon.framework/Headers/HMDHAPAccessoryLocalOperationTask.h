// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHAPACCESSORYLOCALOPERATIONTASK_H
#define HMDHAPACCESSORYLOCALOPERATIONTASK_H

@class NSString, NSDictionary;


#import "HMDHAPAccessoryTask.h"

@interface HMDHAPAccessoryLocalOperationTask : HMDHAPAccessoryTask

@property (readonly) NSString *activityRequestEventName;
@property (readonly) NSString *activityResponseEventName;
@property (retain) NSDictionary *logEvents; // ivar: _logEvents


-(id)_completionHandlerForAccessory:(SEL)arg0 accessoryRequests:(id)arg1 responseWaitGroup:(id)arg2 ;
-(void)_dispatchToAccessory:(id)arg0 requests:(id)arg1 logEvent:(id)arg2 completion:(id)arg3 ;
-(void)execute;


@end


#endif