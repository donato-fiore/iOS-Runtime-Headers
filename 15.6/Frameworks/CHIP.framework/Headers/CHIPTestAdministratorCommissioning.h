// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTADMINISTRATORCOMMISSIONING_H
#define CHIPTESTADMINISTRATORCOMMISSIONING_H



#import "CHIPAdministratorCommissioning.h"

@interface CHIPTestAdministratorCommissioning : CHIPAdministratorCommissioning {
    AdministratorCommissioningClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAdminFabricIndexWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAdminVendorIdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeWindowStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif