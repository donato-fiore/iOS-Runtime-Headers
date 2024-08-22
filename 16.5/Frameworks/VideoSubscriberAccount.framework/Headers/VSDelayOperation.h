// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSDELAYOPERATION_H
#define VSDELAYOPERATION_H

@class NSDate;
@protocol OS_dispatch_source;


#import "VSAsyncOperation.h"

@interface VSDelayOperation : VSAsyncOperation {
    NSObject<OS_dispatch_source> *_timerSource;
}


@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (nonatomic) BOOL shouldIgnoreTolerance; // ivar: _shouldIgnoreTolerance
@property (readonly, nonatomic) CGFloat tolerance; // ivar: _tolerance


+(id)delayOperationWithDelay:(CGFloat)arg0 ;
+(id)delayOperationWithFireDate:(id)arg0 ;
-(id)init;
-(id)initWithDelay:(CGFloat)arg0 tolerance:(CGFloat)arg1 ;
-(id)initWithFireDate:(id)arg0 tolerance:(CGFloat)arg1 ;
-(void)_cancelTimer;
-(void)cancel;
-(void)dealloc;
-(void)executionDidBegin;


@end


#endif