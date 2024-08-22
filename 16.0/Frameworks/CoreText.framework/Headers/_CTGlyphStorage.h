// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CTGLYPHSTORAGE_H
#define _CTGLYPHSTORAGE_H


#import <Foundation/Foundation.h>


@interface _CTGlyphStorage : NSObject {
    NSInteger _count;
    *unsigned short _glyphs;
    *CGFloat _advanceWidths;
    *CGSize _advances;
    *unsigned int _props;
    *NSInteger _stringIndices;
}




-(*void)refCon;
-(BOOL)implementsOrigins;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)attachmentCountAtIndex:(NSInteger)arg0 ;
-(id)copyWithRange:(struct ? )arg0 ;
-(id)initWithCount:(NSInteger)arg0 ;
-(struct CGPoint )originAtIndex:(NSInteger)arg0 ;
-(struct CGSize *)allocatedAdvances;
-(void)disposeGlyphStack;
-(void)initGlyphStackWithCapacity:(NSInteger)arg0 ;
-(void)insertGlyphsAtRange:(struct ? )arg0 ;
-(void)moveGlyphsFromRange:(struct ? )arg0 toIndex:(NSInteger)arg1 ;
-(void)popGlyphAtIndex:(NSInteger)arg0 ;
-(void)puntStringIndicesInRange:(struct ? )arg0 by:(NSInteger)arg1 ;
-(void)pushGlyphAtIndex:(NSInteger)arg0 ;
-(void)resetOrigins:(struct ? )arg0 ;
-(void)setAdvance:(struct CGSize )arg0 atIndex:(NSInteger)arg1 ;
-(void)setAttachmentCount:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(void)setGlyph:(unsigned short)arg0 atIndex:(NSInteger)arg1 ;
-(void)setOrigin:(struct CGPoint )arg0 atIndex:(NSInteger)arg1 ;
-(void)setProps:(unsigned int)arg0 atIndex:(NSInteger)arg1 ;
-(void)setStringIndex:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(void)swapGlyphsAtIndex:(NSInteger)arg0 withIndex:(NSInteger)arg1 ;
-(void)sync;


@end


#endif