// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMUTABLEPRIORITYQUEUEENTRY_H
#define HFMUTABLEPRIORITYQUEUEENTRY_H


#import <Foundation/Foundation.h>


@interface HFMutablePriorityQueueEntry : NSObject

@property (nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)initWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 priority:(NSInteger)arg1 ;


@end


#endif