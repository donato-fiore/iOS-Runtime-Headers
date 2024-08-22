// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTSOFTWAREDIAGNOSTICS_H
#define CHIPTESTSOFTWAREDIAGNOSTICS_H



#import "CHIPSoftwareDiagnostics.h"

@interface CHIPTestSoftwareDiagnostics : CHIPSoftwareDiagnostics {
    SoftwareDiagnosticsClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentHeapFreeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentHeapHighWatermarkWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentHeapUsedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeThreadMetricsWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif