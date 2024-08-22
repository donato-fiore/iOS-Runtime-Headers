// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGSPRITEDATASTORE_H
#define PXGSPRITEDATASTORE_H

@class NSString;
@protocol PXGDiagnosticsProvider;

#import <Foundation/Foundation.h>


@interface PXGSpriteDataStore : NSObject <PXGDiagnosticsProvider>

 {
    unsigned int _capacity;
}


@property (nonatomic) unsigned int count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) *? entities; // ivar: _entities
@property (readonly, nonatomic) *? geometries; // ivar: _geometries
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *? infos; // ivar: _infos
@property (nonatomic) ? sprites;
@property (readonly, nonatomic) *? styles; // ivar: _styles
@property (readonly) Class superclass;


+(id)newSpriteDataStore;
-(id)_init;
-(id)init;
-(id)spriteAtIndexes:(id)arg0 inRect:(struct CGRect )arg1 ;
-(id)spriteIndexesInRect:(struct CGRect )arg0 ;
-(id)spriteIndexesWithSpriteInfoFlags:(unsigned char)arg0 ;
-(struct ? )spritesInRange:(struct _PXGSpriteIndexRange )arg0 ;
-(void)_collectSpriteIndexes:(id)arg0 inRange:(struct _PXGSpriteIndexRange )arg1 inRect:(struct CGRect )arg2 ;
-(void)applyChangeDetails:(id)arg0 ;
-(void)clearEntities;
-(void)dealloc;
-(void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange )arg0 usingBlock:(id)arg1 ;
-(void)enumerateSpritesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)insertSpritesInRange:(struct _PXGSpriteIndexRange )arg0 ;
-(void)moveSpritesFromIndexes:(struct __CFArray *)arg0 toIndexes:(id)arg1 ;
-(void)moveSpritesInRange:(struct _PXGSpriteIndexRange )arg0 toRange:(struct _PXGSpriteIndexRange )arg1 ;
-(void)recycle;
-(void)removeSpritesInRange:(struct _PXGSpriteIndexRange )arg0 ;


@end


#endif