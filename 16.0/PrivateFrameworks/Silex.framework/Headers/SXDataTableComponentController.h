// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDATATABLECOMPONENTCONTROLLER_H
#define SXDATATABLECOMPONENTCONTROLLER_H

@class NSString, NSArray;
@protocol SXTextSourceDataSource, SXDataTableDataSource, SXDOMObjectProviding, SXDataTableComponentControllerDataSource, SXDataTableStyleFactory, SXDataTableTextSourceFactory;

#import <Foundation/Foundation.h>

#import "SXDataTableDictionary.h"
#import "SXDataRecordValueTransformerFactory.h"

@interface SXDataTableComponentController : NSObject <SXTextSourceDataSource, SXDataTableDataSource>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, nonatomic) SXDataTableDictionary *cellObjects; // ivar: _cellObjects
@property (readonly, weak, nonatomic) NSObject<SXDataTableComponentControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXDataRecordValueTransformerFactory *recordValueTransformerFactory; // ivar: _recordValueTransformerFactory
@property (retain, nonatomic) NSArray *records; // ivar: _records
@property (readonly, nonatomic) NSObject<SXDataTableStyleFactory> *styleFactory; // ivar: _styleFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXDataTableDictionary *textLayouters; // ivar: _textLayouters
@property (readonly, nonatomic) NSObject<SXDataTableTextSourceFactory> *textSourceFactory; // ivar: _textSourceFactory


-(BOOL)hasColumnHeader;
-(BOOL)hasRowHeader;
-(BOOL)indexPathIsHeader:(struct ? )arg0 ;
-(BOOL)shouldTreatIndexPathAsHeader:(struct ? )arg0 ;
-(CGFloat)convertConvertibleValue:(struct _SXConvertibleValue )arg0 ;
-(CGFloat)heightForCellAtIndexPath:(struct ? )arg0 ;
-(CGFloat)heightForCellndexPath:(struct ? )arg0 forWidth:(CGFloat)arg1 ;
-(CGFloat)minimumWidthForCellAtIndexPath:(struct ? )arg0 ;
-(CGFloat)minimumWidthForStorage:(id)arg0 usingStringEnumeration:(NSUInteger)arg1 ;
-(CGFloat)widthForCellAtIndexPath:(struct ? )arg0 ;
-(NSUInteger)dataOrientation;
-(NSUInteger)horizontalAlignmentForCellAtIndexPath:(struct ? )arg0 ;
-(NSUInteger)numberOfColumns;
-(NSUInteger)numberOfRows;
-(NSUInteger)verticalAlignmentForCellAtIndexPath:(struct ? )arg0 ;
-(id)additionsForTextSource:(id)arg0 ;
-(id)backgroundColorForCellAtIndexPath:(struct ? )arg0 ;
-(id)backgroundColorForColumnAtIndex:(NSUInteger)arg0 ;
-(id)backgroundColorForRowAtIndex:(NSUInteger)arg0 ;
-(id)cellBorderForCellAtIndexPath:(struct ? )arg0 ;
-(id)cellObjectForIndexPath:(struct ? )arg0 ;
-(id)cellStyleForIndexPath:(struct ? )arg0 ;
-(id)columnDividerAtIndex:(NSUInteger)arg0 ;
-(id)columnStyleForColumnIndex:(NSUInteger)arg0 ;
-(id)component;
-(id)componentTextStyleForTextSource:(id)arg0 inheritingFromDefaultStyles:(BOOL)arg1 ;
-(id)contentSizeCategoryForTextSource:(id)arg0 ;
-(id)dataDescriptorForIdentifier:(id)arg0 ;
-(id)dataDescriptorForIndexPath:(struct ? )arg0 ;
-(id)defaultComponentTextStyleForTextSource:(id)arg0 ;
-(id)defaultComponentTextStylesForTextSource:(id)arg0 ;
-(id)initWithStyleFactory:(id)arg0 textSourceFactory:(id)arg1 dataSource:(id)arg2 recordValueTransformerFactory:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(id)inlineTextStylesForTextSource:(id)arg0 ;
-(id)recordForIndexPath:(struct ? )arg0 ;
-(id)rowDividerAtIndex:(NSUInteger)arg0 ;
-(id)rowStyleForRowIndex:(NSUInteger)arg0 ;
-(id)tableBorder;
-(id)textLayouterForIndexPath:(struct ? )arg0 ;
-(id)textResizerForTextSource:(id)arg0 ;
-(id)textRulesForTextSource:(id)arg0 ;
-(id)textStyleForIdentifier:(id)arg0 ;
-(struct ? )indexPathSubstractingHeaders:(struct ? )arg0 ;
-(struct ? )paddingForCellAtIndexPath:(struct ? )arg0 ;
-(void)loadRecords;
-(void)prepareForLayout;


@end


#endif