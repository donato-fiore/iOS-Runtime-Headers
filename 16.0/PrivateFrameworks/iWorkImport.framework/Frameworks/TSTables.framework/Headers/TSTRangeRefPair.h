// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTRANGEREFPAIR_H
#define TSTRANGEREFPAIR_H


#import <Foundation/Foundation.h>

#import "TSCECellTractRef.h"
#import "TSTTableInfo.h"
#import "TSTTableModel.h"

@interface TSTRangeRefPair : NSObject

@property ? baseRangeRef;
@property (retain, nonatomic) TSCECellTractRef *baseTractRef; // ivar: _baseTractRef
@property ? chromeRangeRef;
@property (retain, nonatomic) TSCECellTractRef *chromeTractRef; // ivar: _chromeTractRef
@property (retain, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (retain, nonatomic) TSTTableModel *tableModel; // ivar: _tableModel
@property (readonly, nonatomic) TSKUIDStruct tableUID;


-(id)initWithBaseTractRef:(id)arg0 calcEngine:(id)arg1 ;
-(id)initWithChromeTractRef:(id)arg0 calcEngine:(id)arg1 ;


@end


#endif