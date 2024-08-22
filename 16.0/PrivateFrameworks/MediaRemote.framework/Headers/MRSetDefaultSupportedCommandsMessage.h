// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSETDEFAULTSUPPORTEDCOMMANDSMESSAGE_H
#define MRSETDEFAULTSUPPORTEDCOMMANDSMESSAGE_H

@class NSString, NSArray;


#import "MRProtocolMessage.h"
#import "MRNowPlayingState.h"

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage {
    MRNowPlayingState *_state;
}


@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSArray *supportedCommands;


-(NSUInteger)type;
-(id)initWithDefaultSupportedCommands:(id)arg0 forPlayerPath:(id)arg1 ;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;


@end


#endif