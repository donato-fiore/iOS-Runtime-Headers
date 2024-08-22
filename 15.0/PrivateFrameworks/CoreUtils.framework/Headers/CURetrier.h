// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CURETRIER_H
#define CURETRIER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CURetrier : NSObject {
    BOOL _invalidateCalled;
    NSObject<OS_dispatch_source> *_retryTimer;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) CGFloat leeway; // ivar: _leeway
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(id)init;
-(void)failed;
-(void)failedDirect;
-(void)invalidate;
-(void)invalidateDirect;
-(void)start;
-(void)startDirect;
-(void)succeeded;
-(void)succeededDirect;


@end


#endif