// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTGCDTIMER_H
#define MTGCDTIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "MTPowerAssertion.h"

@interface MTGCDTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    MTPowerAssertion *_powerAssertion;
}




-(void)cancelTimer;
-(void)dealloc;
-(void)startTimer:(CGFloat)arg0 block:(id)arg1 ;


@end


#endif