// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPAPPLICATIONLAUNCHER_H
#define CHIPAPPLICATIONLAUNCHER_H



#import "CHIPCluster.h"

@interface CHIPApplicationLauncher : CHIPCluster

@property (readonly) ApplicationLauncherCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)launchApp:(id)arg0 catalogVendorId:(unsigned short)arg1 applicationId:(id)arg2 responseHandler:(id)arg3 ;
-(void)readAttributeApplicationLauncherListWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;


@end


#endif