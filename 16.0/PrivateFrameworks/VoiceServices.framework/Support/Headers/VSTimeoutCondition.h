// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSTIMEOUTCONDITION_H
#define VSTIMEOUTCONDITION_H

@class NSCondition;

#import <Foundation/Foundation.h>


@interface VSTimeoutCondition : NSObject

@property (retain, nonatomic) NSCondition *refreshTimeoutCondition; // ivar: _refreshTimeoutCondition
@property (nonatomic) BOOL shouldStop; // ivar: _shouldStop
@property (nonatomic) CGFloat timeoutValue; // ivar: _timeoutValue


-(BOOL)_waitForTimeInterval:(CGFloat)arg0 ;
-(BOOL)wait;
-(id)initWithTimeoutValue:(CGFloat)arg0 ;
-(void)refresh;
-(void)stop;


@end


#endif