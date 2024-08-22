// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISSYMBOLLAYER_H
#define ISSYMBOLLAYER_H

@class IFColor;
@protocol ISCompositorResource;


#import "ISLayer.h"

@interface ISSymbolLayer : ISLayer

@property (retain, nonatomic) IFColor *color; // ivar: _color
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (retain, nonatomic) NSObject<ISCompositorResource> *symbol; // ivar: _symbol
@property (nonatomic) NSUInteger symbolSize; // ivar: _symbolSize
@property (nonatomic) NSInteger symbolWeight; // ivar: _symbolWeight


-(id)init;


@end


#endif