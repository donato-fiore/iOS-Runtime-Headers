// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHLEGENDMODELCACHEMAP_H
#define TSCHLEGENDMODELCACHEMAP_H

@class TSUPair, NSMapTable;

#import <Foundation/Foundation.h>

#import "TSCHChartModel.h"
#import "TSCHLegendModelCache.h"

@interface TSCHLegendModelCacheMap : NSObject {
    TSCHChartModel *_model;
    TSUPair *_selectionPair;
    TSCHLegendModelCache *_mainCache;
    NSMapTable *_map;
}




-(id)initWithChartModel:(id)arg0 textEditingSelectionPair:(id)arg1 ;
-(id)mainCache;
-(id)newLegendModelCacheForStyleProvidingSource:(id)arg0 ;
-(id)textCacheForStyleProvidingSource:(id)arg0 ;


@end


#endif