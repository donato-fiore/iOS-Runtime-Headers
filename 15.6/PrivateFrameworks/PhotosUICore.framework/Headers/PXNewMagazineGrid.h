// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNEWMAGAZINEGRID_H
#define PXNEWMAGAZINEGRID_H


#import <Foundation/Foundation.h>


@interface PXNewMagazineGrid : NSObject {
    *NSInteger _table;
    NSUInteger _tableSizeInBytes;
    NSInteger _maxRows;
}


@property (readonly, nonatomic) NSUInteger currentRowsUsed;
@property (readonly, nonatomic) NSUInteger endingType;
@property (readonly, nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns


-(BOOL)_hasAnyEmptyTilesInArea:(struct PXMagazineRect )arg0 ;
-(BOOL)_hasAnyTilesUsedInArea:(struct PXMagazineRect )arg0 ;
-(BOOL)_isEmptyGrid;
-(BOOL)isGoodEnding;
-(BOOL)isPerfectEnding;
-(BOOL)nextEmptyTileX:(*NSInteger)arg0 Y:(*NSInteger)arg1 maxWidth:(*NSInteger)arg2 ;
-(NSInteger)_numberOfEmptyTilesAtTheEnd;
-(NSInteger)_numberOfEmptyTilesInArea:(struct PXMagazineRect )arg0 ;
-(NSUInteger)_rowsUsed;
-(id)init;
-(id)initWithNumberOfColumns:(NSInteger)arg0 size:(NSUInteger)arg1 ;
-(void)clearArea:(struct PXMagazineRect )arg0 ;
-(void)dealloc;
-(void)enlargeTable;
-(void)reset;
-(void)resetWithSize:(NSUInteger)arg0 ;
-(void)setTileIdentifier:(NSUInteger)arg0 forArea:(struct PXMagazineRect )arg1 ;


@end


#endif