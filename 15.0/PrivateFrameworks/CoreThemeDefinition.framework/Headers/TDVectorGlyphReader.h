// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDVECTORGLYPHREADER_H
#define TDVECTORGLYPHREADER_H

@class NSURL, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TDVectorGlyphReader : NSObject {
    os_unfair_lock_s _lock;
    *CGSVGDocument _svgDocument;
    NSURL *_fileURL;
    NSDictionary *_guideNodes;
    NSDictionary *_vectorGlyphNodes;
    NSMutableDictionary *_vectorGlyphWithWeightSize;
    BOOL _isInterpolatable;
    CGFloat _sourcePointSize;
    CGFloat _defaultPointSize;
}


@property (readonly) float templateVersion; // ivar: _templateVersion


+(id)vectorGlyphReaderWithURL:(id)arg0 error:(*id)arg1 ;
+(id)vectorGlyphReaderWithURL:(id)arg0 platform:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)_commonInitWithData:(id)arg0 platform:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)_readSVGNodesError:(*id)arg0 ;
-(BOOL)_validateVectorGlyphsWithError:(*id)arg0 ;
-(BOOL)canDrawWithWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(BOOL)containsWideGamutContent;
-(BOOL)isInterpolatableForWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(BOOL)vectorGlyphExistsWithWeight:(NSInteger)arg0 size:(NSInteger)arg1 error:(*id)arg2 ;
-(CGFloat)_sourcePointSize;
-(CGFloat)baselineForVectorGlyphWithWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(CGFloat)capHeightForVectorGlyphWithWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(CGFloat)defaultPointSize;
-(NSUInteger)numberOfVectorGlyphs;
-(id)_baselineNodeIDForGlyphSize:(NSInteger)arg0 ;
-(id)_caplineNodeIDForGlyphSize:(NSInteger)arg0 ;
-(id)_glyphNodeIDForWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(id)_marginNodeIDForWeight:(NSInteger)arg0 size:(NSInteger)arg1 direction:(NSInteger)arg2 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 platform:(NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 platform:(NSInteger)arg1 error:(*id)arg2 ;
-(struct ? )_fixedAlignmentRectInsetsForVectorGlyphWithWeight:(NSInteger)arg0 size:(NSInteger)arg1 foundExactMargins:(*BOOL)arg2 ;
-(struct ? )_interpolatedAlignmentRectInsetsForVectorGlyphWithWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(struct ? )alignmentRectInsetsForVectorGlyphWithWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(struct CGSVGDocument *)vectorGlyphWithWeight:(NSInteger)arg0 size:(NSInteger)arg1 error:(*id)arg2 ;
-(struct CGSVGNode *)interpolatedSymbolForWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(struct CGSize )canvasSizeForWeight:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(void)_calcInterpolatability;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 atPointSize:(CGFloat)arg1 scaleFactor:(CGFloat)arg2 weight:(NSInteger)arg3 size:(NSInteger)arg4 ;


@end


#endif