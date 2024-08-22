// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISCONTENTLAYER_H
#define ISCONTENTLAYER_H

@class IFColor;
@protocol ISCompositorResource;


#import "ISLayer.h"

@interface ISContentLayer : ISLayer

@property (nonatomic) BOOL acceptSymbol; // ivar: _acceptSymbol
@property (retain, nonatomic) IFColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSObject<ISCompositorResource> *content; // ivar: _content


-(id)init;


@end


#endif