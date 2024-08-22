// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCYCLEROPERATION_H
#define WBSCYCLEROPERATION_H


#import <Foundation/Foundation.h>


@interface WBSCyclerOperation : NSObject {
    NSUInteger _numberOfRemainingAttempts;
    float _backoffRatio;
}


@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, nonatomic) CGFloat nextBackoffTimeInterval; // ivar: _nextBackoffTimeInterval


-(id)init;
-(id)initWithMaximumNumberOfAttempts:(NSUInteger)arg0 backoffRatio:(float)arg1 ;
-(void)executeWithResultHandler:(id)arg0 ;


@end


#endif