// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDSOLIDLAYERIMAGE_H
#define CUINAMEDSOLIDLAYERIMAGE_H

@class TXRTexture, NSString;
@protocol CUINamedLayerImageProtocol;


#import "CUINamedImage.h"
#import "CUINamedTexture.h"

@interface CUINamedSolidLayerImage : CUINamedImage <CUINamedLayerImageProtocol>

 {
    CUINamedTexture *_edgeTexture;
    CUINamedTexture *_gradientTexture;
    TXRTexture *_edgeTXR;
    TXRTexture *_gradientTXR;
}


@property (nonatomic) int blendMode; // ivar: _blendMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fixedFrame; // ivar: _fixedFrame
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly) Class superclass;


-(id)edgeDefinitionTextureWithBufferAllocator:(id)arg0 ;
-(id)gradientTextureWithBufferAllocator:(id)arg0 ;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif