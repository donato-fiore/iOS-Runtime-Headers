// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPCONTENTLAUNCH_H
#define CHIPCONTENTLAUNCH_H



#import "CHIPCluster.h"

@interface CHIPContentLaunch : CHIPCluster

@property (readonly) ContentLaunchCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)launchContent:(unsigned char)arg0 data:(id)arg1 responseHandler:(id)arg2 ;
-(void)launchURL:(id)arg0 displayString:(id)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeAcceptsHeaderListWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeSupportedStreamingTypesWithResponseHandler:(id)arg0 ;


@end


#endif