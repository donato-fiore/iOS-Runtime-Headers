// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCURRENTSERVERTIMEPAIR_H
#define IDSCURRENTSERVERTIMEPAIR_H


#import <Foundation/Foundation.h>


@interface IDSCurrentServerTimePair : NSObject

@property (readonly, nonatomic) NSUInteger initialProcessMonotonicTimeInNanoSeconds; // ivar: _initialProcessMonotonicTimeInNanoSeconds
@property (readonly, nonatomic) NSUInteger initialServerTimeInNanoSeconds; // ivar: _initialServerTimeInNanoSeconds
@property (readonly, nonatomic) BOOL isAccurate; // ivar: _isAccurate


-(id)initWithInitialProcessMonotonicTimeInNanoSeconds:(NSUInteger)arg0 initialServerTimeInNanoSeconds:(NSUInteger)arg1 isAccurate:(BOOL)arg2 ;


@end


#endif