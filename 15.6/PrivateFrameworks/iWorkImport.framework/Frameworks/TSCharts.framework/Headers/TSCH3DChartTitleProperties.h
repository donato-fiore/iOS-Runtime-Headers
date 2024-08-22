// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTTITLEPROPERTIES_H
#define TSCH3DCHARTTITLEPROPERTIES_H


#import <Foundation/Foundation.h>

#import "TSCH3DChartTitlePositioner.h"
#import "TSCHChartInfo.h"
#import "TSCH3DLabelResources.h"

@interface TSCH3DChartTitleProperties : NSObject

@property (retain, nonatomic) TSCH3DChartTitlePositioner *cachedPositioner; // ivar: _cachedPositioner
@property (readonly, nonatomic) TSCHChartInfo *chartInfo; // ivar: _info
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) TSCH3DLabelResources *labels; // ivar: _labels


+(id)propertiesWithInfo:(id)arg0 styleIndex:(NSUInteger)arg1 styleProvidingSource:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInfo:(id)arg0 styleIndex:(NSUInteger)arg1 styleProvidingSource:(id)arg2 ;


@end


#endif