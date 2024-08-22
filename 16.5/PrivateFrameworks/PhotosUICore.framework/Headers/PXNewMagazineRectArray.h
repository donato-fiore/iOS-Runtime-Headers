// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNEWMAGAZINERECTARRAY_H
#define PXNEWMAGAZINERECTARRAY_H


#import <Foundation/Foundation.h>

#import "PXNewMagazineGrid.h"

@interface PXNewMagazineRectArray : NSObject {
    NSUInteger _currentIndex;
    NSUInteger _size;
    PXNewMagazineGrid *_tileGrid;
    BOOL _isPerfectEnding;
}


@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) NSUInteger endingType; // ivar: _endingType
@property (readonly, nonatomic) *PXMagazineRect rects; // ivar: _rects
@property (nonatomic) CGFloat score; // ivar: _score


-(BOOL)isEqualToRectArray:(id)arg0 ;
-(BOOL)isGoodEnding;
-(BOOL)isPerfectEnding;
-(BOOL)nextEmptyTileX:(*NSInteger)arg0 Y:(*NSInteger)arg1 maxWidth:(*NSInteger)arg2 ;
-(CGFloat)tileDensity;
-(NSUInteger)rowsUsed;
-(id)immutableCopyForCurrentRectsCount;
-(id)initWithSize:(NSUInteger)arg0 tileGrid:(id)arg1 ;
-(struct PXMagazineRect )rectAtIndex:(NSUInteger)arg0 ;
-(void)addRect:(struct PXMagazineRect )arg0 ;
-(void)dealloc;
-(void)removeLastRect;
-(void)reset;


@end


#endif