// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHXCHARTTYPE_H
#define CHXCHARTTYPE_H


#import <Foundation/Foundation.h>


@interface CHXChartType : NSObject



+(?)chdChartTypeFromXmlChartTypeElementstate;
+(?)chdGroupingFromXmlGroupingElement;
+(?)chdShapeTypeFromXmlShapeTypeElement;
+(?)chxChartTypeClassWithXmlElementstate;
+(id)stringWithGroupingEnum:(int)arg0 ;
+(void)prepareChartTypeForWriting:(id)arg0 ;
+(void)resolveStyle:(id)arg0 state:(id)arg1 ;


@end


#endif