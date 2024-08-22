// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CTNATIVEGLYPHSTORAGE_H
#define _CTNATIVEGLYPHSTORAGE_H

@class CTGlyphStorage;



@interface _CTNativeGlyphStorage : CTGlyphStorage {
    *NSInteger _attachCounts;
    *CGPoint _origins;
    NSUInteger _retainCount;
    *GlyphStack _stack;
    NSInteger _capacity;
    *void _preallocatedStorage;
}




+(id)newWithCount:(NSInteger)arg0 capacity:(NSInteger)arg1 ;
-(BOOL)implementsOrigins;
-(NSInteger)attachmentCountAtIndex:(NSInteger)arg0 ;
-(NSUInteger)retainCount;
-(id)copyWithRange:(struct ? )arg0 ;
-(id)initWithCount:(NSInteger)arg0 capacity:(NSInteger)arg1 ;
-(id)retain;
-(struct CGPoint )originAtIndex:(NSInteger)arg0 ;
-(struct CGSize *)allocatedAdvances;
-(void)dealloc;
-(void)initGlyphStackWithCapacity:(NSInteger)arg0 ;
-(void)insertGlyphsAtRange:(struct ? )arg0 ;
-(void)moveGlyphsFromRange:(struct ? )arg0 toIndex:(NSInteger)arg1 ;
-(void)popGlyphAtIndex:(NSInteger)arg0 ;
-(void)puntStringIndicesInRange:(struct ? )arg0 by:(NSInteger)arg1 ;
-(void)pushGlyphAtIndex:(NSInteger)arg0 ;
-(void)release;
-(void)resetOrigins:(struct ? )arg0 ;
-(void)setAdvance:(struct CGSize )arg0 atIndex:(NSInteger)arg1 ;
-(void)setAttachmentCount:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(void)setGlyph:(unsigned short)arg0 atIndex:(NSInteger)arg1 ;
-(void)setOrigin:(struct CGPoint )arg0 atIndex:(NSInteger)arg1 ;
-(void)setProps:(unsigned int)arg0 atIndex:(NSInteger)arg1 ;
-(void)setStringIndex:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(void)swapGlyphsAtIndex:(NSInteger)arg0 withIndex:(NSInteger)arg1 ;


@end


#endif