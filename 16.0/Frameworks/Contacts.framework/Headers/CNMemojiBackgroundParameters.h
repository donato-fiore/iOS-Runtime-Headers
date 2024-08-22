// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMEMOJIBACKGROUNDPARAMETERS_H
#define CNMEMOJIBACKGROUNDPARAMETERS_H


#import <Foundation/Foundation.h>

#import "CNMemojiBackgroundColor.h"

@interface CNMemojiBackgroundParameters : NSObject

@property (copy, nonatomic) CNMemojiBackgroundColor *contentColor; // ivar: _contentColor


+(id)defaultBackgroundColorDescription;
-(CGFloat)locationForColorAtIndex:(NSInteger)arg0 forLayer:(NSInteger)arg1 ;
-(NSInteger)numberOfColorsForLayer:(NSInteger)arg0 ;
-(NSInteger)numberOfLayers;
-(id)backgroundLayerColorForIndex:(NSInteger)arg0 ;
-(id)colorAtIndex:(NSInteger)arg0 forLayer:(NSInteger)arg1 ;
-(id)colorLayerColorForIndex:(NSInteger)arg0 ;
-(id)description;
-(id)initWithColorDescription:(id)arg0 ;
-(id)topGradientLayerColorForIndex:(NSInteger)arg0 ;
-(struct CGPoint )endPointForLayerAtIndex:(NSInteger)arg0 ;
-(struct CGPoint )startPointForLayerAtIndex:(NSInteger)arg0 ;


@end


#endif