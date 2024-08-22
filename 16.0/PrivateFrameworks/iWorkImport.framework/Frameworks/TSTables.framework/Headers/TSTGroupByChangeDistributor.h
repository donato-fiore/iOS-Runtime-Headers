// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTGROUPBYCHANGEDISTRIBUTOR_H
#define TSTGROUPBYCHANGEDISTRIBUTOR_H

@protocol TSTGroupByChangeProtocol;


#import "TSCEDistributor.h"

@interface TSTGroupByChangeDistributor : TSCEDistributor <TSTGroupByChangeProtocol>





-(id)protocol;
-(void)didAddRowUID:(struct TSKUIDStruct )arg0 toGroup:(id)arg1 ;
-(void)didChangeGroupByStructure;
-(void)didCreateGroup:(id)arg0 ;
-(void)didRemoveGroup:(id)arg0 ;
-(void)didRemoveRowUID:(struct TSKUIDStruct )arg0 fromGroup:(id)arg1 ;
-(void)endOfGroupingChangesBatch;
-(void)startOfGroupingChangesBatch;
-(void)willRemoveGroup:(id)arg0 ;


@end


#endif