// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDMONOTONICTIMER_H
#define CHDMONOTONICTIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CHDMonotonicTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}




-(void)activateWithTime:(NSUInteger)arg0 repeat:(NSInteger)arg1 block:(id)arg2 ;
-(void)invalidate;


@end


#endif