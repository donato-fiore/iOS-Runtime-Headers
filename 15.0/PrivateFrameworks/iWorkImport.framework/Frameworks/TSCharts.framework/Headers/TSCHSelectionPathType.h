// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHSELECTIONPATHTYPE_H
#define TSCHSELECTIONPATHTYPE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHSelectionPathType : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)axisLabelsType;
+(id)axisLineType;
+(id)axisTitleType;
+(id)categoryAxisType;
+(id)chartBodyType;
+(id)chartDataSetNameType;
+(id)chartTitleType;
+(id)errorBarType;
+(id)gridLineType;
+(id)legendSeriesNameType;
+(id)legendTrendLineNameType;
+(id)legendType;
+(id)referenceLineLabelType;
+(id)referenceLineType;
+(id)referenceLineValueLabelType;
+(id)selectionPathTypeWithType:(id)arg0 name:(id)arg1 ;
+(id)seriesEditModeType;
+(id)seriesLabelType;
+(id)seriesSymbolType;
+(id)seriesType;
+(id)seriesValueLabelType;
+(id)trendLineEquationType;
+(id)trendLineR2Type;
+(id)trendLineType;
+(id)valueAxisType;
-(BOOL)canApplyChartStyleWithDescription:(id)arg0 ;
-(BOOL)canApplyParagraphStyle;
-(BOOL)canApplyShapeStyle;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithType:(id)arg0 name:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif