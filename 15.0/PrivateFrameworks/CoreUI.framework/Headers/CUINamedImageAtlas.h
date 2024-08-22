// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUINAMEDIMAGEATLAS_H
#define CUINAMEDIMAGEATLAS_H

@class NSDictionary, NSArray;


#import "CUINamedLookup.h"

@interface CUINamedImageAtlas : CUINamedLookup {
    NSDictionary *_images;
    NSArray *_renditions;
    *__CFArray _atlasImages;
}


@property (readonly, nonatomic) BOOL completeTextureExtrusion;
@property (readonly, nonatomic) *CGImage image;
@property (readonly, nonatomic) NSArray *imageNames;
@property (readonly, nonatomic) *__CFArray images;
@property (readonly, nonatomic) CGFloat scale;


-(id)imageWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 withContents:(id)arg2 contentsFromCatalog:(id)arg3 fromTheme:(NSUInteger)arg4 withSourceThemeRef:(NSUInteger)arg5 ;
-(void)dealloc;


@end


#endif