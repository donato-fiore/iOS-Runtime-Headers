// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPTRUSTEDROOTCERTIFICATES_H
#define CHIPTRUSTEDROOTCERTIFICATES_H



#import "CHIPCluster.h"

@interface CHIPTrustedRootCertificates : CHIPCluster

@property (readonly) TrustedRootCertificatesCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)addTrustedRootCertificate:(id)arg0 responseHandler:(id)arg1 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)removeTrustedRootCertificate:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif