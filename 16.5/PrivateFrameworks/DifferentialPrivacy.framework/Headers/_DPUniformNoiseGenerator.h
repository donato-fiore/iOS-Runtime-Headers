// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPUNIFORMNOISEGENERATOR_H
#define _DPUNIFORMNOISEGENERATOR_H


#import <Foundation/Foundation.h>


@interface _DPUniformNoiseGenerator : NSObject

@property (readonly, nonatomic) CGFloat minValue; // ivar: _minValue
@property (readonly, nonatomic) CGFloat range; // ivar: _range


+(id)generatorWithValueRange:(id)arg0 ;
-(CGFloat)sample;
-(id)description;
-(id)init;
-(id)initWithValueRange:(id)arg0 ;


@end


#endif