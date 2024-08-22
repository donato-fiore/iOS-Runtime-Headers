// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLSTATEFORLAYOUT_H
#define TSTCELLSTATEFORLAYOUT_H


#import <Foundation/Foundation.h>

#import "TSTCell.h"
#import "TSTLayoutContentCachedKey.h"
#import "TSWPColumn.h"

@interface TSTCellStateForLayout : NSObject

@property (copy, nonatomic) TSTCell *cell; // ivar: mCell
@property (retain, nonatomic) id *cellContents; // ivar: mCellContents
@property (nonatomic) BOOL cellPropsRowHeight; // ivar: mCellPropsRowHeight
@property (nonatomic) BOOL cellWraps; // ivar: mCellWraps
@property (nonatomic) BOOL forDrawing; // ivar: mForDrawing
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) BOOL inDynamicLayout; // ivar: mInDynamicLayout
@property (retain, nonatomic) TSTLayoutContentCachedKey *keyVal; // ivar: mKeyVal
@property (nonatomic) int layoutCacheFlags; // ivar: mLayoutCacheFlags
@property (nonatomic) CGSize maxSize; // ivar: mMaxSize
@property (nonatomic) ? mergedRange; // ivar: mMergedRange
@property (nonatomic) CGSize minSize; // ivar: mMinSize
@property (nonatomic) ? modelCellID; // ivar: mModelCellID
@property (nonatomic) UIEdgeInsets paddingInsets; // ivar: mPaddingInsets
@property (nonatomic) NSUInteger pageCount; // ivar: mPageCount
@property (nonatomic) NSUInteger pageNumber; // ivar: mPageNumber
@property (nonatomic) unsigned int verticalAlignment; // ivar: mVerticalAlignment
@property (retain, nonatomic) TSWPColumn *wpColumn; // ivar: mWPColumn


-(id)init;
-(void)dealloc;


@end


#endif