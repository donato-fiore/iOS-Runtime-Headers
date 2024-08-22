// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDLAYERIMAGE_H
#define CUINAMEDLAYERIMAGE_H

@class NSString;
@protocol CUINamedLayerImageProtocol;


#import "CUINamedImage.h"

@interface CUINamedLayerImage : CUINamedImage <CUINamedLayerImageProtocol>



@property (nonatomic) int blendMode; // ivar: _blendMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fixedFrame; // ivar: _fixedFrame
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly) Class superclass;


-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;


@end


#endif