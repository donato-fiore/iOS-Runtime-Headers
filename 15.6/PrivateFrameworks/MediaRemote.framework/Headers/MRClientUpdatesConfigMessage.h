// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRCLIENTUPDATESCONFIGMESSAGE_H
#define MRCLIENTUPDATESCONFIGMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRClientUpdatesConfigMessage : MRProtocolMessage

@property (readonly, nonatomic) BOOL artworkUpdates;
@property (readonly, nonatomic) BOOL keyboardUpdates;
@property (readonly, nonatomic) BOOL nowPlayingUpdates;
@property (readonly, nonatomic) BOOL outputDeviceUpdates;
@property (copy, nonatomic) NSArray *subscribedPlayerPaths; // ivar: _subscribedPlayerPaths
@property (readonly, nonatomic) BOOL systemEndpointUpdates;
@property (readonly, nonatomic) BOOL volumeUpdates;


-(NSUInteger)type;
-(id)initWithNowPlayingUpdates:(BOOL)arg0 artworkUpdates:(BOOL)arg1 volumeUpdates:(BOOL)arg2 keyboardUpdates:(BOOL)arg3 outputDeviceUpdates:(BOOL)arg4 systemEndpointUpdates:(BOOL)arg5 subscribedPlayerPaths:(id)arg6 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif