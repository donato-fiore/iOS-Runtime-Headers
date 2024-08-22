// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIRUNLOOPDELAY_H
#define SKUIRUNLOOPDELAY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKUIRunLoopDelay : NSObject {
    NSString *_mode;
    *__CFRunLoop _runLoop;
    *__CFRunLoopSource _runLoopSource;
    CGFloat _timeout;
}




-(id)initWithRunLoopMode:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)delayRunLoop;
-(void)endDelay;


@end


#endif