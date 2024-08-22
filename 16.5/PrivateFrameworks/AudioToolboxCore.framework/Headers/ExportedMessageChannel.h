// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXPORTEDMESSAGECHANNEL_H
#define EXPORTEDMESSAGECHANNEL_H

@protocol AUAudioUnitMessageChannelProtocol;

#import <Foundation/Foundation.h>

#import "AUMessageChannel_XPC.h"

@interface ExportedMessageChannel : NSObject <AUAudioUnitMessageChannelProtocol>

 {
    AUMessageChannel_XPC *_messageChannel;
}




-(id)initWithMessageChannel:(id)arg0 ;
-(void)onCallRemoteAU:(id)arg0 reply:(id)arg1 ;


@end


#endif