// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETIMAGEPREPROCESSPARAMS_H
#define ETIMAGEPREPROCESSPARAMS_H


#import <Foundation/Foundation.h>


@interface ETImagePreprocessParams : NSObject

@property (readonly, nonatomic) float bias_b; // ivar: _bias_b
@property (readonly, nonatomic) float bias_g; // ivar: _bias_g
@property (readonly, nonatomic) float bias_r; // ivar: _bias_r
@property (readonly, nonatomic) NSUInteger channels; // ivar: _channels
@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (readonly, nonatomic) BOOL network_wants_bgr; // ivar: _network_wants_bgr
@property (readonly, nonatomic) float scale; // ivar: _scale
@property (readonly, nonatomic) NSUInteger width; // ivar: _width


-(id)initWithHeight:(NSUInteger)arg0 Width:(NSUInteger)arg1 NumChannels:(NSUInteger)arg2 Scale:(float)arg3 BiasR:(float)arg4 BiasG:(float)arg5 BiasB:(float)arg6 NetworkWantBGR:(BOOL)arg7 ;


@end


#endif