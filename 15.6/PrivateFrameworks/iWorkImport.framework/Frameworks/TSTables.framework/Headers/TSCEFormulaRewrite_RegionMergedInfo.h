// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEFORMULAREWRITE_REGIONMERGEDINFO_H
#define TSCEFORMULAREWRITE_REGIONMERGEDINFO_H


#import <Foundation/Foundation.h>

#import "TSCEFormulaRewrite_RegionInfo.h"

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject

@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *mergeRegion; // ivar: _mergeRegion
@property (nonatomic) *TSUCellCoord mergeSource; // ivar: _mergeSource


-(id)description;
-(id)initWithMergeRegion:(id)arg0 mergeSource:(struct TSUCellCoord )arg1 ;


@end


#endif