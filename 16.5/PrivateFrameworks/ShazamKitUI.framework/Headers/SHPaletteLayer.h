// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHPALETTELAYER_H
#define SHPALETTELAYER_H

@class CALayer;


#import "SHPalette.h"

@interface SHPaletteLayer : CALayer

@property (readonly, nonatomic) SHPalette *palette; // ivar: _palette


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPalette:(id)arg0 ;
-(void)setup;


@end


#endif