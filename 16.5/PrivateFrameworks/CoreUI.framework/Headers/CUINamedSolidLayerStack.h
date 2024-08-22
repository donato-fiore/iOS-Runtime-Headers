// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDSOLIDLAYERSTACK_H
#define CUINAMEDSOLIDLAYERSTACK_H

@class NSString, NSArray;
@protocol CUINamedLayerStackProtocol;


#import "CUINamedLookup.h"
#import "CUIThemeRendition.h"

@interface CUINamedSolidLayerStack : CUINamedLookup <CUINamedLayerStackProtocol>

 {
    CUIThemeRendition *_flattenedImageRendition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *CGImage flattenedImage;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layers; // ivar: _layers
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 resolvingWithBlock:(id)arg3 ;
-(id)layerImageAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif