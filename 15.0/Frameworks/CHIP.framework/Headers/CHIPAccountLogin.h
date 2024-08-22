// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPACCOUNTLOGIN_H
#define CHIPACCOUNTLOGIN_H



#import "CHIPCluster.h"

@interface CHIPAccountLogin : CHIPCluster

@property (readonly) AccountLoginCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)getSetupPIN:(id)arg0 responseHandler:(id)arg1 ;
-(void)login:(id)arg0 setupPIN:(id)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;


@end


#endif