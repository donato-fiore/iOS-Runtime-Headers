// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTCATEGORYAXIS_H
#define TSCHCHARTCATEGORYAXIS_H



#import "TSCHChartAxis.h"

@interface TSCHChartCategoryAxis : TSCHChartAxis



+(id)axisForInfo:(id)arg0 ;
+(unsigned char)styleOwnerPathType;
-(BOOL)isCategory;
-(BOOL)isRangeContinuous;
-(NSUInteger)indexForSelectionPathLabelIndex:(NSUInteger)arg0 ;
-(NSUInteger)selectionPathLabelIndexForIndex:(NSUInteger)arg0 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0 ;
-(id)defaultProperties;
-(id)g_genericToSpecificPropertyMap;
-(id)p_getGenericToCategoryPropertyMap;
-(id)p_getGenericToCategoryPropertyMapForMultiData;
-(id)p_getGenericToCategoryPropertyMapForNonMultiData;
-(int)specificPropertyForGeneric:(int)arg0 ;
-(struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> )labelEnumeratorPair;


@end


#endif