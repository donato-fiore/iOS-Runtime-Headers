// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWMETADATATIMEMACHINEREQUEST_H
#define BWMETADATATIMEMACHINEREQUEST_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface BWMetadataTimeMachineRequest : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}




-(id)init;
-(void)complete;
-(void)dealloc;
-(void)waitForCompletionWithTimeout:(float)arg0 ;


@end


#endif