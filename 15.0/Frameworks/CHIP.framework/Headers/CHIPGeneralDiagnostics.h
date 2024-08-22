// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPGENERALDIAGNOSTICS_H
#define CHIPGENERALDIAGNOSTICS_H



#import "CHIPCluster.h"

@interface CHIPGeneralDiagnostics : CHIPCluster

@property (readonly) GeneralDiagnosticsCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeNetworkInterfacesWithResponseHandler:(id)arg0 ;
-(void)readAttributeRebootCountWithResponseHandler:(id)arg0 ;


@end


#endif