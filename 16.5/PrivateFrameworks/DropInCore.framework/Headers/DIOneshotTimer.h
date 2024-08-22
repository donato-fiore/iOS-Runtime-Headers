// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIONESHOTTIMER_H
#define DIONESHOTTIMER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DIOneshotTimer : NSObject {
    ? label;
    ? identifier;
    ? timeInterval;
    ? timer;
    ? deadline;
    ? logger;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)initWithInterval:(CGFloat)arg0 queue:(id)arg1 identifier:(id)arg2 label:(id)arg3 handler:(id)arg4 ;
-(void)cancelTimer;
-(void)dealloc;


@end


#endif