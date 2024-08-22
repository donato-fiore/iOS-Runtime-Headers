// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCMEDIAREMOTEDISPLAYCONTEXT_H
#define PCMEDIAREMOTEDISPLAYCONTEXT_H

@class MRNowPlayingPlayerResponse, NSString;


#import "PCDisplayContext.h"

@interface PCMediaRemoteDisplayContext : PCDisplayContext

@property (copy, nonatomic) MRNowPlayingPlayerResponse *localDeviceState; // ivar: _localDeviceState
@property (copy, nonatomic) NSString *mediaRemoteID; // ivar: _mediaRemoteID
@property (copy, nonatomic) MRNowPlayingPlayerResponse *proxDeviceState; // ivar: _proxDeviceState
@property (copy, nonatomic) MRNowPlayingPlayerResponse *selectedDeviceState; // ivar: _selectedDeviceState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)userActivityInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif