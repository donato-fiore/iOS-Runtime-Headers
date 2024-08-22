// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORTEXTMESSAGEMESSAGETYPEWRAPPER_H
#define BLASTDOORTEXTMESSAGEMESSAGETYPEWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorAudioMessage.h"
#import "BlastDoorBalloonPlugin.h"
#import "BlastDoorSticker.h"
#import "BlastDoorTapBack.h"
#import "BlastDoorMessage.h"
#import "BlastDoorTypingIndicator.h"

@interface BlastDoorTextMessageMessageTypeWrapper : NSObject {
    ? textMessage_MessageType;
}


@property (nonatomic, readonly) BlastDoorAudioMessage *audioMessage;
@property (nonatomic, readonly) BlastDoorBalloonPlugin *balloonPlugin;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorSticker *sticker;
@property (nonatomic, readonly) BlastDoorTapBack *tapback;
@property (nonatomic, readonly) BlastDoorMessage *textMessage;
@property (nonatomic, readonly) NSUInteger type;
@property (nonatomic, readonly) BlastDoorTypingIndicator *typingIndicator;


-(id)init;


@end


#endif