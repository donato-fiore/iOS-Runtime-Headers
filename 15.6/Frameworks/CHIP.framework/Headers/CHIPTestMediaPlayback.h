// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTMEDIAPLAYBACK_H
#define CHIPTESTMEDIAPLAYBACK_H



#import "CHIPMediaPlayback.h"

@interface CHIPTestMediaPlayback : CHIPMediaPlayback {
    MediaPlaybackClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentStateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDurationWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePlaybackSpeedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSampledPositionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSeekRangeEndWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSeekRangeStartWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeStartTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif