// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDATATABLECOMPONENTSTYLEFACTORY_H
#define SXDATATABLECOMPONENTSTYLEFACTORY_H

@class NSString;
@protocol SXDataTableStyleFactory;

#import <Foundation/Foundation.h>

#import "SXJSONObjectMerger.h"
#import "SXDataRecordStore.h"
#import "SXDataTableSelectorValidator.h"
#import "SXDataTableStyle.h"

@interface SXDataTableComponentStyleFactory : NSObject <SXDataTableStyleFactory>



@property (readonly, nonatomic) SXJSONObjectMerger *cellStyleMerger; // ivar: _cellStyleMerger
@property (readonly, nonatomic) SXJSONObjectMerger *columnStyleMerger; // ivar: _columnStyleMerger
@property (readonly, nonatomic) NSUInteger dataOrientation; // ivar: _dataOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXDataRecordStore *recordStore; // ivar: _recordStore
@property (readonly, nonatomic) SXJSONObjectMerger *rowStyleMerger; // ivar: _rowStyleMerger
@property (readonly, nonatomic) SXDataTableSelectorValidator *selectorValidator; // ivar: _selectorValidator
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXDataTableStyle *tableStyle; // ivar: _tableStyle


-(NSInteger)compareSelector:(id)arg0 withOtherSelector:(id)arg1 ;
-(NSUInteger)isEvenNumber:(NSInteger)arg0 ;
-(NSUInteger)isOddNumber:(NSInteger)arg0 ;
-(id)cellStyleForIndexPath:(struct ? )arg0 ;
-(id)cellStyleForIndexPath:(struct ? )arg0 usingBaseStyle:(id)arg1 ;
-(id)columnStyleForColumnIndex:(NSUInteger)arg0 ;
-(id)columnStyleForColumnIndex:(NSUInteger)arg0 usingBaseStyle:(id)arg1 ;
-(id)dataTableStyle;
-(id)descriptorForIdentifier:(id)arg0 ;
-(id)filterDuplicateSequentialStyles:(id)arg0 ;
-(id)headerCellStyleForIndexPath:(struct ? )arg0 ;
-(id)headerColumnStyleForColumnIndex:(NSUInteger)arg0 ;
-(id)headerRowStyleForRowIndex:(NSUInteger)arg0 ;
-(id)initWithRecordStore:(id)arg0 tableStyle:(id)arg1 dataOrientation:(NSUInteger)arg2 rowStyleMerger:(id)arg3 columnStyleMerger:(id)arg4 cellStyleMerger:(id)arg5 ;
-(id)rowStyleForRowIndex:(NSUInteger)arg0 ;
-(id)rowStyleForRowIndex:(NSUInteger)arg0 usingBaseStyle:(id)arg1 ;
-(id)sortStylesMatchesBySelectorWeight:(id)arg0 ;
-(id)styleByMergingStyleMatches:(id)arg0 forBaseStyle:(id)arg1 merger:(id)arg2 ;


@end


#endif