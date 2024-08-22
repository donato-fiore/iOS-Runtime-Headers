// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALCMSHOWCHANNEL_H
#define SALCMSHOWCHANNEL_H



#import "SABaseClientBoundCommand.h"
#import "SALCMTvChannel.h"

@interface SALCMShowChannel : SABaseClientBoundCommand

@property (retain, nonatomic) SALCMTvChannel *channel;


+(id)showChannel;
+(id)showChannelWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif