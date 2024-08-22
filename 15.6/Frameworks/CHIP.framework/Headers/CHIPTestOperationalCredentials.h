// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTOPERATIONALCREDENTIALS_H
#define CHIPTESTOPERATIONALCREDENTIALS_H



#import "CHIPOperationalCredentials.h"

@interface CHIPTestOperationalCredentials : CHIPOperationalCredentials {
    OperationalCredentialsClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCommissionedFabricsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentFabricIndexWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFabricsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNOCsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSupportedFabricsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTrustedRootCertificatesWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif