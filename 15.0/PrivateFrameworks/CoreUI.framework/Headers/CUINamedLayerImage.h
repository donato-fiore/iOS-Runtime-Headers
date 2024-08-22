// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUINAMEDLAYERIMAGE_H
#define CUINAMEDLAYERIMAGE_H



#import "CUINamedImage.h"

@interface CUINamedLayerImage : CUINamedImage

@property (nonatomic) int blendMode; // ivar: _blendMode
@property (nonatomic) BOOL fixedFrame; // ivar: _fixedFrame
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) CGFloat opacity; // ivar: _opacity


-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;


@end


#endif