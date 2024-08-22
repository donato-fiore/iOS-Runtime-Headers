// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVLIVEPLAYERCAMERARENDERLINK_H
#define PVLIVEPLAYERCAMERARENDERLINK_H



#import "PVLivePlayerRenderLink.h"

@interface PVLivePlayerCameraRenderLink : PVLivePlayerRenderLink



-(id)initWithPlayerCameraSource:(id)arg0 ;
-(void)cameraSourceDroppedFrame;
-(void)cameraSourceRecievedFrameSet:(id)arg0 ;


@end


#endif