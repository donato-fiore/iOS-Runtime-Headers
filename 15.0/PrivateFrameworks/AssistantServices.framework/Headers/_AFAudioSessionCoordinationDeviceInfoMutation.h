// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFAUDIOSESSIONCOORDINATIONDEVICEINFOMUTATION_H
#define _AFAUDIOSESSIONCOORDINATIONDEVICEINFOMUTATION_H

@class NSString;
@protocol AFAudioSessionCoordinationDeviceInfoMutating;

#import <Foundation/Foundation.h>

#import "AFAudioSessionCoordinationDeviceInfo.h"
#import "AFPeerInfo.h"
#import "AFAudioSessionCoordinationSystemInfo.h"

@interface _AFAudioSessionCoordinationDeviceInfoMutation : NSObject <AFAudioSessionCoordinationDeviceInfoMutating>

 {
    AFAudioSessionCoordinationDeviceInfo *_baseModel;
    AFPeerInfo *_peerInfo;
    AFAudioSessionCoordinationSystemInfo *_systemInfo;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setPeerInfo:(id)arg0 ;
-(void)setSystemInfo:(id)arg0 ;


@end


#endif