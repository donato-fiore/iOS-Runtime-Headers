// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONGRIDIMAGE_H
#define SBICONGRIDIMAGE_H

@class UIImage, CPMemoryPool;
@protocol SBIconListLayout;



@interface SBIconGridImage : UIImage

@property (retain, nonatomic) NSObject<SBIconListLayout> *listLayout; // ivar: _listLayout
@property (readonly, nonatomic) NSUInteger numberOfCells;
@property (readonly, nonatomic) NSUInteger numberOfColumns;
@property (readonly, nonatomic) NSUInteger numberOfRows;
@property (retain, nonatomic) CPMemoryPool *pool; // ivar: _pool
@property (nonatomic) unsigned int treatedCells; // ivar: _treatedCells


+(NSUInteger)numberOfRowsForNumberOfCells:(NSUInteger)arg0 inLayout:(id)arg1 ;
+(id)gridImageForLayout:(id)arg0 cellImageDrawBlock:(id)arg1 ;
+(id)gridImageForLayout:(id)arg0 pool:(id)arg1 cellImageDrawBlock:(id)arg2 ;
+(id)gridImageForLayout:(id)arg0 previousGridImage:(id)arg1 previousGridCellIndexToUpdate:(NSUInteger)arg2 pool:(id)arg3 cellImageDrawBlock:(id)arg4 ;
+(struct CGRect )rectAtIndex:(NSUInteger)arg0 inLayout:(id)arg1 maxCount:(NSUInteger)arg2 ;
+(struct CGSize )sizeForLayout:(id)arg0 ;
-(BOOL)isIconImageTreatedAtIndex:(NSUInteger)arg0 ;
-(id)gridImageByPatchingCellAtIndex:(NSUInteger)arg0 cellImageProviderBlock:(id)arg1 ;
-(id)iconImageAtIndex:(NSUInteger)arg0 ;


@end


#endif