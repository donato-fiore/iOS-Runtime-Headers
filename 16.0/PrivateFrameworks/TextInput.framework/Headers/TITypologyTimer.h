// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPOLOGYTIMER_H
#define TITYPOLOGYTIMER_H


#import <Foundation/Foundation.h>


@interface TITypologyTimer : NSObject

@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (nonatomic) BOOL foundFirstInput; // ivar: _foundFirstInput
@property (nonatomic) CGFloat maxTimeIntervalBetweenInputs; // ivar: _maxTimeIntervalBetweenInputs
@property (nonatomic) CGFloat mostRecentTimestamp; // ivar: _mostRecentTimestamp


-(void)addInputEventWithTimestamp:(CGFloat)arg0 ;


@end


#endif