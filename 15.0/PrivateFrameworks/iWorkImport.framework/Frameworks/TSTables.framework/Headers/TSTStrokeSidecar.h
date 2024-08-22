// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTROKESIDECAR_H
#define TSTSTROKESIDECAR_H

@class TSPObject, NSPointerArray, NSString;
@protocol TSTCustomStrokeProviding;



@interface TSTStrokeSidecar : TSPObject <TSTCustomStrokeProviding>



@property (readonly, nonatomic) NSPointerArray *bottomRowStrokes; // ivar: _bottomRowStrokes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSPointerArray *leftColumnStrokes; // ivar: _leftColumnStrokes
@property (nonatomic) int maxOrder; // ivar: _maxOrder
@property (readonly, nonatomic) NSPointerArray *rightColumnStrokes; // ivar: _rightColumnStrokes
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSPointerArray *topRowStrokes; // ivar: _topRowStrokes


-(BOOL)isEmpty;
-(BOOL)mightHaveCellBorderAtCellID:(struct TSUCellCoord )arg0 ;
-(id)cellBorderAtCellID:(struct TSUCellCoord )arg0 ;
-(id)initForUpgradeWithTableModel:(id)arg0 ;
-(id)initWithTableModel:(id)arg0 ;
-(id)p_flattenMajorStrokeLayer:(id)arg0 minorStrokeLayer:(id)arg1 ;
-(id)strokeLayerForBottomOfRow:(unsigned int)arg0 ;
-(id)strokeLayerForLeftSideOfColumn:(unsigned short)arg0 ;
-(id)strokeLayerForRightSideOfColumn:(unsigned short)arg0 ;
-(id)strokeLayerForTopOfRow:(unsigned int)arg0 ;
-(struct TSUCellRect )p_strokeRect;
-(void)accumulateCellBordersConcurrently:(struct vector<TSTCell *, std::allocator<TSTCell *>> )arg0 inRow:(struct TSUModelRowIndex )arg1 atColumns:(*void)arg2 ;
// -(void)enumerateStrokesInRegion:(id)arg0 usingTopStrokeBlock:(id)arg1 usingBottomStrokeBlock:(unk)arg2 usingLeftStrokeBlock:(id)arg3 usingRightStrokeBlock:(unk)arg4  ;
-(void)flattenStrokeOrder;
-(void)insertColumns:(struct _NSRange )arg0 ;
-(void)insertRows:(struct _NSRange )arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveColumnIndexRange:(struct _NSRange )arg0 toIndex:(unsigned short)arg1 ;
-(void)moveRowIndexRange:(struct _NSRange )arg0 toIndex:(unsigned int)arg1 ;
-(void)p_setBottomStroke:(id)arg0 order:(int)arg1 atCellID:(struct TSUCellCoord )arg2 ;
-(void)p_setLeftStroke:(id)arg0 order:(int)arg1 atCellID:(struct TSUCellCoord )arg2 ;
-(void)p_setRightStroke:(id)arg0 order:(int)arg1 atCellID:(struct TSUCellCoord )arg2 ;
-(void)p_setStroke:(id)arg0 order:(int)arg1 inStrokesArray:(id)arg2 atIndex:(unsigned int)arg3 atRange:(struct TSTSimpleRange )arg4 ;
-(void)p_setTopStroke:(id)arg0 order:(int)arg1 atCellID:(struct TSUCellCoord )arg2 ;
-(void)removeColumns:(struct _NSRange )arg0 ;
-(void)removeRows:(struct _NSRange )arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setBordersWithCellMap:(id)arg0 ;
-(void)setBordersWithConcurrentCellMap:(id)arg0 forTableInfo:(id)arg1 ;
-(void)setCellBorder:(id)arg0 atCellID:(struct TSUCellCoord )arg1 ;
-(void)setStroke:(id)arg0 forBottomOfRow:(unsigned int)arg1 order:(int)arg2 columnRange:(struct TSTSimpleRange )arg3 ;
-(void)setStroke:(id)arg0 forLeftOfColumn:(unsigned short)arg1 order:(int)arg2 rowRange:(struct TSTSimpleRange )arg3 ;
-(void)setStroke:(id)arg0 forRightOfColumn:(unsigned short)arg1 order:(int)arg2 rowRange:(struct TSTSimpleRange )arg3 ;
-(void)setStroke:(id)arg0 forTopOfRow:(unsigned int)arg1 order:(int)arg2 columnRange:(struct TSTSimpleRange )arg3 ;
-(void)setStrokeLayer:(id)arg0 forBottomOfRow:(unsigned int)arg1 ;
-(void)setStrokeLayer:(id)arg0 forLeftOfColumn:(unsigned short)arg1 ;
-(void)setStrokeLayer:(id)arg0 forRightOfColumn:(unsigned short)arg1 ;
-(void)setStrokeLayer:(id)arg0 forTopOfRow:(unsigned int)arg1 ;
-(void)swapRowAtIndex:(unsigned int)arg0 withRowAtIndex:(unsigned int)arg1 ;
-(void)updateForTableSize:(struct ? )arg0 ;


@end


#endif