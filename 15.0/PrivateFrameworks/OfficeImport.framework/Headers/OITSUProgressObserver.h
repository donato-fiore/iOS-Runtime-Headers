// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUPROGRESSOBSERVER_H
#define OITSUPROGRESSOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OITSUProgressObserver : NSObject {
    NSObject<OS_dispatch_queue> *mQueue;
    id *mHandler;
    CGFloat mLastHandledValue;
    BOOL mLastHandledIndeterminate;
}


@property (readonly, nonatomic) CGFloat valueInterval; // ivar: mValueInterval


-(id)init;
-(id)initWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)dealloc;
-(void)handleValue:(CGFloat)arg0 maxValue:(CGFloat)arg1 isIndeterminate:(BOOL)arg2 ;


@end


#endif