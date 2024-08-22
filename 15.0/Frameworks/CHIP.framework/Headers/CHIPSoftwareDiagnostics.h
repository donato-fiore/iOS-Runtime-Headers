// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPSOFTWAREDIAGNOSTICS_H
#define CHIPSOFTWAREDIAGNOSTICS_H



#import "CHIPCluster.h"

@interface CHIPSoftwareDiagnostics : CHIPCluster

@property (readonly) SoftwareDiagnosticsCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentHeapHighWatermarkWithResponseHandler:(id)arg0 ;
-(void)resetWatermarks:(id)arg0 ;


@end


#endif