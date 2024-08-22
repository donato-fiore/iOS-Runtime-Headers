// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEPARTITIONER_H
#define TSTTABLEPARTITIONER_H

@class TSUPointerKeyDictionary, TSDInfoGeometry, NSMutableDictionary;
@protocol TSDPartitioner;

#import <Foundation/Foundation.h>

#import "TSTLayout.h"
#import "TSTTableInfo.h"

@interface TSTTablePartitioner : NSObject <TSDPartitioner>



@property (nonatomic) CGFloat firstPartitionWidth; // ivar: _firstPartitionWidth
@property (retain, nonatomic) TSUPointerKeyDictionary *hintMatricesByCanvas; // ivar: _hintMatricesByCanvas
@property (copy, nonatomic) TSDInfoGeometry *infoGeometry; // ivar: _infoGeometry
@property (readonly, nonatomic) CGFloat inlineTableWidth;
@property (nonatomic) BOOL layoutIsLTR; // ivar: _layoutIsLTR
@property (retain, nonatomic) NSMutableDictionary *partitioningPassCache; // ivar: _partitioningPassCache
@property (readonly, nonatomic) BOOL scaleIsValid;
@property (nonatomic) CGSize scaleToFit; // ivar: _scaleToFit
@property (retain, nonatomic) TSTLayout *scaledLayout; // ivar: _scaledLayout
@property (weak, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (nonatomic) BOOL tableIsLTR; // ivar: _tableIsLTR
@property (readonly, nonatomic) CGRect totalPartitionFrame;


-(BOOL)didHint:(id)arg0 syncWithNextHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(BOOL)p_didFinishPartitioningHint:(id)arg0 horizontally:(BOOL)arg1 ;
-(BOOL)shouldReuseLayout:(id)arg0 forSize:(struct CGSize )arg1 parentLayout:(id)arg2 hint:(id)arg3 ;
-(id)hintCacheKeyForHint:(id)arg0 ;
-(id)hintCacheKeyForPartitioningPass:(id)arg0 andHintID:(struct TSUCellCoord )arg1 ;
-(id)hintForLayout:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutForHint:(id)arg0 parentLayout:(id)arg1 ;
-(id)nextHintForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)nextLayoutForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)partitioningPassForFirstPartitionSize:(struct CGSize )arg0 ;
-(id)partitioningPassForHint:(id)arg0 withPreviousHint:(id)arg1 ;
-(struct TSUCellRect )calculateCellRangeForNextPartition:(unsigned short)arg0 nextPartitionRange:(struct TSUCellRect )arg1 additionalHeightForCaption:(CGFloat)arg2 availableSizeRemaining:(struct CGSize )arg3 previousHint:(id)arg4 ;
-(struct TSUCellRect )measureCellRangeForNextPartitionOfSize:(struct CGSize )arg0 previousHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(void)p_flushCacheAfterPartitioningFinished:(id)arg0 lastHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(void)setLayoutPartititionsRightToLeft:(BOOL)arg0 contentPartitionsRightToLeft:(BOOL)arg1 ;
-(void)validateScaledLayout;


@end


#endif