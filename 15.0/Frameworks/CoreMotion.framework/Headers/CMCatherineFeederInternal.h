// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMCATHERINEFEEDERINTERNAL_H
#define CMCATHERINEFEEDERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMCatherineFeederInternal : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    *void fLocationdConnection;
}




-(id)init;
-(void)_feedCatherine:(CGFloat)arg0 confidence:(CGFloat)arg1 timestamp:(CGFloat)arg2 ;
-(void)_startDaemonConnection;
-(void)_teardown;
-(void)dealloc;


@end


#endif