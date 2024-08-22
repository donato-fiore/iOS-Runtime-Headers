// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCETABLESBYNAMEDISTRIBUTOR_H
#define TSCETABLESBYNAMEDISTRIBUTOR_H

@protocol TSCETableNameChangeProtocol;


#import "TSCEDistributor.h"

@interface TSCETablesByNameDistributor : TSCEDistributor <TSCETableNameChangeProtocol>





-(id)protocol;
-(void)didAddTableName:(id)arg0 forTableUID:(struct TSKUIDStruct )arg1 ;
-(void)didChangeTableName:(id)arg0 fromTableName:(id)arg1 forTableUID:(struct TSKUIDStruct )arg2 ;
-(void)didRemoveTableName:(id)arg0 forTableUID:(struct TSKUIDStruct )arg1 ;


@end


#endif