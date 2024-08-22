// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDMEMORYUSAGEINTERVAL_H
#define _CDMEMORYUSAGEINTERVAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _CDMemoryUsageInterval : NSObject {
    NSUInteger _startingMemoryUsage;
    NSUInteger _startingLifetimeMaxMemoryUsage;
    NSUInteger _endingMemoryUsage;
    NSUInteger _endingLifetimeMaxMemoryUsage;
    NSUInteger _state;
    NSUInteger _startTime;
    BOOL _concurrentStart;
    BOOL _reset;
    NSUInteger _num;
    NSUInteger _concurrentPeakMemoryUsage;
    NSUInteger _peakMemoryUsage;
}


@property (readonly, nonatomic) NSString *client; // ivar: _client
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 client:(id)arg1 ;
-(void)begin;
-(void)dealloc;
-(void)end;


@end


#endif