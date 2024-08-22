// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPAUDIOOUTPUT_H
#define CHIPAUDIOOUTPUT_H



#import "CHIPCluster.h"

@interface CHIPAudioOutput : CHIPCluster

@property (readonly) AudioOutputCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeAudioOutputListWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)renameOutput:(unsigned char)arg0 name:(id)arg1 responseHandler:(id)arg2 ;
-(void)selectOutput:(unsigned char)arg0 responseHandler:(id)arg1 ;


@end


#endif