// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCALAYERHOST_H
#define VCCALAYERHOST_H

@class CALayerHost;


#import "AVCRemoteVideoClient.h"

@interface VCCALayerHost : CALayerHost {
    AVCRemoteVideoClient *_remoteVideoClient;
}




-(id)initWithRemoteVideoClient:(id)arg0 ;
-(void)dealloc;
-(void)layoutSublayers;


@end


#endif