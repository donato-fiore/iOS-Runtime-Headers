// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEMODELUPGRADINGHELPER_H
#define TSTTABLEMODELUPGRADINGHELPER_H


#import <Foundation/Foundation.h>

#import "TSTConcurrentSparseCellList.h"

@interface TSTTableModelUpgradingHelper : NSObject

@property (nonatomic) NSUInteger emptyCellCount; // ivar: _emptyCellCount
@property (readonly, nonatomic) TSUCellCoord sourceRectOrigin; // ivar: _sourceRectOrigin
@property (readonly, nonatomic) TSTConcurrentSparseCellList *sparseCellList; // ivar: _sparseCellList


+(?)perChunkHelperWithSourceRectOrigincellUIDRange;
-(?)initWithSourceRectOrigincellUIDRange;


@end


#endif