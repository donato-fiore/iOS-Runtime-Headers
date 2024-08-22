// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVPERSISTENTTIMER_H
#define MSVPERSISTENTTIMER_H

@class PCPersistentTimer, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface MSVPersistentTimer : NSObject {
    PCPersistentTimer *_timer;
    NSString *_name;
    id *_block;
    NSDate *_startDate;
    CGFloat _interval;
}


@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithInterval:(CGFloat)arg0 name:(id)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)_handleTimerElapsed:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithReason:(id)arg0 ;


@end


#endif