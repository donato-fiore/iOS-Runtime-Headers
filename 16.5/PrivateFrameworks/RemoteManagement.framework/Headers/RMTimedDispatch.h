// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMTIMEDDISPATCH_H
#define RMTIMEDDISPATCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RMTimedDispatch : NSObject

@property (readonly, nonatomic) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) id *timerCompletionBlock; // ivar: _timerCompletionBlock
@property (readonly, nonatomic) NSString *timerID; // ivar: _timerID


+(id)timedDispatchAfterInterval:(CGFloat)arg0 completionBlock:(id)arg1 ;
-(id)initAfterInterval:(CGFloat)arg0 completionBlock:(id)arg1 ;
-(void)cancel;


@end


#endif