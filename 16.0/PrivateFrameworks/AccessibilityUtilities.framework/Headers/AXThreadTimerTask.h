// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXTHREADTIMERTASK_H
#define AXTHREADTIMERTASK_H


#import <Foundation/Foundation.h>


@interface AXThreadTimerTask : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: active
@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic, getter=isCancelled) BOOL cancel; // ivar: cancel
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: finished


-(void)run;
-(void)runAfterDelay:(float)arg0 ;


@end


#endif