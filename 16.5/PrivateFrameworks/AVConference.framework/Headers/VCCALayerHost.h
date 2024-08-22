// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCALAYERHOST_H
#define VCCALAYERHOST_H

@class CALayerHost;


#import "AVCRemoteVideoClient.h"

@interface VCCALayerHost : CALayerHost {
    AVCRemoteVideoClient *remoteVideoClient;
}




-(id)initWithRemoteVideoClient:(id)arg0 ;
-(void)layoutSublayers;


@end


#endif