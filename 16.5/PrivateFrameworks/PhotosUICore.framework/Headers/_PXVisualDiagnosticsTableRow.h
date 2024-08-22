// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXVISUALDIAGNOSTICSTABLEROW_H
#define _PXVISUALDIAGNOSTICSTABLEROW_H

@class NSSet, NSMutableDictionary;
@protocol PXVisualDiagnosticsTableRowConfiguration;

#import <Foundation/Foundation.h>

#import "PXVisualDiagnosticsTable.h"

@interface _PXVisualDiagnosticsTableRow : NSObject <PXVisualDiagnosticsTableRowConfiguration>

 {
    NSSet *_availableColumnIdentifiers;
}


@property (readonly, nonatomic) NSMutableDictionary *cellsByColumnIdentifier; // ivar: _cellsByColumnIdentifier
@property (nonatomic) CGFloat height; // ivar: _height
@property (readonly, weak, nonatomic) PXVisualDiagnosticsTable *table; // ivar: _table


-(id)initWithTable:(id)arg0 availableColumnIdentifiers:(id)arg1 ;
-(void)addCellForColumnWithIdentifier:(id)arg0 format:(id)arg1 ;
-(void)addCellForColumnWithIdentifier:(id)arg0 rendering:(id)arg1 ;
-(void)addCellForColumnWithIdentifier:(id)arg0 text:(id)arg1 ;


@end


#endif