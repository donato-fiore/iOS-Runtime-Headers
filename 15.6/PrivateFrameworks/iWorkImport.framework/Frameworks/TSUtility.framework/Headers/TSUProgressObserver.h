// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUPROGRESSOBSERVER_H
#define TSUPROGRESSOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSUProgressObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_handler;
    CGFloat _lastHandledValue;
    BOOL _lastHandledIndeterminate;
}


@property (readonly, nonatomic) CGFloat valueInterval; // ivar: _valueInterval


-(id)init;
-(id)initWithValueInterval:(CGFloat)arg0 queue:(id)arg1 handler:(id)arg2 ;
-(void)handleValue:(CGFloat)arg0 maxValue:(CGFloat)arg1 isIndeterminate:(BOOL)arg2 ;


@end


#endif