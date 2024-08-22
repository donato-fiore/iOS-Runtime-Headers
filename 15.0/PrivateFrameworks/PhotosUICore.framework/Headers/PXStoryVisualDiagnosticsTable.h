// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYVISUALDIAGNOSTICSTABLE_H
#define PXSTORYVISUALDIAGNOSTICSTABLE_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSDictionary, NSString;
@protocol PXStoryVisualDiagnosticsTableColumnsConfiguration, PXStoryVisualDiagnosticsTableRowsConfiguration, PXStoryVisualDiagnosticsTableConfiguration;

#import <Foundation/Foundation.h>

#import "PXStoryVisualDiagnosticsContext.h"
#import "_PXStoryVisualDiagnosticsTableRow.h"

@interface PXStoryVisualDiagnosticsTable : NSObject <PXStoryVisualDiagnosticsTableColumnsConfiguration, PXStoryVisualDiagnosticsTableRowsConfiguration, PXStoryVisualDiagnosticsTableConfiguration>

 {
    NSMutableDictionary *_mutableColumns;
    NSMutableArray *_mutableColumnIdentifiers;
    PXStoryVisualDiagnosticsContext *_context;
    _PXStoryVisualDiagnosticsTableRow *_headerRow;
    NSInteger _pageIndex;
    CGRect _nextRowAvailableFrame;
}


@property (readonly, nonatomic) NSArray *columnIdentifiers; // ivar: _columnIdentifiers
@property (readonly, nonatomic) NSDictionary *columns; // ivar: _columns
@property (nonatomic) CGFloat defaultRowFontSize; // ivar: _defaultRowFontSize
@property (nonatomic) CGFloat defaultRowHeight; // ivar: _defaultRowHeight
@property (nonatomic) UIEdgeInsets margins; // ivar: _margins
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(void)_insertPageBreak;
-(void)_renderRow:(id)arg0 ;
-(void)_renderTitleIfNeeded;
-(void)addColumnWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)addRowWithConfiguration:(id)arg0 ;
-(void)configureColumnsWithConfiguration:(id)arg0 ;
-(void)renderInContext:(id)arg0 withRowsConfiguration:(id)arg1 ;


@end


#endif