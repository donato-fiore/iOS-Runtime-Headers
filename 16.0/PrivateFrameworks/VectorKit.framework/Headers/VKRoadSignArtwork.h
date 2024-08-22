// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKROADSIGNARTWORK_H
#define VKROADSIGNARTWORK_H


#import <Foundation/Foundation.h>


@interface VKRoadSignArtwork : NSObject {
    *__CTLine _line;
    *__CTFrame _frame;
    *__CTFramesetter _framesetter;
    RoadSignMetrics _signMetrics;
    RoadSignTextMetrics _textMetrics;
    RoadSignGeneratedMetrics _generatedMetrics;
    RoadSignColoring _signColoring;
    shared_ptr<md::LabelIcon> _glyph;
    *CGImage _cgGlyph;
    vector<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>> _debugPoints;
    vector<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>> _debugRects;
    mutex _imageLock;
    _retain_ptr<VKImage *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _image;
}




-(*void)glyph;
-(*void)textMetrics;
-(id)image;
-(id)initWithFramesetter:(struct __CTFramesetter *)arg0 signMetrics:(struct RoadSignMetrics )arg1 textMetrics:(struct RoadSignTextMetrics )arg2 signColoring:(struct RoadSignColoring )arg3 glyph:(*void)arg4 cgGlyph:(struct CGImage *)arg5 ;
-(id)initWithLine:(struct __CTLine *)arg0 signMetrics:(struct RoadSignMetrics )arg1 textMetrics:(struct RoadSignTextMetrics )arg2 signColoring:(struct RoadSignColoring )arg3 glyph:(*void)arg4 cgGlyph:(struct CGImage *)arg5 ;
-(struct Box<float, 2> )localCollisionBounds;
-(struct Box<float, 2> )localRenderBounds;
-(struct Box<float, 2> )localSignBounds;
-(struct Matrix<float, 2, 1> )offsetPixelForPixel:(struct Matrix<float, 2, 1> )arg0 ;
-(struct RoadSignGeneratedMetrics *)generatedMetrics;
-(void)addDebugPoint:(struct CGPoint )arg0 color:(struct Color<float, 4, geo::ColorSpace::Linear> )arg1 ;
-(void)addDebugRect:(struct CGRect )arg0 color:(struct Color<float, 4, geo::ColorSpace::Linear> )arg1 ;
-(void)dealloc;


@end


#endif