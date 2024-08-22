// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEPARTITIONER_H
#define TSTTABLEPARTITIONER_H

@class TSUPointerKeyDictionary, NSMutableDictionary;
@protocol TSDPartitioner;

#import <Foundation/Foundation.h>

#import "TSTLayout.h"
#import "TSDInfoGeometry.h"
#import "TSTTableInfo.h"

@interface TSTTablePartitioner : NSObject <TSDPartitioner>

 {
    TSTLayout *mScaledLayout;
    TSUPointerKeyDictionary *mHintMatricesByCanvas;
    NSMutableDictionary *mPartitioningPassCache;
}


@property (copy, nonatomic) TSDInfoGeometry *infoGeometry; // ivar: mInfoGeometry
@property (readonly, nonatomic) CGFloat inlineTableWidth; // ivar: mFirstPartitionWidth
@property (readonly, nonatomic) BOOL scaleIsValid;
@property (nonatomic) CGSize scaleToFit; // ivar: mScaleToFit
@property (readonly, nonatomic) TSTLayout *scaledLayout;
@property (readonly, nonatomic) TSTTableInfo *tableInfo; // ivar: mTableInfo


-(BOOL)didHint:(id)arg0 syncWithNextHint:(id)arg1 horizontally:(BOOL)arg2 delta:(int)arg3 ;
-(BOOL)p_didFinishPartitioningHint:(id)arg0 horizontally:(BOOL)arg1 ;
-(BOOL)shouldReuseLayout:(id)arg0 forSize:(struct CGSize )arg1 parentLayout:(id)arg2 hint:(id)arg3 ;
-(id)hintCacheKeyForHint:(id)arg0 ;
-(id)hintCacheKeyForPartitioningPass:(id)arg0 andHintID:(struct ? )arg1 ;
-(id)hintForLayout:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutForHint:(id)arg0 parentLayout:(id)arg1 ;
-(id)nextHintForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)nextLayoutForSize:(struct CGSize )arg0 parentLayout:(id)arg1 previousHint:(id)arg2 horizontally:(BOOL)arg3 outFinished:(*BOOL)arg4 ;
-(id)partitioningPassForFirstPartitionSize:(struct CGSize )arg0 ;
-(id)partitioningPassForHint:(id)arg0 withPreviousHint:(id)arg1 ;
-(struct ? )measureCellRangeForNextPartitionOfSize:(struct CGSize )arg0 previousHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(void)dealloc;
-(void)p_flushCacheAfterPartitioningFinished:(id)arg0 lastHint:(id)arg1 horizontally:(BOOL)arg2 ;
-(void)validateScaledLayout;


@end


#endif