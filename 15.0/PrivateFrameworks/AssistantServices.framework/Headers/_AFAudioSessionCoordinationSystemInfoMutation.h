// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFAUDIOSESSIONCOORDINATIONSYSTEMINFOMUTATION_H
#define _AFAUDIOSESSIONCOORDINATIONSYSTEMINFOMUTATION_H

@class NSString, NSUUID;
@protocol AFAudioSessionCoordinationSystemInfoMutating;

#import <Foundation/Foundation.h>

#import "AFAudioSessionCoordinationSystemInfo.h"

@interface _AFAudioSessionCoordinationSystemInfoMutation : NSObject <AFAudioSessionCoordinationSystemInfoMutating>

 {
    AFAudioSessionCoordinationSystemInfo *_baseModel;
    BOOL _isSupportedAndEnabled;
    NSString *_homeKitRoomName;
    NSUUID *_homeKitMediaSystemIdentifier;
    NSString *_mediaRemoteGroupIdentifier;
    NSString *_mediaRemoteRouteIdentifier;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setHomeKitMediaSystemIdentifier:(id)arg0 ;
-(void)setHomeKitRoomName:(id)arg0 ;
-(void)setIsSupportedAndEnabled:(BOOL)arg0 ;
-(void)setMediaRemoteGroupIdentifier:(id)arg0 ;
-(void)setMediaRemoteRouteIdentifier:(id)arg0 ;


@end


#endif