// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPOSTCONNECTIONTASK_H
#define AXPOSTCONNECTIONTASK_H

@class AXAccessQueueTimer;

#import <Foundation/Foundation.h>


@interface AXPostConnectionTask : NSObject

@property (nonatomic) BOOL didTimeout; // ivar: _didTimeout
@property (copy, nonatomic) id *postConnectionBlock; // ivar: _postConnectionBlock
@property (retain, nonatomic) AXAccessQueueTimer *timeoutTimer; // ivar: _timeoutTimer


// -(id)initWithConnectBlock:(id)arg0 timeout:(unk)arg1 accessQueue:(CGFloat)arg2  ;
-(void)_performTask;
-(void)performTask;


@end


#endif