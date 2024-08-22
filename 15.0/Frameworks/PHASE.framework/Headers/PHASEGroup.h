// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEGROUP_H
#define PHASEGROUP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEGroup : NSObject {
    PHASEEngine *_engine;
    NSUInteger _hashId;
    CGFloat _gain;
    CGFloat _rate;
}


@property (nonatomic) CGFloat gain;
@property (nonatomic) CGFloat gainHighFrequency; // ivar: _gainHighFrequency
@property (nonatomic) CGFloat gainLowFrequency; // ivar: _gainLowFrequency
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isMuted; // ivar: _isMuted
@property (readonly) BOOL isSoloed; // ivar: _isSoloed
@property (readonly, getter=isMuted) BOOL muted; // ivar: _muted
@property (nonatomic) CGFloat rate;
@property (readonly, getter=isSoloed) BOOL soloed; // ivar: _soloed
@property (readonly, nonatomic) NSString *uid;


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEngine:(id)arg0 identifier:(id)arg1 ;
-(id)initWithEngine:(id)arg0 uid:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)fadeGain:(CGFloat)arg0 duration:(CGFloat)arg1 curveType:(NSInteger)arg2 ;
-(void)fadeGainHighFrequency:(CGFloat)arg0 duration:(CGFloat)arg1 curveType:(NSInteger)arg2 ;
-(void)fadeGainLowFrequency:(CGFloat)arg0 duration:(CGFloat)arg1 curveType:(NSInteger)arg2 ;
-(void)fadeRate:(CGFloat)arg0 duration:(CGFloat)arg1 curveType:(NSInteger)arg2 ;
-(void)mute;
-(void)registerWithEngine:(id)arg0 ;
-(void)solo;
-(void)unmute;
-(void)unregisterFromEngine;
-(void)unsolo;


@end


#endif