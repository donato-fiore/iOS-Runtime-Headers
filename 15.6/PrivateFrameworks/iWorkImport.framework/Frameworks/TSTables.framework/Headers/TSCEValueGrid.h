// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEVALUEGRID_H
#define TSCEVALUEGRID_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCEValueGrid : NSObject <NSCopying>

 {
    TSCEBitGrid _coords;
    TSCEGridCoord _topLeftCoord;
    TSCEGridDimensions _dimensions;
    unordered_map<TSCEGridCoord, TSCEValue, std::hash<TSCEGridCoord>, std::equal_to<TSCEGridCoord>, std::allocator<std::pair<const TSCEGridCoord, TSCEValue>>> _valueForCoord;
}


@property (readonly, nonatomic) NSUInteger area;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) TSCEGridDimensions dimensions;
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, nonatomic) unsigned int numberOfColumns;
@property (readonly, nonatomic) unsigned int numberOfPopulatedColumns;
@property (readonly, nonatomic) unsigned int numberOfPopulatedRows;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) TSCEGridCoord topLeftCoord;


-(?)allValues;
-(?)flattenedGridNoThrow;
-(?)valueAtIndexNoThrowaccessContext;
-(?)valueAtIndexaccessContext;
-(BOOL)hasValueAtColumn:(unsigned int)arg0 row:(unsigned int)arg1 ;
-(BOOL)hasValueAtCoord:(struct TSCEGridCoord *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithColumnRange:(struct _NSRange )arg0 rowRange:(struct _NSRange )arg1 ;
-(id)initWithValueVector:(*void)arg0 ;
-(id)initWithValueVector:(*void)arg0 dimensions:(struct TSCEGridDimensions *)arg1 ;
-(id)intersectionWithCellRect:(struct TSUCellRect )arg0 ;
-(id)populatedSliceByIndex:(NSUInteger)arg0 byRow:(BOOL)arg1 ;
-(id)subGridAtGridCoord:(struct TSCEGridCoord *)arg0 width:(int)arg1 height:(int)arg2 ;
-(struct TSCEValue )firstValue;
-(struct TSCEValue )valueAt1DIndex:(NSUInteger)arg0 ;
-(struct TSCEValue )valueAtColumn:(unsigned int)arg0 row:(unsigned int)arg1 ;
-(struct TSCEValue )valueAtCoord:(struct TSCEGridCoord *)arg0 ;
-(struct TSCEValue )valueAtGridCoord:(struct TSCEGridCoord *)arg0 accessContext:(struct TSCEGridAccessContext *)arg1 ;
-(struct TSUIndexSet )populatedColumns;
-(struct TSUIndexSet )populatedRows;
-(void)clearValueAtColumn:(unsigned int)arg0 row:(unsigned int)arg1 ;
-(void)clearValueAtCoord:(struct TSCEGridCoord *)arg0 ;
-(void)compressToZeroBased;
-(void)enumerateValuesForColumn:(unsigned short)arg0 usingBlock:(id)arg1 ;
-(void)enumerateValuesForRow:(unsigned int)arg0 usingBlock:(id)arg1 ;
-(void)enumerateValuesUsingBlock:(id)arg0 ;
-(void)expandToIncludeCoord:(struct TSCEGridCoord *)arg0 ;
-(void)setEmptyValueAtCoord:(struct TSCEGridCoord *)arg0 ;
-(void)setValue:(struct TSCEValue *)arg0 atCoord:(struct TSCEGridCoord *)arg1 ;


@end


#endif