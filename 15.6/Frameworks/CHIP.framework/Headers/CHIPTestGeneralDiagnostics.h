// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTGENERALDIAGNOSTICS_H
#define CHIPTESTGENERALDIAGNOSTICS_H



#import "CHIPGeneralDiagnostics.h"

@interface CHIPTestGeneralDiagnostics : CHIPGeneralDiagnostics {
    GeneralDiagnosticsClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActiveHardwareFaultsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActiveNetworkFaultsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActiveRadioFaultsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBootReasonsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNetworkInterfacesWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRebootCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTotalOperationalHoursWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUpTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif