// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSATSGLYPHSTORAGE_H
#define NSATSGLYPHSTORAGE_H

@class CTGlyphStorageInterface, NSString;


#import "NSATSTypesetter.h"
#import "NSATSGlyphStorage.h"

@interface NSATSGlyphStorage : CTGlyphStorageInterface {
    *__CTGlyphStorage _glyphStorage;
    *__CFArray _masterRuns;
    NSATSTypesetter *_typesetter;
    *? _runs;
    NSInteger _numRuns;
    NSInteger _runBufferSize;
    _NSRange _glyphRange;
    _NSRange _characterRange;
    NSInteger _bufferSize;
    NSATSGlyphStorage *_parent;
    *__CFSet _children;
    NSInteger _paraEndElasticCharIndex;
    CGFloat _paraEndElasticCharWidth;
    NSString *_textString;
    *? _stack;
    *? _lastElasticRun;
    NSInteger _lastElasticRunLocation;
    NSInteger _totalAbsorbedCount;
    ? _gFlags;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(struct __CTGlyphStorage *)createCopy:(struct ? )arg0 ;
-(void)dealloc;
-(void)disposeGlyphStack;
-(void)finalize;
-(void)getCustomAdvance:(struct CGSize *)arg0 forIndex:(NSInteger)arg1 ;
-(void)initGlyphStack:(NSInteger)arg0 ;
-(void)insertGlyphs:(struct ? )arg0 ;
-(void)moveGlyphsTo:(NSInteger)arg0 from:(struct ? )arg1 ;
-(void)popGlyph:(NSInteger)arg0 ;
-(void)pushGlyph:(NSInteger)arg0 ;
-(void)release;
-(void)setAbsorbedCount:(NSInteger)arg0 forIndex:(NSInteger)arg1 ;
-(void)setAdvance:(struct CGSize )arg0 forIndex:(NSInteger)arg1 ;
-(void)setGlyphID:(unsigned short)arg0 forIndex:(NSInteger)arg1 ;
-(void)setProps:(unsigned int)arg0 forIndex:(NSInteger)arg1 ;
-(void)setStringIndex:(NSInteger)arg0 forIndex:(NSInteger)arg1 ;
-(void)swapGlyph:(NSInteger)arg0 withIndex:(NSInteger)arg1 ;


@end


#endif