// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCOREMODELCOLORVARIATION_H
#define AVTCOREMODELCOLORVARIATION_H

@class AVTColorPreset;

#import <Foundation/Foundation.h>

#import "AVTCoreModelColor.h"

@interface AVTCoreModelColorVariation : NSObject

@property (readonly, nonatomic) AVTCoreModelColor *color; // ivar: _color
@property (readonly, nonatomic) AVTColorPreset *colorPreset; // ivar: _colorPreset


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithColor:(id)arg0 colorPreset:(id)arg1 ;


@end


#endif