// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHPROPERTYVALUESTORAGECONTAINER_H
#define TSCHPROPERTYVALUESTORAGECONTAINER_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "TSCHChartNonStyle.h"
#import "TSCHChartStyle.h"
#import "TSCHLegendNonStyle.h"
#import "TSCHLegendStyle.h"
#import "TSCHReferenceLineStyle.h"

@interface TSCHPropertyValueStorageContainer : NSObject {
    NSMutableArray *_valueAxisStyles;
    NSMutableArray *_valueAxisNonStyles;
    NSMutableArray *_categoryAxisStyles;
    NSMutableArray *_categoryAxisNonStyles;
    NSMutableArray *_seriesThemeStyles;
    NSMutableArray *_seriesPrivateStyles;
    NSMutableArray *_seriesNonStyles;
    NSMutableArray *_paragraphStyles;
    NSMutableDictionary *_referenceLineStyles;
    NSMutableDictionary *_referenceLineNonStyles;
}


@property (copy, nonatomic) NSArray *categoryAxisNonStyles;
@property (copy, nonatomic) NSArray *categoryAxisStyles;
@property (retain, nonatomic) TSCHChartNonStyle *chartNonStyle; // ivar: _chartNonStyle
@property (retain, nonatomic) TSCHChartStyle *chartStyle; // ivar: _chartStyle
@property (retain, nonatomic) TSCHLegendNonStyle *legendNonStyle; // ivar: _legendNonStyle
@property (retain, nonatomic) TSCHLegendStyle *legendStyle; // ivar: _legendStyle
@property (copy, nonatomic) NSArray *paragraphStyles;
@property (copy, nonatomic) NSDictionary *referenceLineNonStyles;
@property (copy, nonatomic) NSDictionary *referenceLineStyles;
@property (retain, nonatomic) TSCHReferenceLineStyle *referenceLineThemeStyle; // ivar: _referenceLineThemeStyle
@property (copy, nonatomic) NSArray *seriesNonStyles;
@property (copy, nonatomic) NSArray *seriesPrivateStyles;
@property (copy, nonatomic) NSArray *seriesThemeStyles;
@property (copy, nonatomic) NSArray *valueAxisNonStyles;
@property (copy, nonatomic) NSArray *valueAxisStyles;


-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif