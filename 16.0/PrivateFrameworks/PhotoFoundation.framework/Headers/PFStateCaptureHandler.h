// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSTATECAPTUREHANDLER_H
#define PFSTATECAPTUREHANDLER_H

@class NSString;
@protocol PFStateCaptureProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFStateCaptureHandler : NSObject {
    id<PFStateCaptureProvider> *_provider;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _stateHandle;
    NSUInteger _callCount;
    NSUInteger _ignoreCount;
    NSString *_logPrefix;
}




-(id)initWithProvider:(id)arg0 name:(id)arg1 ;
-(struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(void)dealloc;


@end


#endif