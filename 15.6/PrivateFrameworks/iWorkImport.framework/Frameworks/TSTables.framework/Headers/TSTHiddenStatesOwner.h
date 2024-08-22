// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTHIDDENSTATESOWNER_H
#define TSTHIDDENSTATESOWNER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TSCECalculationEngine.h"
#import "TSTTableModel.h"

@interface TSTHiddenStatesOwner : NSObject {
    TSCECalculationEngine *_calcEngine;
    NSMutableDictionary *_hiddenStatesByRowExtentUuid;
    NSMutableDictionary *_hiddenStatesByColumnExtentUuid;
}


@property (nonatomic) TSKUIDStruct baseTableUID; // ivar: _baseTableUID
@property (weak, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel


-(id)calcEngine;
-(id)description;
-(id)hiddenStates;
-(id)hiddenStatesByExtentUid:(struct TSKUIDStruct *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 forBaseTable:(id)arg2 ;
-(id)initWithBaseTable:(id)arg0 ;
-(int)registerWithCalcEngine:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(void)didChangeExtentUids:(id)arg0 ;
-(void)registerHiddenStates:(id)arg0 baseOwnerUID:(struct TSKUIDStruct *)arg1 ;
-(void)remapTableUIDsInFormulasWithMap:(*void)arg0 calcEngine:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)unregisterFromCalcEngine;
-(void)unregisterHiddenStates:(id)arg0 ;
-(void)willChangeExtentUids:(id)arg0 ;


@end


#endif