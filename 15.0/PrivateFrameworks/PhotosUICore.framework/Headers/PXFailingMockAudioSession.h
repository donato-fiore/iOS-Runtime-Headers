// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFAILINGMOCKAUDIOSESSION_H
#define PXFAILINGMOCKAUDIOSESSION_H



#import "PXMockAudioSession.h"

@interface PXFailingMockAudioSession : PXMockAudioSession



-(struct ? )currentTime;
-(void)_fail;
-(void)pause;
-(void)play;
-(void)playFromTime:(struct ? )arg0 ;
-(void)playFromTime:(struct ? )arg0 hostTime:(struct ? )arg1 ;
-(void)prepareToPlay;


@end


#endif