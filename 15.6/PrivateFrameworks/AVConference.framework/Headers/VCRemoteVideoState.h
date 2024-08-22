// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCREMOTEVIDEOSTATE_H
#define VCREMOTEVIDEOSTATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VideoAttributes.h"

@interface VCRemoteVideoState : NSObject

@property BOOL hasReceivedFirstFrame; // ivar: _hasReceivedFirstFrame
@property BOOL isMediaStalled; // ivar: _isMediaStalled
@property BOOL isVideoDegraded; // ivar: _isVideoDegraded
@property BOOL isVideoPaused; // ivar: _isVideoPaused
@property BOOL isVideoSuspended; // ivar: _isVideoSuspended
@property (copy, nonatomic) NSString *localInterfaceType; // ivar: _localInterfaceType
@property (copy, nonatomic) NSString *remoteInterfaceType; // ivar: _remoteInterfaceType
@property (retain) VideoAttributes *remoteScreenAttributes; // ivar: _remoteScreenAttributes
@property (retain) VideoAttributes *remoteVideoAttributes; // ivar: _remoteVideoAttributes


-(id)description;
-(void)dealloc;


@end


#endif