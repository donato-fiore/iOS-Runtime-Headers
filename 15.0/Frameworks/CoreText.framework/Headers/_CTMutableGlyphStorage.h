// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CTMUTABLEGLYPHSTORAGE_H
#define _CTMUTABLEGLYPHSTORAGE_H

@class CTGlyphStorage;
@protocol _CTGlyphStorageAdvanceLookup;


#import "CTGlyphStorageInterface.h"

@interface _CTMutableGlyphStorage : CTGlyphStorage <_CTGlyphStorageAdvanceLookup>

 {
    CTGlyphStorageInterface *_interface;
}


@property (readonly, nonatomic) BOOL hasCustomAdvances; // ivar: _hasCustomAdvances
@property (readonly, nonatomic) BOOL implementsCustomAdvancesForIndexes; // ivar: _implementsCustomAdvancesForIndexes
@property (readonly, nonatomic) BOOL implementsOrigins; // ivar: _implementsOrigins


-(*void)refCon;
-(NSInteger)attachmentCountAtIndex:(NSInteger)arg0 ;
-(id)copyWithRange:(struct ? )arg0 ;
-(id)initWithInterface:(id)arg0 ;
-(id)initWithInterface:(id)arg0 options:(unsigned int)arg1 ;
-(struct CGPoint )originAtIndex:(NSInteger)arg0 ;
-(struct CGSize )customAdvanceForIndex:(NSInteger)arg0 ;
-(void)disposeGlyphStack;
-(void)getCustomAdvances:(struct CGSize *)arg0 forIndexes:(*NSInteger)arg1 count:(NSInteger)arg2 ;
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