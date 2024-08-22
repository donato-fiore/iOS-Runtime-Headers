// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTPIVOTCELLSETTER_H
#define TSTPIVOTCELLSETTER_H

@class TSULocale, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSTTableInfo.h"
#import "TSTCell.h"
#import "TSCEBulkCellChangeMinion.h"

@interface TSTPivotCellSetter : NSObject {
    TSTTableInfo *_pivotTable;
    TSTCell *_cell;
    TSCEBulkCellChangeMinion *_minion;
    BOOL _preservingStyles;
    NSObject<OS_dispatch_queue> *_workerQueue;
    TSULocale *_documentLocale;
    NSString *_blankString;
}


@property (readonly, nonatomic) BOOL madeChange; // ivar: _madeChange


-(id)initWithPivotTable:(id)arg0 minion:(id)arg1 preservingStyles:(BOOL)arg2 ;
-(void)applyCellValue:(id)arg0 atUidCoord:(struct TSKUIDStructCoord )arg1 appendTotalForPivotsFlag:(BOOL)arg2 ;
-(void)applyFormula:(id)arg0 atUidCoord:(struct TSKUIDStructCoord )arg1 ;
-(void)blockUntilCompleted;
-(void)setStringValue:(id)arg0 atUidCoord:(struct TSKUIDStructCoord )arg1 ;


@end


#endif