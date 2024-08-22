// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVLIVEPLAYERCAMERASOURCE_H
#define PVLIVEPLAYERCAMERASOURCE_H

@class NSString;
@protocol PVLivePlayerSource;

#import <Foundation/Foundation.h>

#import "PVFrameSet.h"
#import "PVLivePlayerCameraRenderLink.h"

@interface PVLivePlayerCameraSource : NSObject <PVLivePlayerSource>

 {
    *HGSynchronizable _lock;
    PVFrameSet *_mostRecentFrameSet;
    PVLivePlayerCameraRenderLink *_renderLink;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)imageBufferForHostTime:(CGFloat)arg0 ;
-(id)init;
-(struct ? )itemTimeForHostTime:(CGFloat)arg0 ;
-(void)cameraFrameSetDropped;
-(void)cameraFrameSetRecieved:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)play;
-(void)registerRenderLink:(id)arg0 ;
-(void)seekToTime:(struct ? )arg0 ;
-(void)setMuted:(BOOL)arg0 ;


@end


#endif