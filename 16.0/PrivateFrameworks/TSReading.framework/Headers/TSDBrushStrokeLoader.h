// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDBRUSHSTROKELOADER_H
#define TSDBRUSHSTROKELOADER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSDBrushStrokeLoader : NSObject {
    NSMutableDictionary *_lineEnds;
    NSMutableDictionary *_images;
    NSMutableDictionary *_textureIndex;
    NSMutableDictionary *_options;
    NSMutableDictionary *_paths;
    NSMutableDictionary *_bounds;
}




+(CGFloat)p_brushPixelScaleAt100Percent;
+(id)brushStrokeLoaderForCurrentThread;
+(id)p_brushStrokeLoadQueue;
+(id)p_cacheDirectory;
-(?)p_loadLineEndsForBrushinSVGDoc;
-(?)p_loadSectionsForBrushinSVGDoc;
-(id)boundsForStroke:(id)arg0 ;
-(id)imageForStroke:(id)arg0 ;
-(id)lineEnd:(id)arg0 forStroke:(id)arg1 ;
-(id)optionsForStroke:(id)arg0 ;
-(id)p_loadImageForBrush:(id)arg0 ;
-(id)pathsForStroke:(id)arg0 ;
-(id)textureIndexForStroke:(id)arg0 ;
-(void)p_loadBrushIfNeeded:(id)arg0 ;
-(void)p_loadLineEndTextureForBrush:(id)arg0 lineEnd:(id)arg1 path:(struct CGPath *)arg2 andBounds:(struct CGRect )arg3 ;


@end


#endif