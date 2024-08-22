// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVISUALDIAGNOSTICSTABLE_H
#define PXVISUALDIAGNOSTICSTABLE_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSDictionary, NSString;
@protocol PXVisualDiagnosticsTableColumnsConfiguration, PXVisualDiagnosticsTableRowsConfiguration, PXVisualDiagnosticsTableConfiguration;

#import <Foundation/Foundation.h>

#import "PXVisualDiagnosticsContext.h"
#import "_PXVisualDiagnosticsTableRow.h"

@interface PXVisualDiagnosticsTable : NSObject <PXVisualDiagnosticsTableColumnsConfiguration, PXVisualDiagnosticsTableRowsConfiguration, PXVisualDiagnosticsTableConfiguration>

 {
    NSMutableDictionary *_mutableColumns;
    NSMutableArray *_mutableColumnIdentifiers;
    PXVisualDiagnosticsContext *_context;
    _PXVisualDiagnosticsTableRow *_headerRow;
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