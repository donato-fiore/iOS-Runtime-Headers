// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECPREDICTIONCACHERESULT_H
#define _DECPREDICTIONCACHERESULT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _DECPredictionCacheResult : NSObject

@property (readonly, nonatomic) NSUInteger hits; // ivar: _hits
@property (readonly, nonatomic) NSUInteger misses; // ivar: _misses
@property (readonly, nonatomic) NSDictionary *predictions; // ivar: _predictions


-(id)description;
-(id)initWithPredictions:(id)arg0 hits:(NSUInteger)arg1 misses:(NSUInteger)arg2 ;


@end


#endif