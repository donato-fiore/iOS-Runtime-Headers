// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTAPPLICATIONBASIC_H
#define CHIPTESTAPPLICATIONBASIC_H



#import "CHIPApplicationBasic.h"

@interface CHIPTestApplicationBasic : CHIPApplicationBasic {
    ApplicationBasicClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAllowedVendorListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeApplicationNameWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeApplicationVersionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeApplicationWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeProductIDWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeVendorIDWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeVendorNameWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif