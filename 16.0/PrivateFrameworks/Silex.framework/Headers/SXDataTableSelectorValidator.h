// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDATATABLESELECTORVALIDATOR_H
#define SXDATATABLESELECTORVALIDATOR_H


#import <Foundation/Foundation.h>

#import "SXDataRecordStore.h"

@interface SXDataTableSelectorValidator : NSObject

@property (readonly, nonatomic) NSUInteger dataOrientation; // ivar: _dataOrientation
@property (readonly, nonatomic) SXDataRecordStore *recordStore; // ivar: _recordStore


-(BOOL)validateCellSelector:(id)arg0 forIndexPath:(struct ? )arg1 ;
-(BOOL)validateColumnSelector:(id)arg0 forColumnIndex:(NSUInteger)arg1 ;
-(BOOL)validateRowSelector:(id)arg0 forRowIndex:(NSUInteger)arg1 ;
-(id)conditionEngineForSelector:(id)arg0 forIndexPath:(struct ? )arg1 ;
-(id)descriptorForIndexPath:(struct ? )arg0 ;
-(id)initWithRecordStore:(id)arg0 dataOrientation:(NSUInteger)arg1 ;


@end


#endif