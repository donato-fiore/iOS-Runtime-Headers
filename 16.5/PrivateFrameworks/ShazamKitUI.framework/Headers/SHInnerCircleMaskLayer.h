// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHINNERCIRCLEMASKLAYER_H
#define SHINNERCIRCLEMASKLAYER_H



#import "SHPaletteLayer.h"

@interface SHInnerCircleMaskLayer : SHPaletteLayer

@property (nonatomic) CGFloat innerCircleRelativeSize;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setup;


@end


#endif