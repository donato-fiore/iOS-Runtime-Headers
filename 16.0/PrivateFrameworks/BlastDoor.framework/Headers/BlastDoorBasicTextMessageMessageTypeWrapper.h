// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORBASICTEXTMESSAGEMESSAGETYPEWRAPPER_H
#define BLASTDOORBASICTEXTMESSAGEMESSAGETYPEWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorBasicAudioMessage.h"
#import "BlastDoorBasicTapBack.h"
#import "BlastDoorBasicMessage.h"
#import "BlastDoorBasicTypingIndicator.h"
#import "BlastDoorUnsupportedMessage.h"

@interface BlastDoorBasicTextMessageMessageTypeWrapper : NSObject {
    ? basicTextMessage_MessageType;
}


@property (nonatomic, readonly) BlastDoorBasicAudioMessage *audioMessage;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorBasicTapBack *tapback;
@property (nonatomic, readonly) BlastDoorBasicMessage *textMessage;
@property (nonatomic, readonly) NSUInteger type;
@property (nonatomic, readonly) BlastDoorBasicTypingIndicator *typingIndicator;
@property (nonatomic, readonly) BlastDoorUnsupportedMessage *unsupported;


-(id)init;


@end


#endif