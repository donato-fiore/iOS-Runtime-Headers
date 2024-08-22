// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUREPEATINGACTION_H
#define TUREPEATINGACTION_H


#import <Foundation/Foundation.h>


@interface TURepeatingAction : NSObject

@property (copy, nonatomic) id *action; // ivar: _action
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGFloat pauseDuration; // ivar: _pauseDuration
@property (nonatomic) NSUInteger remainingIterations; // ivar: _remainingIterations


-(id)initWithAction:(id)arg0 ;


@end


#endif