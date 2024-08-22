// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPBTLETUPLE_H
#define HAPBTLETUPLE_H


#import <Foundation/Foundation.h>


@interface HAPBTLETuple : NSObject

@property (nonatomic) NSUInteger atvState; // ivar: _atvState
@property (nonatomic) float maxBandwidth; // ivar: _maxBandwidth
@property (nonatomic) int maxHAPConnections; // ivar: _maxHAPConnections
@property (nonatomic) float minBandwidth; // ivar: _minBandwidth
@property (nonatomic) BTStatus state; // ivar: _state


+(id)atvState2String:(NSUInteger)arg0 ;
+(id)makeTupleWithATVState:(NSUInteger)arg0 MaxHAPConnections:(int)arg1 ;
+(id)makeTupleWithATVState:(NSUInteger)arg0 MaxHAPConnections:(int)arg1 MinBandwidth:(float)arg2 MaxBandwidth:(float)arg3 ;
+(id)makeTupleWithState:(struct BTStatus *)arg0 MaxHAPConnections:(int)arg1 MinBandwidth:(float)arg2 MaxBandwidth:(float)arg3 ;
+(id)state2String:(struct BTStatus *)arg0 ;
+(void)bandwidthFromATVState:(NSUInteger)arg0 MinBandwidth:(*float)arg1 MaxBandwidth:(*float)arg2 ;
-(id)description;


@end


#endif