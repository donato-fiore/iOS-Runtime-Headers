// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVTIMER_H
#define MSVTIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MSVTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
}




+(id)timerWithInterval:(CGFloat)arg0 block:(id)arg1 ;
+(id)timerWithInterval:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
+(id)timerWithInterval:(CGFloat)arg0 repeats:(BOOL)arg1 block:(id)arg2 ;
+(id)timerWithInterval:(CGFloat)arg0 repeats:(BOOL)arg1 queue:(id)arg2 block:(id)arg3 ;
-(id)initWithInterval:(CGFloat)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)initWithInterval:(CGFloat)arg0 repeats:(BOOL)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif