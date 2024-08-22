// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTFORMULAREWRITE_PIVOTINFO_H
#define TSTFORMULAREWRITE_PIVOTINFO_H

@class TSTHierarchicalCellDiffMap;

#import <Foundation/Foundation.h>

#import "TSTColumnRowUIDMapper.h"

@interface TSTFormulaRewrite_PivotInfo : NSObject

@property (retain, nonatomic) TSTHierarchicalCellDiffMap *afterRewriteMap; // ivar: _afterRewriteMap
@property (retain, nonatomic) TSTColumnRowUIDMapper *beforeColumnRowUIDMap; // ivar: _beforeColumnRowUIDMap
@property (retain, nonatomic) TSTHierarchicalCellDiffMap *beforeRewriteMap; // ivar: _beforeRewriteMap
@property (readonly, nonatomic) TSKUIDStruct tableUID; // ivar: _tableUID


-(id)description;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 beforeViewColumnRowUIDMap:(id)arg1 beforeRewriteMap:(id)arg2 ;


@end


#endif