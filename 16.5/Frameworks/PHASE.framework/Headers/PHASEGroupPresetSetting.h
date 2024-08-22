// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEGROUPPRESETSETTING_H
#define PHASEGROUPPRESETSETTING_H


#import <Foundation/Foundation.h>


@interface PHASEGroupPresetSetting : NSObject

@property (readonly, nonatomic) CGFloat gain; // ivar: _gain
@property (readonly, nonatomic) NSInteger gainCurveType; // ivar: _gainCurveType
@property (readonly, nonatomic) CGFloat gainHighFrequency; // ivar: _gainHighFrequency
@property (readonly, nonatomic) CGFloat gainLowFrequency; // ivar: _gainLowFrequency
@property (readonly, nonatomic) CGFloat rate; // ivar: _rate
@property (readonly, nonatomic) NSInteger rateCurveType; // ivar: _rateCurveType


+(id)new;
-(id)init;
-(id)initWithGain:(CGFloat)arg0 rate:(CGFloat)arg1 gainCurveType:(NSInteger)arg2 rateCurveType:(NSInteger)arg3 ;
-(id)initWithGain:(CGFloat)arg0 rate:(CGFloat)arg1 gainHighFrequency:(CGFloat)arg2 gainLowFrequency:(CGFloat)arg3 gainCurveType:(NSInteger)arg4 rateCurveType:(NSInteger)arg5 ;


@end


#endif