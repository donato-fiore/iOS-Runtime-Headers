// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFAUDIODEVICEINFOMUTATION_H
#define _AFAUDIODEVICEINFOMUTATION_H

@class NSString, NSUUID;
@protocol AFAudioDeviceInfoMutating;

#import <Foundation/Foundation.h>

#import "AFAudioDeviceInfo.h"

@interface _AFAudioDeviceInfoMutation : NSObject <AFAudioDeviceInfoMutating>

 {
    AFAudioDeviceInfo *_base;
    NSString *_route;
    BOOL _isRemoteDevice;
    NSUUID *_deviceUID;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsRemoteDevice;
-(BOOL)isDirty;
-(id)getDeviceUID;
-(id)getRoute;
-(id)initWithBase:(id)arg0 ;
-(void)setDeviceUID:(id)arg0 ;
-(void)setIsRemoteDevice:(BOOL)arg0 ;
-(void)setRoute:(id)arg0 ;


@end


#endif