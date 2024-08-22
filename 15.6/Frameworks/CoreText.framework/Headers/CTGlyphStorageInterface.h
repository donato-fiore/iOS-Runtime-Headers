// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTGLYPHSTORAGEINTERFACE_H
#define CTGLYPHSTORAGEINTERFACE_H


#import <Foundation/Foundation.h>


@interface CTGlyphStorageInterface : NSObject {
    NSInteger _glyphCount;
    *unsigned short _glyphs;
    *CGSize _advances;
    *unsigned int _props;
    *NSInteger _stringIndexes;
    *NSInteger _absorbedCounts;
    *CGPoint _origins;
}




-(struct __CTGlyphStorage *)createCopy:(struct ? )arg0 ;
-(void)disposeGlyphStack;
-(void)getCustomAdvance:(struct CGSize *)arg0 forIndex:(NSInteger)arg1 ;
-(void)initGlyphStack:(NSInteger)arg0 ;
-(void)insertGlyphs:(struct ? )arg0 ;
-(void)moveGlyphsTo:(NSInteger)arg0 from:(struct ? )arg1 ;
-(void)popGlyph:(NSInteger)arg0 ;
-(void)pushGlyph:(NSInteger)arg0 ;
-(void)setAbsorbedCount:(NSInteger)arg0 forIndex:(NSInteger)arg1 ;
-(void)setAdvance:(struct CGSize )arg0 forIndex:(NSInteger)arg1 ;
-(void)setGlyphID:(unsigned short)arg0 forIndex:(NSInteger)arg1 ;
-(void)setProps:(unsigned int)arg0 forIndex:(NSInteger)arg1 ;
-(void)setStringIndex:(NSInteger)arg0 forIndex:(NSInteger)arg1 ;
-(void)swapGlyph:(NSInteger)arg0 withIndex:(NSInteger)arg1 ;


@end


#endif