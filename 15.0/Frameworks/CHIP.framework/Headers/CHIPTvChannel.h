// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPTVCHANNEL_H
#define CHIPTVCHANNEL_H



#import "CHIPCluster.h"

@interface CHIPTvChannel : CHIPCluster

@property (readonly) TvChannelCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)changeChannel:(id)arg0 responseHandler:(id)arg1 ;
-(void)changeChannelByNumber:(unsigned short)arg0 minorNumber:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentTvChannelWithResponseHandler:(id)arg0 ;
-(void)readAttributeTvChannelLineupWithResponseHandler:(id)arg0 ;
-(void)readAttributeTvChannelListWithResponseHandler:(id)arg0 ;
-(void)skipChannel:(unsigned short)arg0 responseHandler:(id)arg1 ;


@end


#endif