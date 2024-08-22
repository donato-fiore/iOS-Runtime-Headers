// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATATABLELAYOUTER_H
#define SXDATATABLELAYOUTER_H

@class NSMutableDictionary;
@protocol SXDataTableDataSource;

#import <Foundation/Foundation.h>

#import "SXDataTableBlueprint.h"

@interface SXDataTableLayouter : NSObject

@property (retain, nonatomic) SXDataTableBlueprint *blueprint; // ivar: _blueprint
@property (readonly, nonatomic) CGFloat currentWidth; // ivar: _currentWidth
@property (readonly, nonatomic) NSObject<SXDataTableDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSMutableDictionary *intendedColumnWidths; // ivar: _intendedColumnWidths
@property (retain, nonatomic) NSMutableDictionary *minimumColumnWidths; // ivar: _minimumColumnWidths


-(CGFloat)intendedPercentualWidthForColumnAtIndex:(NSUInteger)arg0 ;
-(CGFloat)minimumWidthForColumnAtIndex:(NSUInteger)arg0 ;
-(CGFloat)totalColumnDividerWidth;
-(CGFloat)totalTableBorderHeight;
-(CGFloat)totalTableBorderWidth;
-(id)blueprintForWidth:(CGFloat)arg0 ;
-(id)blueprintUsingRowHeights:(id)arg0 columnWidths:(id)arg1 andTableWidth:(CGFloat)arg2 ;
-(id)columnWidthsForWidth:(CGFloat)arg0 resultingTableWidth:(*CGFloat)arg1 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)layoutDataTableForWidth:(CGFloat)arg0 ;
-(id)rowHeightsForColumnWidths:(id)arg0 ;
-(struct UIEdgeInsets )tableInsets;
-(void)reset;


@end


#endif