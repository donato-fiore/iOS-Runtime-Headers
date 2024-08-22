// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPMEDIAPLAYBACK_H
#define CHIPMEDIAPLAYBACK_H



#import "CHIPCluster.h"

@interface CHIPMediaPlayback : CHIPCluster

@property (readonly) MediaPlaybackCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)mediaFastForward:(id)arg0 ;
-(void)mediaNext:(id)arg0 ;
-(void)mediaPause:(id)arg0 ;
-(void)mediaPlay:(id)arg0 ;
-(void)mediaPrevious:(id)arg0 ;
-(void)mediaRewind:(id)arg0 ;
-(void)mediaSkipBackward:(NSUInteger)arg0 responseHandler:(id)arg1 ;
-(void)mediaSkipForward:(NSUInteger)arg0 responseHandler:(id)arg1 ;
-(void)mediaSkipSeek:(NSUInteger)arg0 responseHandler:(id)arg1 ;
-(void)mediaStartOver:(id)arg0 ;
-(void)mediaStop:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;


@end


#endif