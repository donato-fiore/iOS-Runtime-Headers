// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPOPERATIONALCREDENTIALS_H
#define CHIPOPERATIONALCREDENTIALS_H



#import "CHIPCluster.h"

@interface CHIPOperationalCredentials : CHIPCluster

@property (readonly) OperationalCredentialsCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)addOpCert:(id)arg0 iCACertificate:(id)arg1 iPKValue:(id)arg2 caseAdminNode:(NSUInteger)arg3 adminVendorId:(unsigned short)arg4 responseHandler:(id)arg5 ;
-(void)opCSRRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeFabricsListWithResponseHandler:(id)arg0 ;
-(void)removeAllFabrics:(id)arg0 ;
-(void)removeFabric:(NSUInteger)arg0 nodeId:(NSUInteger)arg1 vendorId:(unsigned short)arg2 responseHandler:(id)arg3 ;
-(void)setFabric:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)updateFabricLabel:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif