// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMWORKOUTMETSINTERNAL_H
#define CMWORKOUTMETSINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMWorkoutMetsInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}




-(id)init;
-(void)_queryWorkoutMetsWithSessionId:(id)arg0 handler:(id)arg1 ;
-(void)_teardown;
-(void)dealloc;


@end


#endif