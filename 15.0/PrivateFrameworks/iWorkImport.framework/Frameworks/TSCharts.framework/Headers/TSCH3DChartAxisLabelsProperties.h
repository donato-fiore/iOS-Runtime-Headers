// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTAXISLABELSPROPERTIES_H
#define TSCH3DCHARTAXISLABELSPROPERTIES_H

@class TSULRUCache;

#import <Foundation/Foundation.h>

#import "TSCHChartInfo.h"
#import "TSCH3DLabelResources.h"
#import "TSCHSelectionPath.h"

@interface TSCH3DChartAxisLabelsProperties : NSObject

@property (nonatomic) float cachedTextFactor; // ivar: _cachedTextFactor
@property (readonly, nonatomic) TSULRUCache *categoryStridingCache; // ivar: _categoryStridingCache
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) TSCHChartInfo *info; // ivar: _info
@property (readonly, nonatomic) TSCH3DLabelResources *labels; // ivar: _labels
@property (retain, nonatomic) TSCHSelectionPath *selectionPath; // ivar: _selectionPath
@property (readonly, nonatomic) NSUInteger styleIndex; // ivar: _styleIndex


+(id)propertiesWithInfo:(id)arg0 labels:(id)arg1 styleIndex:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInfo:(id)arg0 labels:(id)arg1 styleIndex:(NSUInteger)arg2 ;


@end


#endif