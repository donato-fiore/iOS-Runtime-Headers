// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTPASSTHROUGHEVENTCOALESCER_H
#define AVTPASSTHROUGHEVENTCOALESCER_H

@protocol AVTEventCoalescer;

#import <Foundation/Foundation.h>


@interface AVTPassthroughEventCoalescer : NSObject <AVTEventCoalescer>



@property (copy, nonatomic) id *handler; // ivar: _handler


-(void)eventDidOccur:(id)arg0 ;
-(void)registerEventForCoalescingWithLabel:(id)arg0 handler:(id)arg1 ;


@end


#endif