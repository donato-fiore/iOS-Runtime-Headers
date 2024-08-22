// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYVISUALDIAGNOSTICSTABLEROW_H
#define _PXSTORYVISUALDIAGNOSTICSTABLEROW_H

@class NSSet, NSMutableDictionary;
@protocol PXStoryVisualDiagnosticsTableRowConfiguration;

#import <Foundation/Foundation.h>

#import "PXStoryVisualDiagnosticsTable.h"

@interface _PXStoryVisualDiagnosticsTableRow : NSObject <PXStoryVisualDiagnosticsTableRowConfiguration>

 {
    NSSet *_availableColumnIdentifiers;
}


@property (readonly, nonatomic) NSMutableDictionary *cellsByColumnIdentifier; // ivar: _cellsByColumnIdentifier
@property (nonatomic) CGFloat height; // ivar: _height
@property (readonly, weak, nonatomic) PXStoryVisualDiagnosticsTable *table; // ivar: _table


-(id)initWithTable:(id)arg0 availableColumnIdentifiers:(id)arg1 ;
-(void)addCellForColumnWithIdentifier:(id)arg0 format:(id)arg1 ;
-(void)addCellForColumnWithIdentifier:(id)arg0 rendering:(id)arg1 ;
-(void)addCellForColumnWithIdentifier:(id)arg0 text:(id)arg1 ;


@end


#endif