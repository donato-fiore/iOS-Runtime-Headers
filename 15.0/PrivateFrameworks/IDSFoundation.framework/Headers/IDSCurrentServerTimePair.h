// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCURRENTSERVERTIMEPAIR_H
#define IDSCURRENTSERVERTIMEPAIR_H


#import <Foundation/Foundation.h>


@interface IDSCurrentServerTimePair : NSObject

@property (readonly, nonatomic) NSUInteger initialProcessMachTime; // ivar: _initialProcessMachTime
@property (readonly, nonatomic) NSUInteger initialServerTimeInNanoSeconds; // ivar: _initialServerTimeInNanoSeconds


-(id)initWithInitialProcessMachTime:(NSUInteger)arg0 initialServerTimeInNanoSeconds:(NSUInteger)arg1 ;


@end


#endif