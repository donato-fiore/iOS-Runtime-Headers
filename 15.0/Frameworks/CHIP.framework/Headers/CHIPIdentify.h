// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPIDENTIFY_H
#define CHIPIDENTIFY_H



#import "CHIPCluster.h"

@interface CHIPIdentify : CHIPCluster

@property (readonly) IdentifyCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)identify:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)identifyQuery:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeIdentifyTimeWithResponseHandler:(id)arg0 ;
-(void)writeAttributeIdentifyTimeWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;


@end


#endif