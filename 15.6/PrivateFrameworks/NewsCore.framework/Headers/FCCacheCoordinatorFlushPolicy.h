// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCACHECOORDINATORFLUSHPOLICY_H
#define FCCACHECOORDINATORFLUSHPOLICY_H


#import <Foundation/Foundation.h>


@interface FCCacheCoordinatorFlushPolicy : NSObject

@property (readonly, nonatomic) BOOL alwaysFlushKeysWithZeroInterest; // ivar: _alwaysFlushKeysWithZeroInterest
@property (readonly, nonatomic) NSUInteger highWaterMark; // ivar: _highWaterMark
@property (readonly, nonatomic) NSUInteger lowWaterMark; // ivar: _lowWaterMark


-(id)initWithLowWaterMark:(NSUInteger)arg0 highWaterMark:(NSUInteger)arg1 alwaysFlushKeysWithZeroInterest:(BOOL)arg2 ;


@end


#endif