// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STDEBOUNCER_H
#define STDEBOUNCER_H

@protocol STDebouncerDelegate;

#import <Foundation/Foundation.h>


@interface STDebouncer : NSObject

@property (weak, nonatomic) NSObject<STDebouncerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat maxCoalescenceInterval; // ivar: _maxCoalescenceInterval
@property (nonatomic) CGFloat minCoalescenceInterval; // ivar: _minCoalescenceInterval
@property (retain) id *value; // ivar: _value


-(id)initWithMinCoalescenceInterval:(CGFloat)arg0 maxCoalescenceInterval:(CGFloat)arg1 ;
-(void)_idle;
-(void)_timeout;
-(void)bounce:(id)arg0 ;


@end


#endif