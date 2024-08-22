// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELLWILLCHANGEDISTRIBUTOR_H
#define TSTCELLWILLCHANGEDISTRIBUTOR_H

@protocol TSTCellWillChangeProtocol;


#import "TSCEDistributor.h"

@interface TSTCellWillChangeDistributor : TSCEDistributor <TSTCellWillChangeProtocol>





-(id)protocol;
-(void)willApplyBaseCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)willApplyCell:(id)arg0 baseCellCoord:(struct TSUModelCellCoord )arg1 tableUID:(struct TSKUIDStruct *)arg2 ;
-(void)willApplyConcurrentCellMap:(id)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;
-(void)willRemoveRows:(*void)arg0 tableUID:(struct TSKUIDStruct *)arg1 ;


@end


#endif