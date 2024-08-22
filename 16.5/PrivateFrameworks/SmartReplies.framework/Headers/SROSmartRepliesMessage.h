// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SROSMARTREPLIESMESSAGE_H
#define SROSMARTREPLIESMESSAGE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "_TtC12SmartReplies21SRSmartRepliesMessage.h"

@interface SROSmartRepliesMessage : NSObject {
    _TtC12SmartReplies21SRSmartRepliesMessage *_underlyingMessage;
}


@property (retain, nonatomic) NSDate *dateSent;
@property (nonatomic, getter=isEmote) BOOL emote;
@property (nonatomic, getter=isRead) BOOL read;
@property (copy, nonatomic) NSString *senderIdentifier;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic, getter=isTapBack) BOOL tapBack;
@property (copy, nonatomic) NSString *title;


-(id)init;


@end


#endif