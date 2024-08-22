// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSYNCTHROTTLE_H
#define BRCSYNCTHROTTLE_H

@class NSPredicate;


#import "BRCThrottle.h"

@interface BRCSyncThrottle : BRCThrottle

@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(BOOL)_validateThrottleParams:(id)arg0 ;
-(BOOL)matchesItem:(id)arg0 nsecsToRetry:(*NSUInteger)arg1 now:(NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 andParameters:(id)arg1 ;


@end


#endif