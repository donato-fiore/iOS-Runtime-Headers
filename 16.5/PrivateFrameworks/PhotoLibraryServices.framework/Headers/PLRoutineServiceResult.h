// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLROUTINESERVICERESULT_H
#define PLROUTINESERVICERESULT_H

@class NSError;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PLRoutineServiceResult : NSObject {
    os_unfair_lock_s _lock;
    id *_result;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}


@property (readonly, copy) NSError *error;
@property (readonly) id *result;


-(BOOL)waitForReplyWithTimeout:(NSUInteger)arg0 ;
-(id)init;
-(void)receivedReplyWithResult:(id)arg0 error:(id)arg1 ;


@end


#endif