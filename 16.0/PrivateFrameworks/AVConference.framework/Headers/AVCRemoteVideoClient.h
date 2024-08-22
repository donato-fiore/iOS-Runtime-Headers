// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCREMOTEVIDEOCLIENT_H
#define AVCREMOTEVIDEOCLIENT_H

@class CALayer, NSDictionary, NSString;
@protocol OS_dispatch_queue, AVCRemoteVideoClientDelegate;

#import <Foundation/Foundation.h>

#import "VCCALayerHost.h"
#import "AVConferenceXPCClient.h"
#import "VideoAttributes.h"

@interface AVCRemoteVideoClient : NSObject {
    CALayer *_primaryCameraLayer;
    CALayer *_secondaryCameraLayer;
    CALayer *_screenLayer;
    CALayer *_primaryCameraSubLayer;
    CALayer *_secondaryCameraSubLayer;
    CALayer *_screenSubLayer;
    VCCALayerHost *_caLayerHost;
    AVConferenceXPCClient *_connection;
    int _activeVideoMode;
    NSDictionary *_slotsForModes;
    NSObject<OS_dispatch_queue> *_avcRemoteVideoQueue;
    BOOL _layerHostMode;
}


@property (copy, nonatomic) NSString *connectionTypeString; // ivar: _connectionTypeString
@property (readonly, nonatomic) NSObject<AVCRemoteVideoClientDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hasReceivedFirstFrame; // ivar: _hasReceivedFirstFrame
@property (nonatomic) BOOL hasReceivedLastFrame; // ivar: _hasReceivedLastFrame
@property (nonatomic) BOOL isMediaStalled; // ivar: _isMediaStalled
@property (nonatomic) BOOL isVideoDegraded; // ivar: _isVideoDegraded
@property (nonatomic) BOOL isVideoPaused; // ivar: _isVideoPaused
@property (nonatomic) BOOL isVideoSuspended; // ivar: _isVideoSuspended
@property (retain, nonatomic) VideoAttributes *remoteScreenAttributes; // ivar: _remoteScreenAttributes
@property (retain, nonatomic) VideoAttributes *remoteVideoAttributes; // ivar: _remoteVideoAttributes
@property (nonatomic) BOOL shouldDisplayVideoInfoLayer; // ivar: _shouldDisplayVideoInfoLayer
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken


-(*id)subLayerRefForMode:(int)arg0 ;
-(BOOL)createCALayerHostForRootLayer:(id)arg0 withContextId:(unsigned int)arg1 ;
-(BOOL)setVideoLayerHost:(id)arg0 forMode:(int)arg1 ;
-(id)findInfoSubLayerFromLayer:(id)arg0 ;
-(id)initWithStreamToken:(NSInteger)arg0 delegate:(id)arg1 ;
-(id)setFenceHandleAndGetXPCObject:(*id)arg0 ;
-(id)slotForMode:(int)arg0 ;
-(id)subLayerForMode:(int)arg0 ;
-(void)adjustInfoSubLayerBounds:(struct CGRect )arg0 forSuperLayer:(id)arg1 ;
-(void)checkpointDidReceiveFirstFrame;
-(void)checkpointVideoAttributesDidChange;
-(void)cleanupLayerHost;
-(void)cleanupSubLayerForMode:(int)arg0 ;
-(void)cleanupVideoLayerForAllModes;
-(void)dealloc;
-(void)deregisterBlocksForNotifications;
-(void)drawText:(id)arg0 inSubLayer:(id)arg1 ;
-(void)insertInfoSubLayerIntoLayer:(id)arg0 videoMode:(int)arg1 ;
-(void)insertSubLayerInLayer:(id)arg0 videoMode:(int)arg1 videoSlot:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerBlocksForNotifications;
-(void)setActiveVideoLayerForMode:(int)arg0 ;
-(void)setActiveVideoModeFromRemoteVideoAttribute:(id)arg0 ;
-(void)setLayerHostBounds:(struct CGRect )arg0 ;
-(void)setRemoteVideoLayerBounds:(struct CGRect )arg0 ;
-(void)setRootLayer:(id)arg0 ;
-(void)setVideoLayer:(id)arg0 forMode:(int)arg1 ;
-(void)terminateConnection;
-(void)updateConnectionInfoWithLocalInterfaceType:(id)arg0 remoteInterfaceType:(id)arg1 ;


@end


#endif